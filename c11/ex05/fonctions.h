/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 16:47:18 by sachouam          #+#    #+#             */
/*   Updated: 2019/07/25 18:06:38 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FONCTIONS_H
# define FONCTIONS_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		add(int a, int b);
int		sous(int a, int b);
int		div(int a, int b);
int		multi(int a, int b);
int		modu(int a, int b);

#endif
