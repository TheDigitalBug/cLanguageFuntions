/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkotliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 10:34:52 by kkotliar          #+#    #+#             */
/*   Updated: 2017/01/30 12:29:30 by kkotliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_base(char tmp)
{
	static char	b[16] = "0123456789abcdef";
	int			j;

	j = 0;
	while (j <= 15)
	{
		if (tmp == b[j])
			break ;
		j++;
	}
	return (j);
}

void		ft_down_let(char *tmp, const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'F')
			tmp[i] = str[i] + 32;
		else
			(tmp[i] = str[i]);
		i++;
	}
}

int		ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		minus;
	int		nb;
	char		*tmp;

	minus = 1;
	nb = 0;
	i = 0;
	while (str[i] != '\0')
		i++;
	tmp = (char*)malloc(sizeof(char) * i);
	ft_down_let(tmp, str);
	i = 0;
	while (tmp[i] == ' ' || tmp[i] == '	' || tmp[i] == '\n')
		i++;
	if (tmp[i] == '-' && ((tmp[i + 1] >= 'a' && tmp[i + 1] <= 'f') ||
				(tmp[i + 1] >= '0' && tmp[i + 1] <= '9')))
	{
		minus = -1;
		i++;
	}
	while ((tmp[i] >= 'a' && tmp[i] <= 'f') || (tmp[i] >= '0' && tmp[i] <= '9'))
		nb = nb * str_base + ft_base(tmp[i++]);
	return (minus * nb);
}

int		main(void)
{
	printf("org => ft_atoi_base\n");
	printf("240 => %d\n", ft_atoi_base("F0", 16));
	printf("255 => %d\n", ft_atoi_base("ff", 16));
	printf(" 10 => %d\n", ft_atoi_base("a", 16));
	printf("  0 => %d\n", ft_atoi_base("00000000", 2));
	printf("255 => %d\n", ft_atoi_base("11111111", 2));
	printf("  7 => %d\n", ft_atoi_base("00000111", 2));
	printf(" 15 => %d\n", ft_atoi_base("120", 3));
	printf("-15 => %d\n", ft_atoi_base("-120", 3));
	printf("  0 => %d\n", ft_atoi_base("0", 3));
}
