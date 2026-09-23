#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dsize)
{
    size_t i;
    size_t len;
    
    len = ft_strlen(src);
    i = 0;

    if(dsize == 0)
    {
        return (len);
    }
    while (i < (dsize - 1) && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';

    return (len);
}
// int main ()
// {
//  char src[] = "hello world";
//  char dst[15];
//  int len = ft_strlcpy(dst, src, 4);
//  printf("%i\n", len);
//  printf("%s\n", dst);
// }