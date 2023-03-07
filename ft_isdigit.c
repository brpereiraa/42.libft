int ft_isdigit(int c)
{
	if(c < '0' || c > '9' && c >= 127)
		return (0);
	return (1);
}