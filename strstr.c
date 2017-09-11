
#include <string.h>
#include <stdio.h>

char *ft_strstr(char *s, char *t)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s[i] != '\0')
	{
		while ((s[i] == t[j]) && (s[i] && t[j]))
		{
			i++;
			j++;
		}
		if (t[j] == '\0')
			return(s + i - j);
		i++;
	}
	return (NULL);
}


int main(void)
{
	char str[100] = "hel";
	char *str2 = "";
	
	printf("orig = %s\n", strstr(str, str2));
	printf("my   = %s\n", ft_strstr(str, str2));

	return (0);
}
