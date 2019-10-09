/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 16:04:27 by cchudant          #+#    #+#             */
/*   Updated: 2019/07/21 23:27:07 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

int		ft_err(char *str)
{
	ft_putstr(str);
	return (1);
}

int		ft_is_numeric(char *str)
{
	if (!*str)
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int		ft_read_stdin(t_dict_entry *dict)
{
	char	buf[BUF_SIZE + 1];
	int		read_l;

	while ((read_l = read(0, buf, BUF_SIZE)) > 0)
	{
		buf[read_l - 1] = '\0';
		if (!ft_is_numeric(buf) || !ft_can_write(buf, dict))
			ft_err("Error\n");
		else
		{
			ft_translate(buf, ft_strlen(buf), dict);
			ft_putchar('\n');
		}
	}
	ft_dict_free(dict);
	return (0);
}

int		ft_trans_main(char *str, t_dict_entry *dict)
{
	if (!ft_is_numeric(str) ||
			!ft_can_write(str, dict))
	{
		ft_dict_free(dict);
		return (ft_err("Error\n"));
	}
	ft_translate(str, ft_strlen(str), dict);
	ft_putchar('\n');
	ft_dict_free(dict);
	return (0);
}

int		main(int argc, char **argv)
{
	const char		*dict_content;
	t_dict_entry	*dict;

	if (argc > 3)
		return (ft_err("Error\n"));
	dict_content = (argc == 3) ?
		ft_read_dict(open(argv[1], O_RDONLY)) : g_default_dict;
	if (!dict_content)
		return (ft_err("Error"));
	dict = ft_parse(dict_content);
	if (argc == 3)
		free((void*)dict_content);
	if (!dict || ft_has_duplicate(dict))
		return (ft_err("Dict Error\n"));
	if (argc == 1)
		return (ft_read_stdin(dict));
	else
		return (ft_trans_main(argc == 3 ? argv[2] : argv[1], dict));
}
