#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t len;
    len = ft_strlen(s);

    while (len > 0)
    {
        if(c == s[len])
        {
            return ((char *)&s[len]);
        }
        len--;
    }
    return (NULL);
}
// int main () 
// {
//     char str[] = "salam 3aalykom hello word";
//     char *ret = ft_strrchr(str, '3');
//     printf("%s\n" , ret);
// }