/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 04:45:39 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/28 01:20:33 by ahbajaou         ###   ########.fr       */
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

char	**part_two(char **spl, char *str, char c, int i)
{
	int		j;
	int		h;

	j = 0;
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

char	**ft_split(char *str, char c)
{
	char	**spl;
	int		i;

	i = 0;
	spl = malloc(sizeof(char *) * count_words(str, c) + 1);
	if (!spl)
		return (NULL);
	part_two(spl, str, c, i);
	return (spl);
}
// int	main()
// {
// 	char **tab = ft_split("ahmed dpk med",' ');
// 	int i = 0;
// 	while (tab[i])
// 	{
// 		printf("%s\n",tab[i]);
// 		i++;
// 	}
// }