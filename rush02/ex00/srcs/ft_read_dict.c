/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 22:59:23 by cchudant          #+#    #+#             */
/*   Updated: 2019/07/24 12:39:48 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define DEFAULT_BUF_SIZE 16 * 1024

int		ft_double_buffer(char **buf, int read_l, int *bufsize)
{
	int		i;
	char	*newbuf;

	if (!(newbuf = malloc(*bufsize * 2)))
		return (0);
	i = 0;
	while (i < read_l)
	{
		newbuf[i] = (*buf)[i];
		i++;
	}
	free(*buf);
	*buf = newbuf;
	*bufsize *= 2;
	return (1);
}

char	*ft_read_dict(int fd)
{
	int		bufsize;
	int		read_l;
	int		tot_read;
	char	*buf;

	bufsize = DEFAULT_BUF_SIZE;
	if (fd < 0 || !(buf = malloc(bufsize)))
		return (NULL);
	tot_read = 0;
	while ((read_l = read(fd, buf + tot_read, bufsize - tot_read))
			== bufsize - tot_read)
	{
		tot_read += read_l;
		if (!ft_double_buffer(&buf, tot_read, &bufsize))
		{
			free(buf);
			return (NULL);
		}
	}
	tot_read += read_l;
	buf[tot_read] = '\0';
	return (buf);
}
