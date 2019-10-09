/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operateurs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:08:24 by sachouam          #+#    #+#             */
/*   Updated: 2019/07/25 18:07:01 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

int		add(int a, int b)
{
	int nb;

	nb = a + b;
	return (nb);
}

int		sous(int a, int b)
{
	int nb;

	nb = a - b;
	return (nb);
}

int		div(int a, int b)
{
	int nb;

	nb = a / b;
	return (nb);
}

int		multi(int a, int b)
{
	int nb;

	nb = a * b;
	return (nb);
}

int		modu(int a, int b)
{
	int nb;

	nb = a % b;
	return (nb);
}
