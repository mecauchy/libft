/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:45:25 by mecauchy          #+#    #+#             */
/*   Updated: 2022/11/01 13:11:22 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				i;
	int				j;
	unsigned int	count;
	char			*str;

	i = 0;
	j = 0;
	count = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0' && len)
	{
		if (count >= start && len)
		{
			str[j] = s[i];
			j++;
			len--;
		}
		count++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
