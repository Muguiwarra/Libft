/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboune <nabboune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:39:38 by nabboune          #+#    #+#             */
/*   Updated: 2022/10/10 01:48:02 by nabboune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{

    if (src < dst)
    {
        while (len > 0)
        {
            *(char *)(dst + len - 1) = *(char *)(src + len - 1);
            len--;
        }
    }
    else
        ft_memcpy(dst, src, len);
    return (dst);
}