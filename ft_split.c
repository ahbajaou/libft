/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 04:45:39 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/10/17 05:40:46 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(char *str, char c)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (str[i] == c)
        i++;
    while (str[i])
    {
        if (str[i] == c && str[i + 1] != c)
            count++; 
        i++;
    }
    return (count + 1);
}
int alloc_words(char *str,char c,int b)
{
    int g;
    int i;

    g = 0;
    i = b;
    while (str[b] && str[b] != c)
    {
        g++;
        b++;
    }
    return (g);
}
char **ft_split(char *str, char c)
{
    char **spl;
    int i;
    int j;
    int h;

    i = 0;
    j = 0;
    spl = malloc(sizeof(char *) * count_words(str, c));
    if(!spl)
        return (NULL);
    while(str[i])
    {
        while(str[i] && str[i] == c)
            i++;
        if(str[i] == '\0')
            break;
        spl[j] = malloc(sizeof(char ) *alloc_words(str, c, i));
        if(!spl[j])
            return(NULL);
        h = 0;
        while(str[i] && str[i] != c)
        {
            spl[j][h] = str[i];
            i++;
            h++;
        }
        spl[j][h] = '\0';
        j++;
        i++;
    }
    spl[j] = NULL;
    return(spl);
}

int main()
{
    char **str = ft_split(NULL, '+');
    for(int i = 0; str[i]; i++)
        printf("{%s}\n", str[i]);
}