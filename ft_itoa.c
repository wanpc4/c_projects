#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n);

char *ft_itoa(int n)
{
    char *number;
    int count;
    int temp;

    temp = n;
    if (n < 0)
    {
        count = 0;
    }
    else
    {
        count = -1;
    }
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
    number = (char *) malloc((count + 1) * sizeof(char));
    if (number == NULL)
    {
        return (NULL);
    }
    if (n == 0)
    {
        number[0] = '0';
        return (number);
    }
    number[count + 1] = '\0';
    if (n < 0)
    {
        number[0] = '-';
        n = -n;
    }
    while (n != 0)
    {
        number[count] = '0' + (n % 10);
        count--;
        n /= 10;
    }
    return (number);

    
    // char *number;
    // size_t count;
    // int temp;
    // int is_negative;

    // if (n == 0)
    // {
    //     number = (char *)malloc(2 * sizeof(char));
    //     if (number == NULL)
    //         return NULL;
    //     number[0] = '0';
    //     number[1] = '\0';
    //     return number;
    // }

    // is_negative = n < 0 ? 1 : 0;
    // temp = n;
    // count = is_negative ? 1 : 0; // Start with 1 if negative to account for '-'
    // while (temp != 0)
    // {
    //     count++;
    //     temp /= 10;
    // }

    // number = (char *)malloc((count + 1) * sizeof(char)); // +1 for null-terminator
    // if (number == NULL)
    //     return NULL;

    // number[count] = '\0'; // Null-terminator
    // if (is_negative)
    //     n = -n;

    // while (n != 0)
    // {
    //     number[--count] = '0' + (n % 10);
    //     n /= 10;
    // }

    // if (is_negative)
    //     number[0] = '-';

    // return number;
}

int main()
{
    // char *result;
    // for (int i = 0; i < 1000; i++)
    // {
    //     result = ft_itoa(i);
    //     if (result != NULL)
    //     {
    //         printf("%s\n", result);
    //         free(result);
    //     }
    // }
    // char *result;
    // for (int i = -1000; i <= 0; i++)
    // {
    //     result = ft_itoa(i);
    //     if (result != NULL)
    //     {
    //         printf("%s\n", result);
    //         free(result);
    //     }
    // }
    char *result;
    result = ft_itoa(-123456789);
    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}