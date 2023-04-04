ft_putchar(char c);

void	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	while(s[i] != 0)
		ft_putchar(s[i++]);
}