/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:46:04 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/12 19:11:46 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_dest;
	
	i = 0;
	j = ft_strlen(dest);
	size_dest = j;
	if (j >= size)
		return (size + ft_strlen(src));
	if (size && j < size - 1)
	{
		while (src[i] && size_dest + i < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
	}
	return (size_dest + ft_strlen(src));
}
