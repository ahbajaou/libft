/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:02:51 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/19 03:16:46 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned int i;;
    char *s1;
    char *s2;
    
    i = 1;
    s1 = (char *)src;
    s2 = (char *)dst;
    if (s2 == NULL || s1 == NULL)
        return (NULL);
    if (ft_strlen(s1) < ft_strlen(s2))
    {
        while (i < len + 1)
        {
            s2[i - 1] = s1[i - 1];
            i++;
        }
           return (s2);
    }
    else
    ft_memcpy(s2,s1,len);
    return (s2);

}