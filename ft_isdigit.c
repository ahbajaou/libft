#include "libft.h"

int ft_isdigit(int nb)
{
        if (nb >= '0' && nb <= '9')
        {
            return (0);
        }
        return (1);
}
// int main()
// {
//     int n = '&';
//     int p;
//     p = ft_isdigit(n);
//     printf("%d",p);
// }