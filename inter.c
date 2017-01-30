/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkotliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 16:08:37 by kkotliar          #+#    #+#             */
/*   Updated: 2017/01/30 16:31:18 by kkotliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_check(int i, char *tmp, char c)
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

	j = 0;
	i = 0;
	if (argc != 3)
		return (write(1, "\n", 1));
	while (argv[2][j] != '\0')
		j++;
	while (argv[1][i] != '\0')
	{
		if (ft_check(i, argv[1], argv[1][i]) == 0)
			if (ft_check(j, argv[2], argv[1][i]) == 1)
				write(1, &argv[1][i], 1);
		i++;
	}
	return (write(1, "\n", 1));
}
