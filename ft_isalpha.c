#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    return (0);
}
// #include <stdio.h>
// int main ()
// {
//     printf("%d\n", ft_isalpha('3')); return 0
//     printf("%d\n", ft_isalpha('a')); return 1
//     printf("%d\n", ft_isalpha('M')); return 1
//     printf("%d\n", ft_isalpha('*')); return 0
// }