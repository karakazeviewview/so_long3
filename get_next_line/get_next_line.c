#include "get_next_line.h"

char	*free_str(char **buff, char **save)
{
	if (buff != NULL)
	{
		free(*buff);
		*buff = NULL;
	}
	if (save != NULL)
	{
		free(*save);
		*save = NULL;
	}
	return (NULL);
}

char	*read_line(int fd, char *save)
{
	char	*tmp;
	ssize_t	read_size;
	char	*buf;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	read_size = 1;
	while (!ft_strchr_gnl(save, '\n') && read_size != 0)
	{
		read_size = read(fd, buf, BUFFER_SIZE);
		if (read_size == -1 || (read_size == 0 && save[0] == '\0'))
			return (free_str(&buf, &save));
		buf[read_size] = '\0';
		tmp = ft_strjoin_gnl(save, buf);
		if (tmp == NULL)
			return (free_str(&buf, &save));
		free_str(NULL, &save);
		save = tmp;
	}
	free_str(&buf, NULL);
	return (save);
}

char	*get_line(char *save)
{
	char	*line;
	int		i;

	i = 0;
	while (save[i] && save[i] != '\n')
	{
		i++;
	}
	line = malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (save[i])
	{
		line[i] = save[i];
		if (line[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*rest_str(char *save)
{
	char	*rest;
	int		i;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i])
		return (free_str(NULL, &save));
	i++;
	rest = ft_strdup_gnl(&save[i]);
	free_str(NULL, &save);
	if (rest == NULL)
		return (NULL);
	save = rest;
	return (rest);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*output_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (save == NULL)
	{
		save = ft_strdup_gnl("");
		if (save == NULL)
			return (NULL);
	}
	save = read_line(fd, save);
	if (!save)
		return (NULL);
	output_line = get_line(save);
	if (output_line == NULL)
		return (free_str(NULL, &save));
	save = rest_str(save);
	return (output_line);
}
