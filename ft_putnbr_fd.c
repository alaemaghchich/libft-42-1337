#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
     long nb = n;
     if (nb < 0)
     {
        ft_putchar_fd('-', fd);
        nb *= -1;
     }
     if(nb >= 10)
     {
        ft_putnbr_fd(nb / 10, fd);
     }
     ft_putchar_fd((nb % 10) + 48, fd);
}
// int main()
// {
//     ft_putnbr_fd(1337, 1);
// }
