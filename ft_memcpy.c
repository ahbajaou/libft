/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:19:19 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/24 18:46:36 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)

{
	unsigned char	*dt;
	unsigned char	*sc;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	dt = (unsigned char *)dst;
	sc = (unsigned char *)src;
	if (n == 0)
		return (dt);
	if (dt == 0 && sc == 0)
		return (0);
	while (sc[i] && i < n - 1)
	{
		dt[j] = sc[i];
		i++;
		j++;
	}
	dt[j] = sc[i];
	return (dt);
}
