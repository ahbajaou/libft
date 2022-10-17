#include "libft.h"

void *ft_memset(void *p , int c, size_t n)
{
    // if (p == NULL)
    //     return (NULL);
    size_t i;
    char *tr;

    tr = (char *)p;
    i = 0;
    while (i < n && tr[i])
    {
        tr[i] = c;
        i++;
    }
    return tr;
}
// int main()
// {
//     char str[] = "amed";
//     ft_memset(str,'/',3);
//     printf("%s\n",str);
//      char str1[] = "amed";
//     memset(str1, '/', 3);
//     printf("%s\n",str1);
// }
