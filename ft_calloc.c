#include "libft.h"

  void *ft_calloc(size_t ct, size_t sz)
{
  size_t i;
  i = 0;
  int *pt;
  pt = (int *)calloc (ct , sizeof(int));
  if (!pt)
    return (NULL);
  while (i < ct && i < sz)
  {
    pt[i] = i;
    i++;
  }
  return (pt);
}