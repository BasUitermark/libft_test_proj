/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/31 16:42:17 by buiterma      #+#    #+#                 */
/*   Updated: 2022/05/31 16:42:18 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_out(int n)
{
	int		i;
	char	*str;
	int		ng;

	ng = 0;
	i = ft_intlen(n);
	str = (char *)ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		ng = 1;
		n *= -1;
	}
	str[i] = '\0';
	while (i)
	{
		i--;
		str[i] = n % 10 + '0';
		n /= 10;
	}
	if (ng)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*out;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	out = ft_out(n);
	return (out);
}
