/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:38:02 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/11/01 20:13:22 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		c;
	char	*tr;
	size_t	i;

	i = 0;
	tr = NULL;
	c = '\0';
	if (n == 0)
		return ;
	tr = (char *)s;
	while (i < n)
	{
		tr[i] = c;
		i++;
	}
}
