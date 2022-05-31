/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/31 16:43:13 by buiterma      #+#    #+#                 */
/*   Updated: 2022/05/31 16:43:13 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!str || !c)
		return (NULL);
	len = ft_strlen(str);
	if (c == '\0')
		return (&((char *)str)[len]);
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return (&((char *)str)[i + 1]);
		i++;
	}
	return (NULL);
}
