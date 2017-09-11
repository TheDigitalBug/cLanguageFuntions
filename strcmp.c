
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s, char *t)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while((s[i] == t[j]) && (s[i] != '\0' || t[j]  != '\0'))
	{
		i++;
		j++;
	}
	return ((unsigned int)(s[i] - t[j]));
}

int	ft_strncmp(char *s, char *t, int n)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while((s[i] == t[j]) && (i < n) && (s[i] != '\0' || t[j]  != '\0'))
	{
		i++;
		j++;
	}
	return ((unsigned int)(s[i] - t[j]));
}

int main(void)
{
	char str[100] = "hello w";
	char *str2 = "helly";
	
	printf("orig = %d\n", strcmp(str, str2));
	printf("my   = %d\n", ft_strcmp(str, str2));
	
	printf("orig = %d\n", strncmp(str, str2, 3));
	printf("my   = %d\n", ft_strncmp(str, str2, 3));
	

	return (0);
}
