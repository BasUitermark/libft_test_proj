/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/31 16:41:32 by buiterma      #+#    #+#                 */
/*   Updated: 2022/05/31 16:41:36 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

int	ft_atoi(const char *str)
{
	int	i;
	int	min;
	int	out;

	i = 0;
	min = 1;
	out = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			min *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		out = out * 10 + (str[i] - '0');
		i++;
	}
	return (out * min);
}
