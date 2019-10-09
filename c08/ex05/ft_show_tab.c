/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 23:13:50 by sachouam          #+#    #+#             */
/*   Updated: 2019/07/20 14:27:09 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char a;

	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	a = nb + 48;
	ft_putchar(a);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	while (par->str != 0)
	{
		i = 0;
		while (par->str[i])
		{
			ft_putchar(par->str[i]);
			i++;
		}
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		i = 0;
		while (par->copy[i])
		{
			ft_putchar(par->copy[i]);
			i++;
		}
		ft_putchar('\n');
		par++;
	}
}
