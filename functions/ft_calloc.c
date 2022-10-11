/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboune <nabboune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:43:25 by nabboune          #+#    #+#             */
/*   Updated: 2022/10/09 23:15:22 by nabboune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    int i;
    
    i = 0;
    ptr = malloc(count * size);
    while (*(unsigned char *)(ptr+ i))
    {
        *(unsigned char *)(ptr + i) = 0;
        i++;
    }
    return (ptr);
}