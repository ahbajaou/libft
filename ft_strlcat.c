#include "libft.h"

 size_t ft_strlcat(char *dst, const char *src, size_t z)
 {
    size_t i;
    size_t j;
    int c;
    char *dt;
    char *sc;

    dt = (char *)dst;
    sc = (char *)src;
    i = 0;
    j = 0;
    c = ft_strlen(dt);
    while (sc[j] && j < z - 1)
    {
        sc[i] = dt[j];
        i++;
        j++;
    }
    return (c + i);
 }
//  int    main()
//  {
//     char dt [10] = "bahemqan";
//     char sc [] = "edbj";
//     printf("%lu\n",ft_strlcat(dt,sc,10));
//     char dst [10] = "bahemqan";
//     char src [] = "edbj";
//     printf("%lu\n",strlcat(dst,src,10));
//  }