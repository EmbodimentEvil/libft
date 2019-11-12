/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 08:08:44 by sleonia           #+#    #+#             */
/*   Updated: 2019/11/12 12:53:26 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (++size == 0)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
