/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:35:25 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/21 22:25:53 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
    size_t i;
    i = 0;

     unsigned char *sc;
    sc = (unsigned char *)src;
    if (!dst || n == 0)
        return (ft_strlen((char *)sc));
    while (sc[i] && i < n - 1)
    {
        dst[i] = sc[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen((char *)sc));
}
// int main()
// {
//     char dst [] = "ahmedbajaou";
//     char src [] = "133736";
//     printf("%zu\n",strlcpy(dst,src,1));
//     char dst1 [] = "ahmedbajaou";
//     char src1 [] =  "133736";
//     printf("%zu\n",ft_strlcpy(dst1,src1,1));
// }
