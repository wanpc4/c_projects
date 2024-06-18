#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *s, int fd);

void ft_putendl_fd(char *s, int fd)
{
    int count;
    count = 0;
    while (s[count] != '\0')
    {
        write(fd, &s[count], 1);
        count++;
    }
    write(1, "\n", 1);
}