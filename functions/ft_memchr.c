/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboune <nabboune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:00:42 by nabboune          #+#    #+#             */
/*   Updated: 2022/10/10 14:21:40 by nabboune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memchr(const void *str, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (*(char *)(str + i) == c)
            return ((void *)str + i);
        i++;
    }
    return (0);
}