/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traitement.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:42:40 by agerez            #+#    #+#             */
/*   Updated: 2019/07/13 18:43:14 by agerez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void treatfour(char **tab);
void treatthree(char **tab);
void treattwo(char **tab);

void traitement(char **tab)
{
	treatfour(tab);
	treatthree(tab);
	treattwo(tab);
}
