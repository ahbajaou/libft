/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:21:56 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/11/02 00:43:36 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*part_2(char *s1, char *s2, size_t i, size_t len)
{
	size_t	j;

	while (s1[i] && i < len)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s2[j] && s2[j] == s1[i + j] && i + j < len)
			{
				if (s2[j + 1] == '\0')
					return (&s1[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	i = 0;
	if (s2[0] == '\0')
		return (s1);
	if (s1[0] == '\0' || len == 0)
		return (NULL);
	return (part_2(s1, s2, i, len));
}
