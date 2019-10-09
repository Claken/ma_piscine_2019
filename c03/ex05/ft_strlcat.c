/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 18:20:29 by sachouam          #+#    #+#             */
/*   Updated: 2019/07/10 15:40:58 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	tailledst;
	unsigned int	taillesrc;

	i = 0;
	j = 0;
	tailledst = ft_strlen(dest);
	taillesrc = ft_strlen(src);
	while (dest[i])
		i++;
	while (src[j] && i < size - 1 && size != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < tailledst)
		return (size + taillesrc);
	return (tailledst + taillesrc);
}
