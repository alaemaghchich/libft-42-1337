#include "libft.h"
int ft_intlen(int n)
{
    int num = n;
    int count;

    count = (num <= 0) ? 1 : 0;
    
    while (num != 0)
    {
        count += 1;
        num /= 10;
    }
    return (count);
}

char *ft_itoa(int n)
{
    int len;
    char *ascii;
    long nb;

    nb = n;
    len = ft_intlen(n);
    ascii =  malloc(sizeof(char) * (len + 1));
    

    if (!ascii)
    {
        return (NULL);
    }

    ascii[len--] = '\0';
    if (nb == 0)
    {
        ascii[0] = '0';
    }
    if (nb < 0)
    {
        ascii[0] = '-';
        nb *= -1;
    }
    while (nb != 0)
    {
        ascii[len] = (nb % 10) + 48;
        len--;
        nb /= 10;
    }
    return (ascii);
}
// int main ()
// {
//     char *str = ft_itoa(0);
//     int i = 0;
//     while(str[i]  != '\0')
//     {
//         write(1, &str[i++] , 1);
//     }
//     write (1, "\n" , 1);
//     free(str);
//     str = NULL;
// }