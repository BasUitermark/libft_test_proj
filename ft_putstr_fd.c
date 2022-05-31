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
