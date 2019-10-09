/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 22:28:52 by cchudant          #+#    #+#             */
/*   Updated: 2019/07/24 12:06:48 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush02.h"

t_dict_entry	*ft_dict_new(int len)
{
	int				i;
	t_dict_entry	*tab;

	if (!(tab = malloc(sizeof(t_dict_entry) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i].key = NULL;
		tab[i].value = NULL;
		i++;
	}
	tab[i].key = NULL;
	tab[i].value = NULL;
	return (tab);
}

t_dict_entry	*ft_dict_free(t_dict_entry *tab)
{
	while (tab->key || tab->value)
	{
		free(tab->key);
		free(tab->value);
		tab++;
	}
	return (NULL);
}
