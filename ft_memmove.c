#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    size_t t;
    unsigned char *d;
    const unsigned char *s;

    i = 0;
    d = dest;
    s = src;

    if (d > s)
    {
        while(n > 0)
        {
            --n;
            d[n] = s[n];
        }
    }
    else
    {
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}
// int main ()
// {
//     char arr[] = {'1', '2' , '3' ,'4', '5', '6'};
//     ft_memmove(arr + 1, arr, 4);
//     int i = 0;
//     while (arr[i])
//     {
//         write(1, &arr[i++], 1);
//     }
// }