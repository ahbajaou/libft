/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:15:20 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/11/01 02:16:39 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t z)

{
	size_t	i;
	size_t	x;
	size_t	j;

	i = 0;
	x = ft_strlen(src);
	if (z == 0)
		return (ft_strlen(src));
	j = ft_strlen(dst);
	if (z < j)
		return (x + z);
	while (src[i] && (i + j) < z - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (x + j);
}
