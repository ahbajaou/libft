#include "libft.h"

int ft_isascii( int c )
{
    if (c >= 0 && c <= 127)
    {
        return (0);
    }
    return (1);
}
// int main()
// {
//     int as = '0';
//     int p = ft_isascii(as);
//     printf("%d",p);
// }