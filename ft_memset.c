/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:15:39 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/20 01:52:19 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int c, size_t n)

{
	unsigned int	i;
	unsigned char	*tr;

tr = (unsigned char *)p;
	i = 0;
	while (i < n)
	{
		tr[i] = c;
		i++;
	}
	return (tr);
}
// int main()
// {
//     char str[] = "1234";
//     ft_memset(str,'2',2);
//     printf("{%s}\n",str);
//     char str1[] = "1234";
//     memset(str1, '2',2);
//     printf("[%s]\n",str1);
// }
