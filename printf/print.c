#include "ft_printf.h"
#include "stdio.h"


int ft_printf(const char *format, ...)
{
    va_list args;
    int     i;
	int		count;
	char	*str;

    i = 0;
	count = 0;
    va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == 'c')
			ft_char(&i, &count, va_arg(args, int));
		else if (format[i] == '%' && format[i + 1] == 's')
			ft_str(&i, &count, va_arg(args, char *));
		else if (format[i] == '%' && format[i + 1] == '%')
			ft_char(&i, &count,'%');
		else if (format[i] == '%' && format[i + 1] == '%')
			ft_putnbr_fd(va_arg(args, int), 1);
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
    return (count);
}

int main()
{
	ft_printf("Progress: 50%%%");

}