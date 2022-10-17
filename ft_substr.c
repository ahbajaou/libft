#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    char *new;

    i = 0;
    if (start >= ft_strlen((char *)s))
        len = 0;
    while (i < len && s[i])
        i++;
    new = malloc (i + 1);
    if (!new)
        return (NULL);
    i = 0;
    while (s[i] && i < len)
    {
        new[i] = s[start];
        i++;
        start++;
    }
    new[i] = '\0';
    return (new);
}
int main()
{
    printf("%s\n",ft_substr("ahmedmedbj",4,7));
}