#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c += 32;
    }
    return (c);
}

// int main ()
// {
//     char str[] = "HELLO WORLD";
//     int i = 0;
//     int j;
//     while (str[i])
//     {
//         j = ft_tolower(str[i]);
//         write(1, &j, 1);
//         i++;
//     }
// }