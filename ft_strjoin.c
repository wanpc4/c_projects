#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

char *ft_strjoin(char const *s1, char const *s2);

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t count_1;
    size_t count_2;
    char *result;

    count_1 = 0;
    count_2 = 0;
    //Step 1.
    while (s1[count_1] != '\0')
    {
        count_1++;
    }
    while (s2[count_2] != '\0')
    {
        count_2++;
    }
    //Step 2.
    result = (char *) malloc((count_1 + count_2 + 1) * sizeof(char)); //Additional 1 bit for '\0'
    //Step 3.
    if (result == NULL)
    {
        return (NULL);
    }
    //Step 4.
    size_t i;
    i = 0;
    //Step 5.
    //For *s1
    while (i < count_1)
    {
        result[i] = s1[i];
        i++;
    }
    i = 0;
    //For *s2
    while (i < count_2)
    {
        result[i + count_1] = s2[i];
        i++;
    }
    //Step 6.
    result[count_1 + count_2] = '\0';
    return (result);
}

/*
Algorithms:
    1. Count the length of both s1 and s2 array.
    2. Allocate the memory for both s1 and s2 length.
    3. If its null, then return null.
    4. Declare a new variable to count the length of s1 and s2 again (you'll see what I mean).
    5. iterate through s1 and s2. Then, display its String.
    6. Add null terminator ('\0') at the end of a string.
    7. Return the value of memory that we allocate which is string.
*/

int main()
{
    char *result = ft_strjoin("Hello ", "4");
    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}