/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a18573961 <a18573961@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 02:10:12 by a18573961         #+#    #+#             */
/*   Updated: 2020/08/16 14:07:12 by a18573961        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdbool.h>

static void	find_start_substr(int len, char **p_start,
							const char *sep, char **sp)
{
	int i;

	while (true)
	{
		i = -1;
		while (++i < len)
		{	
			if (**p_start == sep[i])
			{
				(*p_start)++;
				break ;
			}
		}
		if (i == len)
		{
			*sp = *p_start;
			break ;
		}
	}
}

static void	find_end_substr(int len, const char *sep, char **sp)
{
	int	i;

	while (**sp != '\0')
	{
		i = -1;
		while (++i < len)
		{
			if (**sp == sep[i])
			{
				**sp = '\0';
				break ;
			}
		}
		(*sp)++;
		if (i < len)
			break;
	}
}

char	*ft_strtok(char *str, const char *sep)
{
	static char *sp = NULL;
	char		*p_start;
	int			len;

	len = ft_strlen(sep);
	if (!str && !sp)
		return (NULL);
	if (str && !sp)
		sp = str;
	p_start = sp;
	find_start_substr(len, &p_start, sep, &sp);
	if (*sp == '\0')
	{
		sp = NULL;
		return (sp);
	}
	find_end_substr(len, sep, &sp);
	return (p_start);
}
