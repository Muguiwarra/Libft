/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboune <nabboune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:37:56 by nabboune          #+#    #+#             */
/*   Updated: 2022/10/11 01:02:06 by nabboune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ptr;
    size_t  i;

    i = 0;
    ptr = (char *) malloc(len);
    if (!ptr)
        return (0);
    while (i < len)
    {
        ptr[i] = s[start];
        i++;
        start++;
    }
    ptr[i] = '\0';
    return (ptr);
}