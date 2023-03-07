int ft_isprint(int c)
{
	if(c < 127 && c > 32)
		return (1);
	return (0);
}