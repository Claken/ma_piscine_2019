/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 18:41:30 by sachouam          #+#    #+#             */
/*   Updated: 2019/07/13 12:30:22 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_double_str(int x, int y, char str[y][x])
{
	int		i;
	int		j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_putchar(str[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	ft_put_letters_on_corners(int x, int y, char str[y][x])
{
	if (y == 1 && x != 1)
	{
		str[0][0] = 'A';
		str[0][x - 1] = 'C';
	}
	if (y != 1 && x == 1)
	{
		str[0][0] = 'A';
		str[y - 1][0] = 'C';
	}
	if (y != 1 && x != 1)
	{
		str[0][0] = 'A';
		str[0][x - 1] = 'C';
		str[y - 1][0] = 'C';
		str[y - 1][x - 1] = 'A';
	}
	if (y == 1 && x == 1)
		str[0][0] = 'A';
}

void	ft_empty_array(int x, int y, char str[y][x])
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			str[i][j] = ' ';
			j++;
		}
		i++;
	}
}

void	ft_fill_array_with_letters(int x, int y, char str[y][x], int i)
{
	while (i < x)
	{
		str[0][i] = 'B';
		i++;
	}
	i = 0;
	while (i < x)
	{
		str[y - 1][i] = 'B';
		i++;
	}
	i = 0;
	while (i < y)
	{
		str[i][0] = 'B';
		i++;
	}
	i = 0;
	while (i < y)
	{
		str[i][x - 1] = 'B';
		i++;
	}
}

void	rush(int x, int y)
{
	char tableau[y][x];

	ft_empty_array(x, y, tableau);
	ft_fill_array_with_letters(x, y, tableau, 0);
	ft_put_letters_on_corners(x, y, tableau);
	ft_put_double_str(x, y, tableau);
}
