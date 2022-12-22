/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 00:11:04 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/22 17:01:40 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word(char const *str, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			while (str[i] && str[i] != c)
				i++;
			size++;
		}
		i++;
	}
	return (size); 
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*tmp;
	int		index;
	int		i;
	int		j;

	i = 0;
	index = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!s)
		return (free(tab), NULL);
	if (!tab || !c)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			tmp = ft_substr(s, i, j);
			if (!tmp)
				return (free(tab), NULL);
			tab[index] = tmp;
			free(tmp);
			index++;
			i += j;
		}
		i++;
	}
	tab[index] = NULL;
	return (tab);
}
