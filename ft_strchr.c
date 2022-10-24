/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 04:45:53 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/22 21:34:30 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;
    char *str1;

    i = 0;
    str1 = (char *)str; 
    if (c == '\0')
        return ("");
    if (str1[0] == '\0')
        return (NULL);
    while (str1[i + 1])
    {
        if (str1[i] == c)
            return (&str1[i]);
        i++;
    }
    return (NULL);
}
// int main()
// {
//     const char *s = "a`hmed";
//     printf("dyalhom = %s\n",strchr(s, 'e'));
//     printf("dyali = %s\n", ft_strchr(s, 'e'));
// }