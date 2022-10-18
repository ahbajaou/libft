/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:42:49 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/18 02:48:25 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    if (fd < 0 )
        return ;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
}
// int main()
// {
//     char str[] = "ahmed";
//     int fd = 0;
//     ft_putstr_fd(str,1);
// }