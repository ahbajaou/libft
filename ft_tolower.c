#include "libft.h"
int ft_tolower(int ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch += 32;
    }
    return (ch);
}
// int main()
// {
//     int c = 'A';
//     int p = ft_tolower(c);
//     printf("%c",p);
// }