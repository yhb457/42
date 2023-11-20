#include "libft.h"

int ft_atoi(const char *str)
{
    int	t;
	int	minus;
	int	result;

	t = 0;
	minus = 1;
	result = 0;
	while (str[t] == '\t' || str[t] == '\n' || str[t] == '\v' ||
				str[t] == '\f' || str[t] == '\r' || str[t] == ' ')
		t++;
	if (str[t] == '-' || str[t] == '+')
	{
		if (str[t] == '-')
			minus *= -1;
		t++;
	}
	while (str[t] >= '0' && str[t] <= '9')
	{
		result *= 10;
		result += str[t] - '0';
		t++;
	}
	return (result * minus);
}