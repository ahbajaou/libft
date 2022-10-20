#include "libft.h"

 size_t ft_strlcat(char *dst, const char *src, size_t z)
 {
    size_t i;
    size_t j;
    size_t  l;
    size_t c;
    char *sc;

    sc = (char *)src;
    i = 0;
    c = ft_strlen(dst);
    j = ft_strlen(sc);
    l = c;
    if (j == 0 && z == 0)
        return (0);
    if (z == 0)
        return (j);
    while (sc[i] && c < z - 1)
        dst[c++] = sc[i++];
    return (l + j);
 }

// int main()
// {
//     char dst [10] = "";
//     char src [] = "";
//     printf("dyali : %zu\n",ft_strlcat(dst,src,5));
//     char dst1 [10] = "";
//     char src1 [] = "";
//     printf("dyalhom : %zu\n",strlcat(dst1,src1,5));
//     return (0);
// }
