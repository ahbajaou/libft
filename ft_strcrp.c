#include "libft.h"
size_t ft_strlcpy(char *dest, const char *src, size_t dstsize)
{

 size_t i;

 if (!dstsize)
  return (ft_strlen(src));

 i = 0;

 while (src[i] && i < dstsize - 1)
 {
  dest[i] = src[i];
  i++;
 }
 dest[i] = '\0';
 return (ft_strlen(src));
}
// int	main()
// {
//      char dst [10] = "TERMINAL";
//      char src[10]  = "Vscode" ;
//      ft_strlcpy(dst,src,10);
//           printf("%s\n",dst);
// }