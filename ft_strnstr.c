#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t i;
    size_t j;
    if (needle[0] == '\0')
    {
        return ((char *)haystack);
    }

    i = 0;
    while (haystack[i] && i < n)
    {
        j = 0;
        while(needle[j] && needle[j] == haystack[j + i] && (i + j) < n)
        {
            j++;
        }
        if (needle[j] == '\0')
        {
            return ((char *)&haystack[i]);
        }
        i++;
    }
    return (NULL);
}
// int main ()
// {
//     char *func = ft_strnstr("hello world salam 3alykom", "salam" ,17);
//     if(func == NULL)
//     {
//         printf("null");
//     }
//     else
//     {
//     printf("%s\n", func);
//     }
// }