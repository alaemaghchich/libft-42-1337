#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= '0' && c <= '9') 
    || (c >= 'a' && c <= 'z') 
    || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    return (0);
}
// #include <stdio.h>
// int main()
// {
//     printf("%d\n" , ft_isalnum('a'));return 1
//     printf("%d\n" , ft_isalnum('B'));return 1
//     printf("%d\n" , ft_isalnum('3'));return 1
//     printf("%d\n" , ft_isalnum('#'));return 0
//     printf("%d\n" , ft_isalnum('@'));return 0
//     printf("%d\n" , ft_isalnum(6));return 0
// }