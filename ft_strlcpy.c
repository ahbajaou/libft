/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:35:25 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/16 19:14:08 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
    size_t i;
    i = 0;

    char *sc;
    sc = (char *)src;
    while (sc[i] && i < n - 1)
    {
        dst[i] = sc[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(sc));
}
// int main()
// {
 
//    char src[] = "kome123654789";
//     char dst[8] = "baj";
//     // int p = 20;
//     // int n = 20;
//    char src1[] = "kome123456789";
//     char dst1[8] = "baj";
//     printf("dyalhum: >>> %lu\n",strlcpy(dst,src,6));
//     printf("%s\n",dst);
//     // printf("dyalhum : %s\n", dst);
//     printf("dyalk :) >>> %lu\n",ft_strlcpy(dst1,src1,6));
//         printf("%s\n",dst1);
//     // printf("dyalk :%s\n", dst1);
// }