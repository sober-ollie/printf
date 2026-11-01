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
	(*count) += ft_strlen(str);
    (*i)++;
}

void    ft_print_number(int *i, int *count, char *str)
{
    if (!str)
        return ;
    ft_putstr_fd(str, 1);
    (*count) += ft_strlen(str);
    (*i)++;
    free(str);
}

void    ft_deci(int *i, int *count, int n)
{
    char    *str;

    str = ft_itoa(n);
    ft_print_number(i, count, str);
}

void    ft_u(int *i, int *count, unsigned int n)
{
    char    *str;

    str = ft_uitoa(n);
    ft_print_number(i, count, str);
}

void    ft_hex(int *i, int *count, unsigned long n, char c)
{
    char    *str;

    if (c == 'x')
        str = ft_hextoa(n, 0);
    else
        str = ft_hextoa(n, 1);
    ft_print_number(i, count, str);
}