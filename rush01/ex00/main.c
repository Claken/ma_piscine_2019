/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:21:14 by agerez            #+#    #+#             */
/*   Updated: 2019/07/13 17:24:45 by agerez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void printtab(char **tab);
char *makeline(char firstarg, char lastarg);
char *makeargline(char arg1, char arg2, char arg3, char arg4);
char **traitement(char **tab);

int main(int argc, char **argv)
{
	char **tab;
	int i;
	int a;
	int b;

	i = 0;
	b = 16;
	a = 0;
	tab = malloc(50 * sizeof(char));
	while (i < 6)
	{
		if (i == 0)
		{
			tab[i] = makeargline(argv[1][a], argv[1][a + 2], argv[1][a + 4], argv[1][a + 6]);
			a += 8;
		}
		else if(i == 5)
			tab[i] = makeargline(argv[1][a], argv[1][a + 2], argv[1][a + 4], argv[1][a + 6]);
		else
		{
			tab[i] = makeline(argv[1][b], argv[1][b + 8]);
			b += 2;
		}
		i++;
	}
	traitement(tab);
	printtab(tab);
	//if(argc != 2)
	//	ft_putstr("Error\n");	
}
