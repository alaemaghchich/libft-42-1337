#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    const unsigned char *s;

    i = 0;
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (d);
}
/*int main ()
{
    char s[] = {97, 108, 97, 101};
    char d[4];
    ft_memcpy(d,s, 4);
    int i = 0;
    while(i < 4)
    {
        printf("%d ", d[i++]); //97 108 97 101
    }
    printf("\n");
    i = 0;
    while ( i < 4)
    {
        write(1, &d[i++], 1); // alae
    } 
}*/