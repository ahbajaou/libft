/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:55:18 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/26 23:27:42 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*new;

	new = (char *)str;
	if (c == 0)
		return (new + ft_strlen(new));
	i = ft_strlen(new);
	while (i >= 0)
	{
		if (new[i] == (char)c)
			return (&new[i]);
		i--;
	}
	return (0);
}
