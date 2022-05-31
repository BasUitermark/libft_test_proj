/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/31 16:43:05 by buiterma      #+#    #+#                 */
/*   Updated: 2022/05/31 16:43:06 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr_fd(char *str, int fd)
{
	size_t	out;

	out = 0;
	if (!str)
	{
		out = write (fd, "(null)", 6);
		return (out);
	}
	out = write(fd, str, ft_strlen(str));

	return (out);
}
