/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 22:45:59 by sachouam          #+#    #+#             */
/*   Updated: 2019/07/17 21:32:17 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int		*ft_range(int min, int max)
{
	int i;
	int *range;

	i = 0;
	if (!(range = (int *)malloc(sizeof(int) * (max - min))) || min >= max)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	int taille;

	taille = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (taille);
}
