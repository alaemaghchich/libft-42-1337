#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *sub;

    if(start >= ft_strlen(s))
    {
        len = 0;
    }

    i = 0;
    sub = malloc((len + 1) * sizeof(char));

    if (!sub)
    {
        return (NULL);
    }
     while (s[start] && i < len)
     {
        sub[i++] = s[start++];
     }
     sub[i] = '\0';
     return (sub);
}
    // int main()
    // {
    //     char str[] = "The original string from which to create the substring";
    //     char *sub = ft_substr(str, 100, 10);
    //     printf("%s\n" , sub);
    //     free(sub);
    // }