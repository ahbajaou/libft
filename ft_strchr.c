/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 04:45:53 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/17 04:45:58 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *str, int c)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            return ((char *)&str[i]);
        }
        i++;
    }
    return ("");
}
// int main()
// {
//     const char *s = "ah\0med";
//     int c ;
//     c = 'h';
//     printf("dyali = %s\n", ft_strchr(s, '\0'));
//     printf("dyalhom = %s\n",strchr("ah\0med", '\0'));
// }