/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:50:07 by sachouam          #+#    #+#             */
/*   Updated: 2019/07/17 21:32:01 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int		*ft_range(int min, int max)
{
	int i;
	int *range;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(range = (int *)malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
