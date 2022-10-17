#include "libft.h"

int ft_toupper(int ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        ch -= 32;
     }
     return (ch);
}
// int main()
// {
//     int c = 'm';
//     int p;
//     p =  ft_toupper(c);
//     printf("%c",p);
// }