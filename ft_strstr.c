char *ft_ststr(char *haystack, char *needle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j++] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (0);
}