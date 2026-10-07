#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

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
        ft_memcpy(dest, src, n);
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