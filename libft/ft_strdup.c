#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ans;
	size_t	i;

	i = 0;
	ans = malloc((ft_strlen(str) + 1) * sizeof(char));
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
/*
int	main(void)

{
	char	src1[] = "42tokyo";
	char	src2[] = "42tokyo";
	printf("%s\n", ft_strdup(src1));
	printf("%s", strdup(src2));
}
*/
