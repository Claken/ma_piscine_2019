/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_translate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:44:21 by cchudant          #+#    #+#             */
/*   Updated: 2019/07/21 22:27:39 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush02.h"

#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)

char	*ft_get_p(char *ten_power, char c, t_dict_entry *dict)
{
	int i;
	int j;
	int len;

	len = ft_strlen(ten_power);
	i = 0;
	while (dict[i].key)
	{
		if (dict[i].key[0] == c && ft_strlen(dict[i].key) == len)
		{
			j = 1;
			while (j < len && dict[i].key[j] == '0')
				j++;
			if (j == len)
				return (dict[i].value);
		}
		i++;
	}
	return (NULL);
}

void	ft_translate_100s_10sand1s(char *str, int len, t_dict_entry *dict)
{
	if (len >= 2)
	{
		if (str[0] != '0')
		{
			if (len > 2)
				ft_putchar(' ');
			ft_putstr(ft_get_p("10", str[0], dict));
		}
		str++;
	}
	if (len >= 1)
	{
		if (str[0] != '0')
		{
			if (len > 1)
				ft_putchar(' ');
			ft_putstr(ft_get_p("1", str[0], dict));
		}
		str++;
	}
}

void	ft_translate_100s(char *str, int len, t_dict_entry *dict)
{
	while (str[0] == '0')
	{
		str++;
		len--;
	}
	if (len >= 3)
	{
		if (str[0] != '0')
		{
			ft_putstr(ft_get_p("1", str[0], dict));
			ft_putchar(' ');
			ft_putstr(ft_get_value("100", 3, dict));
		}
		str++;
	}
	if (str[0] != '0' && len >= 2 && ft_get_value(str, 2, dict))
	{
		if (len > 2)
			ft_putchar(' ');
		ft_putstr(ft_get_value(str, 2, dict));
		return ;
	}
	ft_translate_100s_10sand1s(str, len, dict);
}

void	ft_translate_pow1000(char **str, int len,
		int pow10, t_dict_entry *dict)
{
	if (len > pow10)
	{
		if (ft_strncmp("000", *str, MIN(len - pow10, 3)) != 0)
		{
			if (len > pow10 + 3)
				ft_putchar(' ');
			ft_translate_100s(*str, MIN(len - pow10, 3), dict);
			ft_putchar(' ');
			ft_putstr(ft_get_value_pow10(pow10, dict));
		}
		*str += MIN(len - pow10, 3);
	}
}

void	ft_translate(char *str, int len, t_dict_entry *dict)
{
	int i;

	while (str[0] == '0')
	{
		str++;
		len--;
	}
	if (len == 0)
	{
		ft_putstr(ft_get_value("0", 1, dict));
		return ;
	}
	i = (len - 1) / 3;
	while (i > 0)
	{
		ft_translate_pow1000(&str, len, i * 3, dict);
		i--;
	}
	if (ft_strncmp("000", str, MIN(len, 3)) != 0)
	{
		if (len > 3)
			ft_putchar(' ');
		ft_translate_100s(str, MIN(len, 3), dict);
	}
}
