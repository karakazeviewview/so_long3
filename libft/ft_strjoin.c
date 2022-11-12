#include "libft.h"

static char	*join_array(char const *s1, char const *s2, char *ans)
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ans = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!ans)
		return (NULL);
	return (join_array(s1, s2, ans));
}
/*
int	main(void)
{
	char	str1[];
	char	str2[];

	str1[] = "42";
	str2[] = "tokyo";
	printf("%s\n", ft_strjoin(str1, str2));
}
*/
