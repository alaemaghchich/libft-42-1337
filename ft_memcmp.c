#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;
    size_t i;

    str1 = s1;
    str2 = s2;
    i = 0;
    while (i < n)
    {
        if(str1[i] != str2[i])
        {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (0);
}
// int main()
// {
//     int a = 11;
//     int b = 11;
//     int x = ft_memcmp(&a , &b, 4);
//     printf("%d" , x);//return 0;
// }