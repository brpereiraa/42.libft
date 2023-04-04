#include <stdio.h>

void	*ft_memalloc(size_t size)
{
	void	*c;
	c = malloc(sizeof(char*) * size);

	return c;
}