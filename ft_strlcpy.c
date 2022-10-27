/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:35:25 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/25 22:08:09 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t			i;
	unsigned char	*sc;

	i = 0;
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
