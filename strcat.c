
#include <string.h>
#include <stdio.h>

char *ft_strcat(char *s, char *t)
{
	int i;
	int j;

	i = 0;
	while(s[i])
		i++;
	j = 0;
	while(t[j])
	{
		s[i] = t[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}


char *ft_strncat(char *s, char *t, int n)
{
	int i;
	int j;
	
	i = 0;
	while(s[i])
		i++;
	j = 0;
	while(t[j] && j < n)
	{
		s[i] = t[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}

int main(void)
{
	char str[100] = "hello ";
	char *str2 = "wordl!";
	
	puts(ft_strcat(str, str2));
	

	return (0);
}
