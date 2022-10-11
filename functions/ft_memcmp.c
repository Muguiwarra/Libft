/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboune <nabboune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:53:53 by nabboune          #+#    #+#             */
/*   Updated: 2022/10/09 23:13:40 by nabboune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (*(char *)(s1 + i) != *(char *)(s2 + i))
            return (*(char *)(s1 + i) - *(char *)(s2 + i));
        i++;
    }
    return (*(char *)(s1 + i) - *(char *)(s2 + i));
}