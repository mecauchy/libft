#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (haystack[i] && len > 0)
	{
		if (haystack[i] == needle[j])
			j++;
		i++;
	}
}
