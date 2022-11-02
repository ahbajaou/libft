/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:03:05 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/11/02 03:20:11 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s1;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = (char *)s;
	s1 = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!s1)
		return (NULL);
	while (str[i])
	{
		s1[i] = (*f)(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
