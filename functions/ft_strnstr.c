/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboune <nabboune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:05:49 by nabboune          #+#    #+#             */
/*   Updated: 2022/10/09 22:09:10 by nabboune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    unsigned long i;
    unsigned long j;

    i = 0;
    while (i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j])
        {
            j++;
        }
        if (needle[j] == '\0')
            return (haystack + i);
        i++;
    }
    return (0);
}
