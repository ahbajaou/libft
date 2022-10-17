#include "libft.h"

int ft_isalpha(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            return (0);
        }   
        i++;
    }
    return (1);
}
// int main()
// {
//     char s[] = "5487";
//     int p;
//     p = ft_isalpha(s);
//     printf("%d",p);
// }
