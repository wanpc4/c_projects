#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t count;
    size_t i;
    char *str;
    
    count = ft_strlen(s);
    if (s == NULL || f == NULL)
        return (NULL);
    str = (char *) malloc((count + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    i = 0;
    while (i < count)
    {
        str[i] = (*f)(i,s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}