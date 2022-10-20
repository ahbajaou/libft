
#include "libft.h"
void ft_count(int n ,int fd)
{
    int nb;
    int i;

    nb = n;
    i = 1;
      while (nb > 9)
    {
        nb = nb / 10;
        i = i * 10;
    }
    while (i > 9)
    {
        ft_putchar_fd(n / i + '0', fd);
		n = n - (n / i) * i;
		i = i / 10;
    }
    ft_putchar_fd(n + '0', fd);
}
void ft_putnbr_fd(int n, int fd)
{
    int nb;
    int min;

    nb = n;
    min = -2147483647;
    if (nb == min)
        {
            ft_putchar_fd(min,fd);
        }
    else 
    {
        if (nb < 0) 
            ft_putchar_fd('-',fd);
            nb *= -1;
    }
    ft_count(nb,fd);
}
// int main()
// {
//     ft_putnbr_fd(-214747,1);
// }