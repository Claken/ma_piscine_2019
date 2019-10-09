/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 16:19:34 by cchudant          #+#    #+#             */
/*   Updated: 2019/07/21 23:05:57 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

void				ft_putchar(char c);
int					ft_strlen(const char *str);
void				ft_putstr(const char *str);
char				*ft_strdup(const char *str, int len);

int					ft_strcmp(const char *a, const char *b);
int					ft_strncmp(const char *a, const char *b, int n);

typedef struct		s_dict_entry
{
	char	*key;
	char	*value;
}					t_dict_entry;

extern const char	*g_default_dict;
extern const char	*g_default_keys[];

char				*ft_get_value_pow10(int pow, t_dict_entry *dict);
char				*ft_get_value(char *key, int len, t_dict_entry *dict);
int					ft_has_default_keys(t_dict_entry *dict);
int					ft_has_duplicate(t_dict_entry *dict);
int					ft_can_write(char *str, t_dict_entry *dict);

t_dict_entry		*ft_parse(const char *content);

t_dict_entry		*ft_dict_new(int len);
t_dict_entry		*ft_dict_free(t_dict_entry *tab);

void				ft_translate(char *str, int len, t_dict_entry *dict);

char				*ft_read_dict(int fd);

#endif
