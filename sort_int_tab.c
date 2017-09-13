/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkotliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 12:46:53 by kkotliar          #+#    #+#             */
/*   Updated: 2017/01/30 13:33:05 by kkotliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	sort_int_tab(int tab[], unsigned int size)
{
	int				tmp;
	unsigned int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

void	sort_int_tab_recur(int tab[], unsigned int size)
{
	int				tmp;
	unsigned int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			sort_int_tab(tab, size);
		}
		i++;
	}
}

int		main(void)
{
	int i;

	int mass[] = {9,6, 2, 12, 11, 9, 3, 7};
	int size = sizeof(mass) / sizeof(mass[0]);
	
	sort_int_tab(mass, size);
	
	while (i < size)
		printf("%d ", mass[i++]);
	printf("\n");
	
	i = 0;
	sort_int_tab_recur(mass, size);
	while (i < size)
		printf("%d ", mass[i++]);
}
