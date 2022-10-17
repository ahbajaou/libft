#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    i = 0;
    if (n == 0 )
        return(0);
    char *str1 = (char *)s1;
    char *str2 = (char *)s2;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
    {
        i++;
    } 
    return (str1[i] - str2[i]);
}
// int main()
// {
//     char strone [] = "ahhhhh";
//     char strtwo [] = "amed";
//     size_t n = 0;
//     printf("%d\n",ft_memcmp(strone,strtwo,n));
//     printf("%d\n",memcmp(strone,strtwo,n));
// }