#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i = 0;
    int sign = 1;
    int res = 0;

        while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
        {
            i++;
        }
        while (nptr[i] == '+' || nptr[i] == '-')
        {
            if (nptr[i] == '-')
            {
                sign *= -1;
            }
            i++;
        }
        while(nptr[i] >= '0' && nptr[i] <= '9')
        {
            res = res * 10 + (nptr[i++] - 48);
        }
    return (sign * res);
}
// int main()
// {
//     char n[] = "   ----++1337";
//     int c = ft_atoi(n);
//     printf("%d \n" , c);
// }