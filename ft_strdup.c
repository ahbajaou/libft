
#include "libft.h"

char *ft_strdup(const char *s1)
{
    int i;
    char *s2;
    char *str;

    i = 0;
    str = (char *)s1;
    s2 = (char *) malloc(sizeof(int) * (ft_strlen(str) - 1));
    while (str[i])
    {
        s2[i] = str[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}
// int main()
// {
//     char s[] = "ahmned";
//     printf(">>%s\n",ft_strdup(s));
//     char s1[] = "ahmned";
//    printf(">>%s\n",strdup(s1));
// }