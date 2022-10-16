/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 01:32:10 by marvin            #+#    #+#             */
/*   Updated: 2022/10/13 01:32:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nstr(char const *s, char c)
{
	int		i;
	int		l;
	int		nc;

	i = 0;
	nc = 0;
	l = ft_strlen(s);
	if (s[0] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			nc++;
		i++;
	}
	return (nc);
}

char	**ft_ptr(char const *s, char c)
{
	char	**ptr;
	int		nc;
	size_t	l;

	nc = ft_nstr(s, c);
	l = ft_strlen(s);
	if (s[l - 1] == c)
		ptr = (char **) malloc((nc + 1) * sizeof(char *));
	else
		ptr = (char **) malloc((nc + 2) * sizeof(char *));
	return (ptr);
}

char	**ft_strnptr(char **ptr, char const *s, size_t l, char c)
{
	int		i;
	int		j;
	int		ls;

	i = 0;
	j = 0;
	if (s[0] == c)
		i++;
	while (i < l)
	{
		ls = 0;
		while (s[i] && s[i] != c)
		{
			ls++;
			i++;
		}
		if (s[i - 1] != c)
			ptr[j++] = (char *) malloc((ls + 1) * sizeof(char));
		if (!ptr[j - 1])
			return (0);
		if (s[i] != '\0')
			i++;
	}
	return (ptr);
}

char	**ft_fptr(char **ptr, char const *s, size_t l, char c)
{
	int		i;
	int		j;
	int		nc;
	int		ls;

	nc = ft_nstr(s, c);
	i = 0;
	j = 0;
	if (s[0] == c)
		i++;
	while (i < l && j < (nc + 2))
	{
		ls = 0;
		while (s[i] && s[i] != c)
			ptr[j][ls++] = s[i++];
		if (s[i - 1] != c)
			ptr[j++][ls] = '\0';
		i++;
	}
	ptr[j] = 0;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	size_t	l;
	int		nc;
	int		ls;

	nc = ft_nstr(s, c);
	l = ft_strlen(s);
	ptr = ft_ptr(s, c);
	if (!ptr)
		return (0);
	ptr = ft_strnptr(ptr, s, l, c);
	ptr = ft_fptr(ptr, s, l, c);
	return (ptr);
}