#include "libft.h"
#include <unistd.h>
#include <limits.h>

void ft_putnbr_fd(int n, int fd);

void ft_putnbr_fd(int n, int fd)
{
    int numConverter;
    int negNumber;
    numConverter = '0' + (n % 10);
    if (n >= 0 && n <= 9)
        write(fd, &numConverter, 1);
    else if (n >= -9 && n < 0)
    {
        write(fd, "-", 1);
        negNumber = '0' + (-n % 10);
        write(fd, &negNumber, 1);
    }
    else if (n > 9 && n <= INT_MAX)
    {
        ft_putnbr_fd(n / 10, fd);
        write(fd, &numConverter, 1);
    }
    else if (n >= INT_MIN && n < -9)
    {
        write(fd, "-", 1);
        ft_putnbr_fd(-n / 10, fd);
        negNumber = '0' + (-n % 10);
        write(fd, &negNumber, 1);
    }
}