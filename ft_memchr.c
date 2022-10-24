/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:20:09 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/24 19:07:04 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_memchr(const void *s, int c, size_t n)
 {
    int i;
    unsigned char *str;
    
    str = (unsigned char *)s;
    i = 0;
    if (n == 0 || str == NULL)
        return (NULL);
    while (str[i])
    {
        if (str[i] == c)
        {
            return ((unsigned char *)&str[i]);
        }
        i++;
    }
    return (NULL);
 }
