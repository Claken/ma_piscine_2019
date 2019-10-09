/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 23:36:33 by sachouam          #+#    #+#             */
/*   Updated: 2019/07/25 18:08:32 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

int		ft_operator(char c)
{
	if (c == '+')
		return (1);
	if (c == '-')
		return (2);
	if (c == '/')
		return (3);
	if (c == '*')
		return (4);
	if (c == '%')
		return (5);
	return (0);
}

int		ft_do_operation(int op, int a, int b)
{
	if (op == 1)
		return (add(a, b));
	if (op == 2)
		return (sous(a, b));
	if (op == 3)
		return (div(a, b));
	if (op == 4)
		return (multi(a, b));
	if (op == 5)
		return (modu(a, b));
	return (0);
}

int		main(int ac, char **av)
{
	int nb;
	int op;

	if (ac == 4)
	{
		if (av[2][0] == '/' && ft_atoi(av[3]) == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		if (av[2][0] == '%' && ft_atoi(av[3]) == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
		op = ft_operator(av[2][0]);
		nb = ft_do_operation(op, ft_atoi(av[1]), ft_atoi(av[3]));
		ft_putnbr(nb);
		ft_putchar('\n');
	}
	return (0);
}
