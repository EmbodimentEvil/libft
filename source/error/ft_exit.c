/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 01:57:00 by sleonia           #+#    #+#             */
/*   Updated: 2019/12/15 05:23:54 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"
#include <unistd.h>

void		ft_exit(const char *error_text)
{
	ft_putendl_fd(error_text, STDERR_FILENO);
	exit(EXIT_FAILURE);
}
