/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:19:19 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/16 19:18:39 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *dt = (char *)dst;
    char *sc = (char *)src;
    size_t i;

    i = 0;
    while (sc[i] && i < n)
    {
        dt[i] = sc[i];
        i++;
    }
    return(dt);
}   