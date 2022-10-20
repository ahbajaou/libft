/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 03:12:35 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/19 21:44:12 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    unsigned int i;
    unsigned int j;
    char *str;
    char *str1;
    char *str2;

    i = 0;
    j = 0;
    str1 = (char *)s1;
    str2 = (char *)s2;
    str = malloc(sizeof(ft_strlen(str1) + ft_strlen(str2) - 1));
    if(!str)
        return (NULL);
    if (str1 == NULL && str2 == NULL)
        return (NULL);
    while (i < ft_strlen(str1))
    {
        str[i] = str1[i];
        i++;
    }
    while (j < ft_strlen(str2))
    {
        str[i] = str2[j];
        j++;
        i++;
    }
    return (str);
}
// int main()
// {
//     char s1 [6] = "ahmed";
//     char s2 [8] = "bajaou";
//     printf("%s\n",ft_strjoin(s1,s2));
    
// }