/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:19:08 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/16 21:17:10 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int k;
    int j;
    i = 0;
    j = 0;
    k = 1; 
    while (str[i] == 32 || (str[i] >= 7 && str[i] <= 13))
    i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            k *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        j = (j * 10)+ str[i] - 48;
        i++;
    }
    return (k * j);
}
int main()
{
    printf("%d\n", ft_atoi("2147483648"));
}