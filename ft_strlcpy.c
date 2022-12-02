/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:59:33 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/01 21:38:32 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (!dest || !src)
		return (0);
	while (src[i] && size > 0)
	{
		dest[i] = src[i];
		i++;
		size --;
	}
	/*
	dest[i] = 0;
	while (src[i])
		i++;
	*/
	return (i);
}
