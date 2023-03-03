char *ft_strnstr(char *needle, char *haystack, int n)
{
	int	i;
	int	j;

	i = 0;
	while(haystack[i])
	{
		j = 0;
		while(haystack[i + j] == needle[j++])
		{
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (0);
}