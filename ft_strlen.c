/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:37:56 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/19 21:44:49 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
  size_t ft_strlen(const char *s)
{
     int i;
    i = 0;
    while (s[i])
    i++;
    return (i);
}