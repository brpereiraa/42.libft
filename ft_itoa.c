int count(int n)
{
	int	count;

	count = 0;
	while(n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int	num;
	char *c;

	num = count(n);
	c = (char *)malloc(sizeof(char *) * num);

	c[num--] = '\0';
	while(n)
	{
		c[num--] = (n%10) + 48;
		n /= 10;
	}

	return c;
}

// int main() {
// 	char	*count;
// 	int	n;
  
// 	n = 40000;
// 	count = ft_itoa(n);
// 	printf("%s", count);
// 	return 0;
// }