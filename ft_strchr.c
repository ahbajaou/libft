/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 04:45:53 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/11/02 05:44:16 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*new;

	new = (char *)str;
	c = (char)c;
	if (c == '\0')
		return (new + ft_strlen(new));
	i = 0;
	while (new[i])
	{
		if (new[i] == c)
			return (&new[i]);
		i++;
	}
	return (NULL);
}
