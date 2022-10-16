/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:02:11 by marvin            #+#    #+#             */
/*   Updated: 2022/10/14 00:02:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ndigit(int n)
{
	int		temp;
	int		j;

	j = 1;
	temp = n;
	if (temp < 0)
		temp = 0 - temp;
	while (temp / 10 > 9)
	{
		temp = temp / 10;
		j++;
	}
	j++;
	if (n < 0)
		j++;
	if (temp / 10 == 0)
		j--;
	return (j);
}

char	*ft_nnbr(char *ptr, int n)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = ft_ndigit(n);
	k = j;
	ptr[0] = '-';
	n = 0 - n;
	while (n / 10 > 9)
	{
		ptr[j - 1] = n % 10 + '0';
		n = n / 10;
		j--;
	}
	ptr[j - 1] = n % 10 + '0';
	if (n / 10 != 0)
		ptr[j - 2] = n / 10 + '0';
	ptr[k] = '\0';
	return (ptr);
}

char	*ft_pnbr(char *ptr, int n)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = ft_ndigit(n);
	k = j;
	while (n / 10 > 9)
	{
		ptr[j - 1] = n % 10 + '0';
		n = n / 10;
		j--;
	}
	ptr[j - 1] = n % 10 + '0';
	if (n / 10 != 0)
		ptr[j - 2] = n / 10 + '0';
	ptr[k] = '\0';
	return (ptr);
}

char	*ft_znbr(char *ptr, int n)
{
	ptr[0] = '0';
	ptr[1] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = ft_ndigit(n);
	k = j;
	if (n == 0)
		ptr = (char *) malloc(2 * sizeof(char));
	else
		ptr = (char *) malloc((j + 1) * sizeof(char));
	if (n < 0)
		ptr = ft_nnbr(ptr, n);
	else if (n > 0)
		ptr = ft_pnbr(ptr, n);
	else
		ptr = ft_znbr(ptr, n);
	return (ptr);
}