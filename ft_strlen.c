#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
}
// int main()
// {
//     printf("%i", ft_strlen("mohamed"));// work in windows
//     printf("\n%ld", ft_strlen("mohamed"));// work in linux
//     printf("\n%li", ft_strlen("mohamed"));// work in linux
//     printf("\n%lu", ft_strlen("mohamed"));// work in linux
//     printf("\n%zu", ft_strlen("mohamed"));// work in all couse %zu format for size_t
// }