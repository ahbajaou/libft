/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:38:41 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/28 22:00:10 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t ct, size_t sz)
{
	void	*pt;

	pt = malloc (ct * sz);
	if (!pt)
		return (NULL);
	ft_bzero(pt, ct * sz);
	return (pt);
}
