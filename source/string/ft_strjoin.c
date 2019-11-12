/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 10:53:00 by sleonia           #+#    #+#             */
/*   Updated: 2019/11/12 12:53:23 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		len_s1;
	size_t		len_s2;
	size_t		len_sum;
	char		*str;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len_sum = len_s1 + len_s2 + 1;
	if (!(str = (char *)malloc(sizeof(str) * len_sum)))
		return (NULL);
	i = -1;
	while (++i < len_s1)
	{
		str[i] = *s1;
		++i;
		++s1;
	}
	while (i < len_sum)
		str[i++] = *s2++;
	return (str);
}
