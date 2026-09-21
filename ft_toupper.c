#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
    }
    return (c);
}
int main()
{
    char p[] = "hello world";
    int i = 0;
    int j;
    while (p[i])
    {
        j = ft_toupper(p[i]);
        write(1, &j , 1);
        i++;
    }
    write(1, "\n" , 1);
}