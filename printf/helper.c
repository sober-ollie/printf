#include "ft_printf.h"

void	ft_char(int *i, int *count, char c)
{
	ft_putchar_fd(c, 1);
    (*count)++;
    (*i)++;
}

void	ft_str(int *i, int *count, char *str)
{
	ft_putstr_fd(str, 1);
	count += ft_strlen(str);
    (*i)++;

}