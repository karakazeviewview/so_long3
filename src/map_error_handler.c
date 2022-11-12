#include "so_long.h"

static int	wall_error(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		if (map[i][0] != '1' || map[i][ft_strlen_so_long(map[i]) - 1] != '1')
		{
			write(2, "invalid wall map\n", 18);
			return (1);
		}
		j = 0;
		while ((i == 0 || !map[i + 1]) && (map[i][j] != '\n'
			&& map[i][j] != '\0'))
		{
			if (map[i][j] != '1')
			{
				write(2, "invalid wall map\n", 18);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

static int	p_e_c_error(char **map)
{
	int	*pec_count;
	int	i;

	pec_count = ft_calloc(3, sizeof(int));
	i = 0;
	while (map[i])
	{
		if (ft_strchr(map[i], 'P'))
			pec_count[0] += ft_strchr_so_long(map[i], 'P');
		if (ft_strchr(map[i], 'E'))
			pec_count[1] += ft_strchr_so_long(map[i], 'E');
		if (ft_strchr(map[i], 'C'))
			pec_count[2] += 1;
		if (too_much_pe(pec_count))
			return (1);
		i++;
	}
	if (is_there_pec(pec_count))
		return (1);
	free(pec_count);
	return (0);
}

static int	shape_error(char **map)
{
	size_t	len;
	int		i;

	len = ft_strlen_so_long(map[0]);
	i = 0;
	while (map[i])
	{
		if (ft_strlen_so_long(map[i]) != len)
		{
			write(2, "invalid shape of map\n", 22);
			return (1);
		}
		i++;
	}
	return (0);
}

static int	characters_error(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != '0' && map[i][j] != '1' && map[i][j] != 'P'
				&& map[i][j] != 'E' && map[i][j] != 'C' && map[i][j] != '\n')
			{
				write(2, "invalid characters in map\n", 27);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	map_error_handler(char **map, t_mlx_data	*mlx_data)
{
	char	**dfs_map;

	if (wall_error(map))
		return (1);
	if (p_e_c_error(map))
		return (1);
	if (shape_error(map))
		return (1);
	if (characters_error(map))
		return (1);
	dfs_map = dup_map(map, mlx_data);
	if (!dfs_map)
		return (1);
	dfs_map_error(dfs_map);
	if (check_e_c(dfs_map, 'E') || check_e_c(dfs_map, 'C'))
		return (1);
	return (0);
}
