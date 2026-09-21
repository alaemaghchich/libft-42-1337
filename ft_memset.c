#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *str;

    i = 0;
    str = s;
    while(i < n)
    {
        str[i++] = c; 
    }
    return (s);
}
// int main()
// {
//     char p[] = "    1337/42";
//     ft_memset(p, '0' , 4);
//     int i = 0;
//     while(p[i])
//     {
//         write(1, &p[i++] , 1);
//     }
// }