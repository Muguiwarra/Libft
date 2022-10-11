/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboune <nabboune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:11:47 by nabboune          #+#    #+#             */
/*   Updated: 2022/10/10 13:41:01 by nabboune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char	*ptr;
    size_t	ls1;
    size_t	ls2;
    size_t	i;
	int		j;

    ls1 = ft_strlen(s1);
    ls2 = ft_strlen(s2);
    i = ls1;
	j = 0;
    ptr = (char *) malloc(ls1 + ls2);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, ls1 + 1);
    while (i < ls1 + ls2)
    {
        ptr[i] = s2[j];
		i++;
		j++;
    }
	return (ptr);
}