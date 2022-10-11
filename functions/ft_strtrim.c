/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboune <nabboune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:38:38 by nabboune          #+#    #+#             */
/*   Updated: 2022/10/11 01:10:14 by nabboune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t  ft_strltrim(char const *s1, char const *set)
{
    size_t  i;
    size_t  j;

    i = 0;
    while (s1[i])
    {
        j = 0;
        while (set[j] && (s1[i] != set[j]))
            j++;
        if (s1[i] == set[j])
        {
            i++;
            continue;
        }
        else
            break;
    }
    return (i);
}

size_t  ft_strrtrim(char const *s1, char const *set)
{
    size_t  l_s1;
    size_t  j;
    
    l_s1 = ft_strlen(s1);
    while (l_s1 > 0)
    {
        j = 0;
        while (set[j] && (s1[l_s1 - 1] != set[j]))
            j++;
        if (s1[l_s1 - 1] == set[j])
        {
            l_s1--;
            continue;
        }
        else
            break;
    }
    return (l_s1);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t  l_s1;
    char    *str;

    i = ft_strltrim(s1, set);
    l_s1 = ft_strrtrim(s1, set);
    str = ft_substr(s1, i, l_s1 - i);
    return (str);
}