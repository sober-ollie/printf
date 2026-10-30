#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *format, ...);
void	ft_char(int *i, int *count, char c);
void	ft_str(int *i, int *count, char *str);

#endif