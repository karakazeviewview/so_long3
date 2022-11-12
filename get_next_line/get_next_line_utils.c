
#include "get_next_line.h"

char	*ft_strchr_gnl(const char *str, int c)
{
	size_t	i;
	char	cast_c;

	i = 0;
	cast_c = (char)c;
	if (cast_c == '\0')
	{
		while (str[i] != '\0')
			i++;
		return ((char *)&str[i]);
	}
	while (str[i] != '\0')
	{
		if (str[i] == cast_c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

char	*join_array(char const *s1, char const *s2, char *ans)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		ans[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		ans[i] = s2[k];
		i++;
		k++;
	}
	ans[i] = '\0';
	return (ans);
}

char	*ft_strjoin_gnl(char const *s1, char const *s2)
{
	char		*ans;
	size_t		s1_len;
	size_t		s2_len;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup_gnl(s2));
	else if (!s2)
		return (ft_strdup_gnl(s1));
	s1_len = ft_strlen_gnl(s1);
	s2_len = ft_strlen_gnl(s2);
	ans = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!ans)
		return (NULL);
	return (join_array(s1, s2, ans));
}

char	*ft_strdup_gnl(const char	*str)
{
	char	*ans;
	size_t	i;

	i = 0;
	ans = malloc((ft_strlen_gnl(str) + 1) * sizeof(char));
	if (!ans)
		return (NULL);
	while (str[i] != '\0')
	{
		ans[i] = str[i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

size_t	ft_strlen_gnl(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
