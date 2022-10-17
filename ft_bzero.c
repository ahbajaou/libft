#include "libft.h"
void  ft_bzero(void *s, size_t n)
{
    if (n == 0)
        return ;
    char *tr = (char *)s;
    size_t i;
    i = 0;
    int c;
    c = '\0';
    while (i < n)
    {
        tr[i] = c;
        i++;
    }
}
// int main()
// {
//     char s[] = "ahmed";
//     ft_bzero(s,0);
//     printf("(%s)\n",s);
//     bzero(s,0);
//     printf("(%s)\n",s);
// }