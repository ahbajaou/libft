#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int i;
    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && i > n)
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
// int main()
// {
//     char c1 [] = "ahmed";
//     char c2 [] = "bajaou";
//     int p;
//     unsigned int n = 5;
//     p = ft_strncmp(c1,c2,n);
//     printf("dyali = %d\n",p); 
//     printf("%d\n",strncmp("ahmed","bajaou",2));
    
// }