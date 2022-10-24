/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:45:05 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/23 15:32:31 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    i = 0;
    if (n == 0 )
        return(0);
    unsigned char *str1 = ( unsigned char *)s1;
    unsigned char *str2 = ( unsigned char *)s2;
    while (str1[i] && str2[i] && str1[i] == str2[i] && i < n)
    {
        i++;
    } 
    return (str1[i] - str2[i]);
}
// int main()
// {
//     char strone [] = "";
//     char strtwo [] = "";
//     size_t n = 5;
//     printf("%d\n",ft_memcmp(strone,strtwo,n));
//     printf("%d\n",memcmp(strone,strtwo,n));
// }