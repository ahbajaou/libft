/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:03:09 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/23 18:32:49 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)

{
	int		i;
	char	*s2;
	char	*str;

	i = 0;
	str = (char *)s1;
	s2 = (char *) malloc(ft_strlen((char *)str) + 1);
	if (!s2)
		return (NULL);
	while (str[i])
	{
		s2[i] = str[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
