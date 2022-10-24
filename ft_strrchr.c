#include "libft.h"
char *ft_strrchr(const char *str, int c)
{
    int len;
    int i;

    i = 0;
    len = 0;
    if (str[0] == '\0')
        return (NULL);
    if (c == '\0')
        return ("");
    while (str[i])
        i++;
    i -= 1;
    while (str[i])
    {
        if (str[i] == c)
        {
            return ((char *)&str[i]);
        }
        i--;
    }
    return (NULL);
}
// int main()
// {
//     char *str = "ahmeed";
//     int c = '\0';
//     printf("%s\n",strrchr("ahmeed",'\0'));
//     printf("%s\n",ft_strrchr(str,c));

// }