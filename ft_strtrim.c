/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 05:30:55 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/25 00:43:13 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_char(char *str,char c)
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
char    *ft_strtrim(char const *s1, char const *set)
{
    char *str;
	char *sep;
	int i;
	int j;

	str = (char *)s1;
	sep = (char *)set;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (ft_check_char(&str[i],set[j]) == 0)
		{
			break;
		}
		i++;
	}
	i -= 1;
	while (str[i])
	{
		if (ft_check_char(&str[i],set[j]) == 0)
		{
			break;
		}
		i--;
	}
	return (&str[i]);

}
int main()
{
    printf("{%s}\n", ft_strtrim("   amed  rabia  ", " "));
}
