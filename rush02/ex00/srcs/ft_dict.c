/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   default_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 03:22:51 by cchudant          #+#    #+#             */
/*   Updated: 2019/07/24 11:56:17 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush02.h"

const char	*g_default_dict = "\
0: zero\n\
1: one\n\
2: two\n\
3: three\n\
4: four\n\
5: five\n\
6: six\n\
7: seven\n\
8: eight\n\
9: nine\n\
10: ten\n\
11: eleven\n\
12: twelve\n\
13: thirteen\n\
14: fourteen\n\
15: fifteen\n\
16: sixteen\n\
17: seventeen\n\
18: eighteen\n\
19: nineteen\n\
20: twenty\n\
30: thirty\n\
40: forty\n\
50: fifty\n\
60: sixty\n\
70: seventy\n\
80: eighty\n\
90: ninety\n\
100: hundred\n\
1000: thousand\n\
1000000: million\n\
1000000000: billion\
";

const char	*g_default_keys[] = {
	"0",
	"1",
	"2",
	"3",
	"4",
	"5",
	"6",
	"7",
	"8",
	"9",
	"10",
	"11",
	"12",
	"13",
	"14",
	"15",
	"16",
	"17",
	"18",
	"19",
	"20",
	"30",
	"40",
	"50",
	"60",
	"70",
	"80",
	"90",
	"100",
	"1000",
	"1000000",
	"1000000000",
	NULL
};

int			ft_has_default_keys(t_dict_entry *dict)
{
	int i;
	int j;
	int found;

	i = 0;
	while (g_default_keys[i])
	{
		found = 0;
		j = 0;
		while (!found && dict[j].key)
		{
			if (ft_strcmp(g_default_keys[i], dict[j].key) == 0)
				found = 1;
			j++;
		}
		if (!found)
			return (0);
		i++;
	}
	return (1);
}

char		*ft_get_value(char *key, int len, t_dict_entry *dict)
{
	int i;

	i = 0;
	while (dict[i].key)
	{
		if (ft_strncmp(dict[i].key, key, len) == 0)
			return (dict[i].value);
		i++;
	}
	return (NULL);
}

char		*ft_get_value_pow10(int pow, t_dict_entry *dict)
{
	int i;
	int j;

	i = 0;
	while (dict[i].key)
	{
		j = 1;
		while (dict[i].key[j] == '0')
			j++;
		if (dict[i].key[0] == '1' && j - 1 == pow)
			return (dict[i].value);
		i++;
	}
	return (NULL);
}

int			ft_has_duplicate(t_dict_entry *dict)
{
	int i;
	int j;

	i = 0;
	while (dict[i].key)
	{
		j = i + 1;
		while (dict[j].key)
		{
			if (ft_strcmp(dict[i].key, dict[j].key) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int			ft_can_write(char *str, t_dict_entry *dict)
{
	int i;
	int len;

	while (*str == '0')
		str++;
	len = ft_strlen(str);
	i = (len - 1) / 3;
	while (i > 0)
	{
		if (!ft_get_value_pow10(i * 3, dict))
			return (0);
		i--;
	}
	return (1);
}
