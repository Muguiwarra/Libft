/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboune <nabboune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:13:07 by nabboune          #+#    #+#             */
/*   Updated: 2022/10/09 22:00:13 by nabboune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    size_t l;

    l = ft_strlen(str);
    while (l >= 0)
    {
        if (str[l] == c)
            return (str + l);
        l--;
    }
    return (0);
}
