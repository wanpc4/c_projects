

#include "libft.h"
/*
	int	ft_strncmp(const char *s1, const char *s2, size_t n);
	Purpose: To compare each character according to the length (n) provided.
			0 : s1 = s2.
			> 0 (positive) : s1 > s2
			< 0 (negative) : s1 < s2 / s2 > s1
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t length;

	length = 0;

	while ((length < n) && (s1[length] != '\0') && (s2[length] != '\0'))
	{
		if (s1[length] != s2[length])
		{
			return (s1[length] - s2[length]);
		}
		length++;
	}
	return (s1[length] - s2[length]);
}