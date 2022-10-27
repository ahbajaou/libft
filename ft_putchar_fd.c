/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:35:08 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/26 23:07:51 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

// #include <fcntl.h>
// #include <errno.h>
// int	main()
// {
// 	int i = open("file.txt", O_RDONLY | O_CREAT);
// 	ft_putchar_fd(i,'z');
// 	printf("%d\n",i);
// }