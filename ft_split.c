/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 04:45:39 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/26 19:35:57 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != c && str[i + 1] == c) \
			|| (str[i] != c && str[i + 1] == '\0'))
				count++;
		i++;
	}
	return (count);
}

int	alloc_words(char *str, char c, int b)
{
	int	g;

	g = 0;
	while (str[b] && str[b] != c)
	{
		g++;
		b++;
	}
	return (g);
}

char	**ft_split(char *str, char c)
{
	char	**spl;
	int		i;
	int		j;
	int		h;

	i = 0;
	j = 0;
	spl = malloc(sizeof(char *) * count_words(str, c) + 1);
	if (!spl)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] == '\0')
			break ;
		spl[j] = malloc(sizeof(char ) * alloc_words(str, c, i) + 1);
		if (!spl[j])
			return (NULL);
		h = 0;
		while (str[i] && str[i] != c)
		{
			spl[j][h] = str[i];
			i++;
			h++;
		}
		spl[j][h] = '\0';
		j++;
	}
	spl[j] = NULL;
	return (spl);
}
