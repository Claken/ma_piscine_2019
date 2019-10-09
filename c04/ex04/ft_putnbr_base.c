/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 13:44:44 by sachouam          #+#    #+#             */
/*   Updated: 2019/07/12 13:49:10 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		check_base(char *base, int taille)
{
	int i;
	int j;

	i = 0;
	if (!(base[0]) || taille == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
		|| (base[i] < 32 && base[i] > 126)
		|| base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		nbase;
	int		tab[20];
	int		i;

	i = 0;
	nbase = ft_strlen(base);
	if (check_base(base, nbase))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		while (nbr)
		{
			tab[i] = nbr % nbase;
			nbr = nbr / nbase;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[tab[i]]);
	}
}
