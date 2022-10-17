#include "libft.h"
int ft_isprint(int c)
{
    if (c >= 33 && c <= 126)
    {
        return (1);
    }
    return (0);
}
// int main()
// {
//     /*int cha;
//     int p;
//     cha = '&';
//     p = ft_isprint('4');
//     printf("%d",p);*/
// 	char *str = "hello";
// 	printf("%d\n", *str);
// 	str++;
// 	printf("%d\n", *str);
// }
