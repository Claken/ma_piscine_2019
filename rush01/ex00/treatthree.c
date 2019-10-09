/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatthree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 18:25:26 by agerez            #+#    #+#             */
/*   Updated: 2019/07/13 18:51:33 by agerez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fillthreeXa(char **tab, int y)
{
	while (y < 5)
	{
		if (tab[y][0] == '3' && tab[y][5] == '1' && tab[y][2] == '1')
		{
			tab[y][1] = '2';
			tab[y][3] = '3';
		}
		else if (tab[y][0] == '3' && tab[y][5] == '1' && tab[y][1] == '1')
		{
			tab[y][2] = '3';
			tab[y][3] = '2';
		}
		else if (tab[y][0] == '3' && tab[y][5] == '1' && tab[y][3] == '1')
		{
			tab[y][1] = '2';
			tab[y][2] = '3';
		}
		y++;
	}
}

void	fillthreeXb(char **tab, int y)
{
	while (y < 5)
	{
		if (tab[y][0] == '3' && tab[y][5] == '2' && tab[y][4] == '1')
		{
			tab[y][1] = '2';
			tab[y][2] = '3';
		}
		else if (tab[y][0] == '3' && tab[y][5] == '2' && tab[y][4] == '3')
		{
			tab[y][1] = '1';
			tab[y][2] = '2';
		}
		else if (tab[y][0] == '3' && tab[y][5] == '2' && tab[y][4] == '2')
		{
			tab[y][1] = '1';
			tab[y][2] = '3';
		}
		else if (tab[y][0] == '3' && tab[y][5] == '2' && tab[y][1] == '2')
		{
			tab[y][2] = '3';
			tab[y][4] = '1';
		}
		y++;
	}
}

void	fillthreeYa(char **tab, int x)
{
	while (x < 5)
	{
		if (tab[0][x] == '3' && tab[5][x] == '1' && tab[2][x] == '1')
		{
			tab[1][x] = '2';
			tab[3][x] = '3';
		}
		else if (tab[0][x] == '3' && tab[5][x] == '1' && tab[1][x] == '1')
		{
			tab[2][x] = '3';
			tab[3][x] = '2';
		}
		else if (tab[0][x] == '3' && tab[5][x] == '1' && tab[3][x] == '1')
		{
			tab[1][x] = '2';
			tab[2][x] = '3';
		}
		x++;
	}
}

void	fillthreeYb(char **tab, int x)
{
	while (x < 5)
	{
		if (tab[0][x] == '3' && tab[5][x] == '2' && tab[4][x] == '1')
		{
			tab[1][x] = '2';
			tab[2][x] = '3';
		}
		else if (tab[0][x] == '3' && tab[5][x] == '2' && tab[4][x] == '3')
		{
			tab[1][x] = '1';
			tab[2][x] = '2';
		}
		else if (tab[0][x] == '3' && tab[5][x] == '2' && tab[4][x] == '2')
		{
			tab[1][x] = '1';
			tab[2][x] = '3';
		}
		x++;
	}
}

void treatthree(char **tab)
{
	fillthreeXa(tab, 1);
	fillthreeXb(tab, 1);
	fillthreeYa(tab, 1);
	fillthreeYb(tab, 1);
}
