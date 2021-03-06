/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/31 16:43:42 by buiterma      #+#    #+#                 */
/*   Updated: 2022/05/31 16:43:42 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str) + 1;
	while (len > 0)
	{
		len--;
		if (str[len] == (unsigned char)c)
			return (&((char *)str)[len]);
	}
	return (NULL);
}
