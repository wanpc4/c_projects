#include "libft.h"
#include <unistd.h>

void    ft_putchar_fd(char c, int fd);

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*
    0 - stdin(): input.
    1 - stdout(): output.
    2 - stderr(): error.
*/