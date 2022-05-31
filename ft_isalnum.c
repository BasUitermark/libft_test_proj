#include "libft.h"

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_islower(c) || ft_isupper(c));
}