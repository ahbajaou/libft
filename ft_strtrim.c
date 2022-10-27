/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 05:30:55 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/26 19:57:32 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_char(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(s1) - 1;
	str = (char *)s1;
	if (!s1 || !set)
		return (NULL);
	while (str[i] && ft_check_char(str[i], (char *)set))
		i++;
	while (len > 0 && ft_check_char(str[len], (char *)set))
		len--;
	return (ft_substr(str, i, len - i + 1));
}
