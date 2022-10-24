/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:02:51 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/21 21:23:38 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)src;
s2 = (unsigned char *)dst;
	if (s2 == NULL && s1 == NULL)
		return (NULL);
	if (s1 < s2)
	{
		while (len > 0)
		{
			s2[len - 1] = s1[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(s2, s1, len);
	return (s2);
}
