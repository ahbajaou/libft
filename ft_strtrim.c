/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 05:30:55 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/17 21:38:11 by ahbajaou         ###   ########.fr       */
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
int	check_words(char *str,char *s1)
{
	int	i;
	int	lent;

	i = 0;
	lent = 0;
	while (str[i])
	{
	    if(ft_check_char(s1, str[i]) == 0)
	        {
				lent++;
			}
	    i++;
	}
	return(lent + 1);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    char *end;
    int i = 0;
    int j = 0;
    
    end = malloc(sizeof(char) * (ft_chech_words((char *)s1, (char *)set) + 1));
    if(!end)
        return(NULL);
    while(s1[i])
    {
        if(ft_check_char((char *)set, s1[i]) == 0)
        {
            end[j] = (char)s1[i];
            j++;
        }
        i++;
    }
    end[j] = '\0';
    return(end);
}
// int main()
// {
//     printf("{%s}\n", ft_strtrim("achraf", "af"));
// }
