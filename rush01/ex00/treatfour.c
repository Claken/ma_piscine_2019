/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatfour.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:09:32 by agerez            #+#    #+#             */
/*   Updated: 2019/07/13 17:57:49 by agerez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	treatfourX(char **tab)
{
	int x;
	int y;

	y = 1;
	while (y < 5)
	{
		x = 1;
		if (tab[y][0] == '4')
		{
			while (x < 5)
			{
				tab[y][x] = x + '0';
				x++;
			}
		}
		else if (tab[y][5] == '4')
		{
			while (x < 5)
			{
				tab[y][x] = (5 - x) + '0';
				x++;
			}
		}
		y++;
	}
}

void	treatfourY(char **tab)
{
	int x;
	int y;

	x = 1;
	while (x < 5)
	{
		y = 1;
		if (tab[0][x] == '4')
		{
			while (y < 5)
			{
				tab[y][x] = y + '0';
				y++;
			}
		}
		else if (tab[5][x] == '4')
		{
			while (y < 5)
			{
				tab[y][x] = (5 - y) + '0';
				y++;
			}
		}
		x++;
	}
}

void	treatoneX(char **tab)
{
	int x;
	int y;

	y = 1;
	while (y < 5)
	{
		x = 1;
		if (tab[y][0] == '1')
			tab[y][x] = '4';
		else if (tab[y][5] == '4')
			tab[y][x] = '4';
		y++;
	}
}

void	treatoneY(char **tab)
{
	int x;
	int y;

	x = 1;
	while (x < 5)
	{
		y = 1;
		if (tab[0][x] == '1')
			tab[y][x] = '4';
		else if (tab[5][x] == '4')
			tab[y][x] = '4';
		x++;
	}
}

void treatfour(char **tab)
{
	treatfourX(tab);
	treatfourY(tab);
	treatoneY(tab);
	treatoneX(tab);
}
