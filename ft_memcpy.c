/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:19:19 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/20 02:38:34 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *dt;
    unsigned char *sc;
    size_t i;

    i = 0;
    dt = (unsigned char *)dst;
    sc = (unsigned char *)src;
	if (n == 0)
		return (dt);
    while (sc[i] && i < n - 1)
    {
        dt[i] = sc[i];
        i++;
    }
    return(dt);
}
// int main()
// {
// 	char dst [] = "ahmed";
// 	char src [] = "nj99";
// 	printf("%s\n",ft_memcpy(dst,src,2));
// 	char dst1 [] = "ahmed";
// 	char src1 [] = "nj99";
// 	printf("%s\n",memcpy(dst1,src1,2));
// }