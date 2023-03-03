char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while(src[i] && i < n)
		dest[i] = src[i++];
	dest[i] = '\0';
}
