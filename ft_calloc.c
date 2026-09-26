#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t total;
    char *call;

    total = nmemb * size;
    call = malloc(total);
    if(!call)
    {
        return (NULL);
    }
    ft_bzero(call, total);
    return (call);
}
// int main()
// {
//     char *mem = ft_calloc(5 ,sizeof(char));
//     int i = 0;
//     while (i < 5)
//     {
//     printf("%i\n" , mem[i]);
//     i++;
//     }
// }