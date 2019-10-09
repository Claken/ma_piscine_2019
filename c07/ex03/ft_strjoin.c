/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:41:10 by sachouam          #+#    #+#             */
/*   Updated: 2019/07/18 22:10:08 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		count_len(int size, char **strs, char *sep)
{
	int i;
	int taille;

	i = 0;
	taille = 0;
	while (i < size)
	{
		taille = taille + ft_strlen(strs[i]);
		i++;
	}
	taille = taille + (ft_strlen(sep) * (size - 1));
	return (taille);
}

void	ft_concatenate(int size, char **strs, char *sep, char *chaine)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			chaine[k++] = strs[i][j++];
		l = 0;
		while (sep[l] && i < size - 1)
			chaine[k++] = sep[l++];
		i++;
	}
	chaine[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*chaine;
	int		taille;
	int		i;

	taille = count_len(size, strs, sep);
	if (size <= 0)
	{
		if (!(chaine = malloc(sizeof(char) * 1)))
			return (NULL);
		chaine[0] = '\0';
		return (chaine);
	}
	i = 0;
	if (!(chaine = malloc(sizeof(char) * taille + 1)))
		return (NULL);
	while (i < taille)
		chaine[i++] = 0;
	ft_concatenate(size, strs, sep, chaine);
	return (chaine);
}
