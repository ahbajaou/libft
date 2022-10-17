#include "libft.h"
char *ft_strrchr(const char *str, int c)
{
    int len;
    int i;
    i = 0;
    len = 0;
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
    return ("");
}
// int main()
// {
//     char *str = "amed";
//     int c = 'h';
//     printf("%s\n",ft_strrchr(str,c));
//     printf("%s\n",strrchr("ahmehd",'h'));

// }