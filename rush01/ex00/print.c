/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:44:51 by agerez            #+#    #+#             */
/*   Updated: 2019/07/13 15:45:01 by agerez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void printtab(char **tab)
{
	ft_putstr(tab[0]);
	ft_putstr(tab[1]);
	ft_putstr(tab[2]);
	ft_putstr(tab[3]);
	ft_putstr(tab[4]);
	ft_putstr(tab[5]);
}
