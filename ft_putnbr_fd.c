
#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    int nb;
    int i;

    nb = n;
    i = 1;
    if (nb < 0)
    {
        ft_putchar_fd('-',fd);
        nb *= -1;
    }
    while (nb > 9)
    {
        nb = nb / 10;
        i = i * 10;
    }
    while (i > 10)
    {
        n = (nb / i) - 48;
        nb = nb - ((nb / i ) * i);
        i = i / 10;
        ft_putchar_fd(n,fd);
    }
}
int main()
{
    ft_putnbr_fd(1337,1);
}