/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:21:56 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/16 19:14:22 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *str1, const char *str2, size_t len)
{
    size_t i;
    size_t j;
    char *s1;
    char *s2;

    s1 = (char *)str1;
    s2 = (char*)str2;
    i = 0;
    while (s1[i] && i < len)
    {
        j = 0;
        while (s1[j + i] == s2[j])
        {
            if (!(s2[j + 1]))
            {
                return (s1 + 1);
            }
            j++;
        }
        i++;
    }
    return ("");
}
// int main()
// {
//     char str2[] = "mad";
//     char str1[] = "ahmedmadbjooooghgdfhuytuuuuuu";
//     printf("%s\n",ft_strnstr(str1,str2,5));
//     char sr2[] = "mad";
//     char sr1[] = "ahmedmadbjoooodfhdfhduuuuuuuuu";
//     printf("%s\n",strnstr(sr1,sr2,5));
// }