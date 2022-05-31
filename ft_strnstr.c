/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/31 16:43:39 by buiterma      #+#    #+#                 */
/*   Updated: 2022/05/31 16:43:40 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t n)
{
	size_t	i;

	i = 0;
	if (little == NULL || ft_strlen(little) == 0)
		return ((char *)big);
	if (ft_strlen(little) > n)
		return (NULL);
	while (i < n)
	{
		if (ft_strncmp((char *)&big[i], little, ft_strlen(little)) == 0)
		{
			if (i + ft_strlen(little) > n)
				return (NULL);
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
