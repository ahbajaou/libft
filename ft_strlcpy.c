/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:35:25 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/19 04:29:08 by ahbajaou         ###   ########.fr       */
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
