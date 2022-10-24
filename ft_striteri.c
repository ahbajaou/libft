/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:03:51 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/25 00:22:22 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    unsigned int i;

    i = 0;
    s = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!s)
        return ;
    while (s[i])
    {
         (*f )(i,&s[i]);
        i++;
    }
    s[i] = '\0';
}
