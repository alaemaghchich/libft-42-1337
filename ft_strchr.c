#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while(s[i])
    {
        if (s[i] == c)
        { 
            return ((char *)&s[i]);
        }
        i++;
    }
    return (NULL);
}
// int main ()
// {
//     char str[] = " hello world salam 3alykom";
//     char *p = ft_strchr(str , 'z');
//     printf("%s\n" , p);
// }