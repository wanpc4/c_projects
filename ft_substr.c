#include <stdio.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len);

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t  count;

    count = 0;
    str = (char *) malloc((len + 1) * sizeof(char));
    if (str == NULL)
    {
        return (NULL);
    }
    while ((s[start + count] != '\0') && (count < len))
    {
        str[count] = s[start + count];
        count++;
    }
    str[count] = '\0';
    return (str);
}

int main()
{
    char *result;
    result = ft_substr("Hello", 1, 5);
    printf("%s\n", result);
    free(result);
    return (0);
}