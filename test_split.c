#include <stdio.h>
#include <stdlib.h>

int     ft_strlen(char const *s)
{
    int     i;
    
    i = 0;
    while (s[i])
        i++;
    return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		l;
	int		nc;
	int		ls;

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
	if (s[i - 1] == c)
		ptr = (char **) malloc((nc + 1) * sizeof(char *));
	else
		ptr = (char **) malloc((nc + 2) * sizeof(char *));
	if (!ptr)
		return (0);
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
		{
			ptr[j] = (char *) malloc((ls + 1) * sizeof(char));
			if (!ptr)
				return (0);
			j++;
		}
		if (s[i] != '\0')
			i++;
	}
	i = 0;
	j = 0;
	if (s[0] == c)
		i++;
	while (i < l && j < (nc + 2))
	{
		ls = 0;
		while (s[i] && s[i] != c)
		{
			ptr[j][ls] = s[i];
			ls++;
			i++;
		}
		if (s[i - 1] != c)
		{
			ptr[j][ls] = '\0';
			j++;
		}
		i++;
	}
	ptr[j] = 0;
	return (ptr);
}

int	main()
{
	char	A[] = "Hello.World.How.Are.U.Today?.";
	char	sp = '.';
	char	**B;
	int		i;

	B = ft_split(A, sp);
	for (i = 0; i < 6; i++)
		printf("%s\n", B[i]);
	return (0);
}