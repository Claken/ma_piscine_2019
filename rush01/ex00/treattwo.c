/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treattwo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:48:48 by agerez            #+#    #+#             */
/*   Updated: 2019/07/13 18:49:18 by agerez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void treattwoX(char **tab)
{
	int y;

	y = 1;
	while (y < 5)
	{
		if (tab[y][0] == '3' && tab[y][5] == '2')
			tab[y][3] = '4';
		else if (tab[y][0] == '2' && tab[y][5] == '3')
			tab[y][2] = '4';
		else if (tab[y][0] == '2' && tab[y][5] == '1')
			tab[y][1] = '3';
		else if (tab[y][0] == '1' && tab[y][5] == '2')
			tab[y][4] = '3';
		y++;
	}
}

void treattwoY(char **tab)
{
	int x;

	x = 1;
	while (x < 5)
	{
		if (tab[0][x] == '3' && tab[5][x] == '2')
			tab[3][x] = '4';
		else if (tab[0][x] == '2' && tab[5][x] == '3')
			tab[2][x] = '4';
		else if (tab[0][x] == '2' && tab[5][x] == '1')
			tab[1][x] = '3';
		else if (tab[0][x] == '1' && tab[5][x] == '2')
			tab[4][x] = '3';
		x++;
	}
}

void	filltwoX(char **tab, int y)
{
	while (y < 5)
	{
		if (tab[y][0] == '2' && tab[y][5] == '1' && tab[y][2] == '1')
			tab[y][3] = '2';
		else if (tab[y][0] == '2' && tab[y][5] == '1' && tab[y][2] == '2')
			tab[y][3] = '1';
		else if (tab[y][0] == '2' && tab[y][5] == '3' && tab[y][1] == '1')
		{
			tab[y][3] = '3';
			tab[y][4] = '2';
		}
		else if (tab[y][0] == '2' && tab[y][5] == '3' && tab[y][1] == '2')
		{
			tab[y][3] = '3';
			tab[y][4] = '1';
		}
		else if (tab[y][0] == '2' && tab[y][5] == '3' && tab[y][1] == '3')
		{
			tab[y][3] = '2';
			tab[y][4] = '1';
		}
		y++;
	}
}

void	filltwoY(char **tab, int x)
{
	while (x < 5)
	{
		if (tab[0][x] == '2' && tab[5][x] == '1' && tab[2][x] == '1')
			tab[3][x] = '2';
		else if (tab[0][x] == '2' && tab[5][x] == '1' && tab[2][x] == '2')
			tab[3][x] = '1';
		else if (tab[0][x] == '2' && tab[5][x] == '3' && tab[1][x] == '1')
		{
			tab[3][x] = '3';
			tab[4][x] = '2';
		}
		else if (tab[0][x] == '2' && tab[5][x] == '3' && tab[1][x] == '2')
		{
			tab[3][x] = '3';
			tab[4][x] = '1';
		}
		else if (tab[0][x] == '2' && tab[5][x] == '3' && tab[1][x] == '3')
		{
			tab[3][x] = '2';
			tab[4][x] = '1';
		}
		x++;
	}
}

void treattwo(char **tab)
{
	treattwoX(tab);
	treattwoY(tab);
	filltwoX(tab, 1);
	filltwoY(tab, 1);
}
