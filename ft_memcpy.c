/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:58:27 by mecauchy          #+#    #+#             */
/*   Updated: 2022/11/28 20:06:21 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*v_dest;
	unsigned char	*v_src;
	unsigned int	i;

	v_dest = (unsigned char *)dest;
	v_src = (unsigned char *)src;
	i = 0;
	if (!dest || !src)
		return (NULL);
	while (n)
	{
		v_dest[i] = v_src[i];
		i++;
		n--;
	}
	return (dest);
}
