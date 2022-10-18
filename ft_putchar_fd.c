/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:35:08 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/17 23:41:15 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    if (fd < 0)
        return ;
    write(fd , &c, 1);
}
int main()
{
    char c = 'b';
    int fd = 0;
    ft_putchar_fd(c,fd);
}
