#include "libft.h"

 void *ft_memchr(const void *s, int c, size_t n)
 {
    if (n == 0)
        return (NULL);
    int i;
    i = 0;
    char *str = (char *)s;
    while (str[i])
    {
        if (str[i] == c)
        {
            return ((char *)&str[i]);
        }
        i++;
    }
    return (NULL);
 }
//  int main()
//  {
//     char s[] = "45215";
//     int c = '1';
//     size_t n = 5;
//     printf("%s\n",ft_memchr(s,c,n));
//     printf("%s\n",memchr(s,c,n));
//  }