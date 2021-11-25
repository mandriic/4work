#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	count;

	if (*s == 0)
		return (0);
	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}