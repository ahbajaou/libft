/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:21:56 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/23 16:56:08 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)

{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;
	int		x;

	s1 = (char *)str1;
	s2 = (char *)str2;
	i = 0;
	if (s2[0] == '\0')
		return (s1);
	if (s1[0] == '\0' || len == 0)
		return (NULL);
	while (s1[i] && i < len)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			x = i;
			while (s2[j] == s1[i] && s2[j] != '\0')
			{
				j++;
				i++;
			}
			if (j != ft_strlen((char *)s2))
				return (NULL);
			return (&s1[x]);
		}
		i++;
	}
	return (NULL);
}
