/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:34:48 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/17 23:34:55 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"
char *ft_itoa(int n)
{
    int i;
    int tmp;
    int lent;
    int j;
    char *new;

    tmp = n;
    j = 0;
    i = 1;
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
        new = malloc(sizeof(char) * lent);
    }
    else    
        new = malloc(sizeof(char) * lent);
    if(new == NULL)
        return (NULL);
    if (n < 0)
    {
        new[0] = '-';
        j++;
        n *= -1;
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
int main()
{
    printf("%s\n",ft_itoa(1337));
}