#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
    {
        return (1);
    }
    return (0);
}
// int main()
// {
//     printf("%d\n", ft_isprint(2));
//     printf("%d\n", ft_isprint('q'));
//     printf("%d\n", ft_isprint(200));
// }