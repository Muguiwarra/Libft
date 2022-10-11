/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboune <nabboune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:50:24 by nabboune          #+#    #+#             */
/*   Updated: 2022/10/09 22:28:55 by nabboune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *ptr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(ptr + i) = 0;
		i++;
	}
}