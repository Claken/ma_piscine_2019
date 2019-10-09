/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:13:53 by sachouam          #+#    #+#             */
/*   Updated: 2019/07/25 15:04:06 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap2(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp) (char *, char *))
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j + 1] && (*cmp)(tab[j], tab[j + 1]) > 0)
				ft_swap2(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
