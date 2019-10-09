/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableau.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:43:30 by agerez            #+#    #+#             */
/*   Updated: 2019/07/13 18:56:53 by agerez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *makeargline(char arg1, char arg2, char arg3, char arg4)
{
	char *line;

	line = malloc(7 * sizeof(char));
	line[0] = 'X';
	line[1] = arg1;
	line[2] = arg2;
	line[3] = arg3;
	line[4] = arg4;
	line[5] = 'X';
	line[6] = '\0';
	return (line);
}

char *makeline(char firstarg, char lastarg)
{
	char *line;
	int l;

	line = malloc(7 * sizeof(char));
	l = 0;
	while (l < 7)
	{
		if (l == 0)
			line[l] = firstarg;
		else if (l == 5)
			line[l] = lastarg;
		else if (l == 6)
			line[l] = '\0';
		else
			line[l] = '0';
		l++;
	}
	return (line);
}
