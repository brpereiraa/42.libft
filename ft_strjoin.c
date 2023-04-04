#include <stdlib.h>

int ft_strlen(char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len1;
	int		len2;
	char	*str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2));
	i = 0;
	j = 0;
	while(i < len1)
		str[i++] = s1[i];
	while(j < len2)
		str[i++] = s2[j++];
}

int main(void) {
  char *str;
  char *s1 = "hello";
  char *s2 = "wordl";
  
  str = ft_strjoin(s1, s2);
  printf("%s", str);
  return 0;
}