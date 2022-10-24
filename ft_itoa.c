/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:34:48 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/24 22:50:37 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    long int i;
    long int lent;
    long int j;
    long int tmp;
    char *new;

    j = 0;
    i = 1;
    tmp = n;
    lent = 1;
    if (tmp < 0)
        tmp *= -1;
    while (tmp > 9)
    {
        i = i * 10;
        tmp = tmp / 10;
        lent++;
    } 
    if (n < 0)
    {
        lent++;
        new = malloc(sizeof(char) * lent + 1);
            if (!new)
                return (NULL);
    }
    else    
        new = malloc(sizeof(char) * lent + 1);
        if(!new)
            return (NULL);
    if (n < 0)
    {
        new[0] = '-';
        j++;
        n *= -1;
        if ( n == -2147483648)
             return (ft_strdup((char *)"-2147483648"));
    }
    while (lent > j)
    {
        new[j] = (n / i) + 48;
        n = n - ((n / i) * i);
        i = i / 10;
        j++;
    }
    new[j] = '\0';
    return (new);
}
// int main()
// {
//     printf("%s\n",ft_itoa(2147483648));
// }
