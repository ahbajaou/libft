#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || ( c >= '0' && c <= '9'))
    {
        return (0);
    }
    return (1);
}
// int main()
// {
//     int k;
//     k = '&';
//     int p;
//     p = ft_isalnum(k);
//     printf("%d",p);
// }
