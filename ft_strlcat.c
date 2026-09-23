#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
    size_t lenSrc;
    size_t lenDst;
    size_t i;

    lenSrc = ft_strlen(src);
    lenDst = ft_strlen(dst);
    i = 0;

    if (dsize <= lenDst)
    {
        return (lenSrc + dsize);
    }
    
    while((lenDst + i) < (dsize - 1) && src[i])
    {
        dst[lenDst + i] = src[i];
        i++;
    }
    dst[lenDst + i] = '\0';
    return(lenDst + lenSrc);
}
// int main ()
// {
//  char src[] = "world";
//  char dst[15] = "hello ";
//  int len = ft_strlcat(dst, src, 12);
//  printf("%i\n", len);
//  printf("%s\n", dst);
// }