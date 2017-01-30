/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkotliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 15:36:41 by kkotliar          #+#    #+#             */
/*   Updated: 2017/01/30 15:58:30 by kkotliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_check_let(int i, char *tmp, char c)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (tmp[j] == c)
			return (1);
		j++;
	}
	return (0);
}

int			main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 3)
		return (write(1, "\n", 1));
	while (argv[1][i] != '\0')
	{
		if (ft_check_let(i, argv[1], argv[1][i]) == 0)
			write(1, &argv[1][i], 1);
		i++;
	}
	while (argv[2][j] != '\0')
	{
		if ((ft_check_let(j, argv[2], argv[2][j]) == 0) &&
				(ft_check_let(i, argv[1], argv[2][j]) == 0))
			write(1, &argv[2][j], 1);
		j++;
	}
	return (write(1, "\n", 1));
}
