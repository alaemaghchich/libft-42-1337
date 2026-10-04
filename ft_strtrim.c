#include "libft.h"

int ft_wax_kayen(char s, const char *set)
{
    int i = 0;
    while(set[i])
    {
        if(s == set[i])
        {
            return (1);
        }
        i++;
    }
    return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int len;
    int size;
    char *trim;

    if(!s1 || !set)
    {
        return (NULL);
    }

    i = 0;
    len = ft_strlen(s1) - 1;

        while(i <= len && ft_wax_kayen(s1[i], set) == 1)
        {
            i++;
        }
        while(i <= len && ft_wax_kayen(s1[len], set) == 1)
        {
            len--;
        }
        if (i > len)
        {
            return (ft_substr(s1, 0, 0));
        }

    size = (len + 1) - i;
    trim = ft_substr(s1, i, size);
    return (trim);
}
// int main()
// {
//     char *p = ft_strtrim("123321231h4ello world3213", "123");
//     ft_putstr_fd(p, 1);
// }