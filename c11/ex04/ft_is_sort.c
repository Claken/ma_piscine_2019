/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 15:31:07 by sachouam          #+#    #+#             */
/*   Updated: 2019/07/25 15:34:02 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		test_asc_ord(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i + 1], tab[i]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int		test_desc_ord(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	return (test_desc_ord(tab, length, f) || test_asc_ord(tab, length, f));
}
