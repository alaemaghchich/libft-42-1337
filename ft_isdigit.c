#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return (1);
    }
    return (0);
}
// #include <stdio.h>
// int main ()
// {
//     printf("%d\n", ft_isdigit('3'));//return 1
//     printf("%d\n", ft_isdigit('a'));//return 0
//     printf("%d\n", ft_isdigit('M'));//return 0
//     printf("%d\n", ft_isdigit('*'));//return 0
// }