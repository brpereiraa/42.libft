#include <stdio.h>

void *memcpy(void *dest, const void *src, size_t n)
{
	const char *s1;
	const char *s2;
	size_t				i;

	s1 = (const char *)src;
	i = 0;
	printf("aaaaaaaaa");
	// while (i < n)
	// {
		
	// }	
}

int main()
{
	const void *src = "";
	const void *dest;

	memcpy(dest, src, 10);
	
}