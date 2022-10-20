/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:03:05 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/19 03:14:16 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char f(unsigned int x,char s)
{
    (void)x;
    return s;
}
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *s1;

    i = 0;
    if (s == NULL)
        return (NULL);
    s1 = malloc(sizeof (char) * ft_strlen((char *)s) + 1);
    if(s1 == NULL)
        return (NULL);
    while (s1[i])
    {
        s1[i] = (*f)(i,s[i]);
        i++;
    }
    s1[i] = '\0';
    return (s1);
}