/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 16:43:34 by cchudant          #+#    #+#             */
/*   Updated: 2019/07/24 12:39:00 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "rush02.h"

int				ft_fill_tab_val(const char *begin_val, t_dict_entry *entry)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((begin_val[i] >= ' ' && begin_val[i] <= '~') ||
			(unsigned char)begin_val[i] > 127)
	{
		if (begin_val[i + 1] != ' ')
			j++;
		i++;
	}
	if (!(entry->value = malloc((j + 2) * sizeof(char))))
		return (0);
	i = 0;
	j = 0;
	while ((begin_val[i] >= ' ' && begin_val[i] <= '~') ||
			begin_val[i] < 0)
	{
		if (!(begin_val[i] == ' ' && begin_val[i + 1] == ' '))
			entry->value[j++] = begin_val[i];
		i++;
	}
	entry->value[j] = '\0';
	return (begin_val[i] == '\n' || begin_val[i] == '\0');
}

int				ft_fill_tab(const char *begin_line, t_dict_entry *entry)
{
	int i;

	i = 0;
	while (begin_line[0] == '0' &&
			begin_line[1] >= '0' && begin_line[1] <= '9')
		begin_line++;
	while (begin_line[i] >= '0' && begin_line[i] <= '9')
		i++;
	if (i == 0)
		return (0);
	if (!(entry->key = ft_strdup(begin_line, i)))
		return (0);
	while (begin_line[i] == ' ')
		i++;
	if (begin_line[i] != ':')
		return (0);
	i++;
	while (begin_line[i] == ' ')
		i++;
	if (!ft_fill_tab_val(begin_line + i, entry))
		return (0);
	return (1);
}

int				ft_get_lines_nbr(const char *content)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (content[i])
	{
		if (content[i] == '\n' && content[i + 1] != '\n')
			count++;
		i++;
	}
	return (count + 1);
}

t_dict_entry	*ft_parse(const char *content)
{
	int				line;
	int				line_len;
	t_dict_entry	*tab;

	if (!(tab = ft_dict_new(ft_get_lines_nbr(content))))
		return (NULL);
	line = 0;
	while (*content)
	{
		line_len = 0;
		while (content[line_len] && content[line_len] != '\n')
			line_len++;
		if (!ft_fill_tab(content, &tab[line]))
			return (ft_dict_free(tab));
		content += line_len;
		while (*content == '\n')
			content++;
		line++;
	}
	if (!ft_has_default_keys(tab))
	{
		ft_dict_free(tab);
		return (NULL);
	}
	return (tab);
}
