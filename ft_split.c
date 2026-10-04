#include "libft.h"

static int countWord(const char *str, char c)
{
    int words = 0;
    int i = 0;
    while(str[i])
    {
        if((str[i] != c && str[i + 1] == c) || (str[i] != c && str[i + 1] == '\0'))
        {
            words++;
        }
        i++;
    }
    return (words);
}

char **ft_split(char const *s, char c)
{
    
char **split;
size_t words;
size_t i;
size_t start;
size_t end;
size_t len;

words = countWord(s, c);
split = malloc((words + 1) * sizeof(char *));
if(!split)
{
    return (NULL);
} 

i = 0;
start = 0;
while (s[start])
{

    while(s[start] && s[start] == c)
    {
        start++;
    }
    if(!s[start])
    {
        break;
    }
    end = start;
    while (s[end] && s[end] != c)
    {
        end++;
    }
    len = end - start;
    split[i] = ft_substr(s, start, len);
    if(!split[i])
    {
        return (NULL);
    }
    start = end;
i++;
}
split[i] = NULL;
return (split);
}
// int main()
// {
//     char **str = ft_split("hello world ssalam", '*');
//     int i = 0;
// while(str[i])
// {
//     ft_putstr_fd(str[i], 1);
//     ft_putchar_fd('\n', 1);
//     i++;
// }

// }