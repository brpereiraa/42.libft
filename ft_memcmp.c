#include <stdio.h>

int memcmp(const void *str1, const void *str2, size_t n)
{
	const char	*ss1;
	const char	*ss2;
	size_t				i;

	i = 0;
	ss1 = (const unsigned char *)str1;
	ss2 = (const unsigned char *)str2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}