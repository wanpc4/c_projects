#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set);



int main()
{
    char *result;
    result = ft_strtrim("Hello World!", "World!");
    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    }
    else
    {
        return (1);
    }
    return (0);
}