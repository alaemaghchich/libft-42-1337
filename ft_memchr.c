#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str;
    unsigned char ch;
    size_t i;
    
    str = s;
    ch = c;
    i = 0;
    while (i < n)
    {
        if (ch == str[i])
        {
            return ((void *)&str[i]);
        }
        i++;
    }
    return (0);
}
// int main ()
// {
//     char str[] = "Depending on your current operating system";
//     int c = 122;
//     char *pstr = ft_memchr(str, c, 43);
//     if (pstr == NULL)
//     {
//         write(1, "0\n", 1);
//     }
//     else
//     {
//         printf("%s\n", pstr);
//     }
// }