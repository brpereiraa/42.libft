#include <stdio.h>

char *ft_strnew(size_t size)
{
	int	i;
	char* str;
	
	str = malloc(sizeof(char *) *  size);
	i = 0;
	while(i < size)
		str[i++] = 0;
}