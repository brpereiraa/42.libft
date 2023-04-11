#include <unistd.h>
void ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if(n < 0)
	{
		ft_putchar('-');
		n *= -1;
		ft_putnbr(n/10);
		ft_putchar((n%10) + 48);
	}
	else if(n < 10)
	{
		ft_putchar(n + 48);
	}
	else
	{
		ft_putnbr(n/10);
		ft_putchar((n%10) + 48);
	}
}
