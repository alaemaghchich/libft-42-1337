#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t i;
    size_t j;
    
    str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!str)
    {
        return (NULL);
    }
    i = 0;
    while(i < ft_strlen(s1))
    {
        str[i] = s1[i];
        i++;
    }
    j = 0;
    while(i < (ft_strlen(s1) + ft_strlen(s2)))
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return (str);
}
// int main () 
// {
//     char s1[] = "The prefix string";
//     char s2[] = "The suffix string.";
//     char *str = ft_strjoin(s1, s2);
//     int i = 0;
//     while(str[i])
//     {
//         write(1, &str[i++], 1);
//     }
//     return (0);
// }