/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:46:04 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/22 18:14:31 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dest, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	size_dest;
	
// 	i = 0;
// 	j = ft_strlen(dest);
// 	size_dest = j;
// 	if (size && j < size - 1 )
// 	{
// 		while (src[i] && size_dest + i < size - 1)
// 		{
// 			dest[j] = src[i];
// 			j++;
// 			i++;
// 		}
// 		dest[j] = '\0';
// 	}
// 	if (size_dest >= size)
// 		size_dest = size;
// 	return (size_dest + ft_strlen(src));
// }

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
        size_t  i;
        size_t  j;
        size_t  dest_length;
        size_t  src_length;

        src_length = ft_strlen(src);
        dest_length = ft_strlen(dst);
        j = dest_length;
        i = 0;
        if (dest_length < size - 1 && size > 0)
        {
                while (src[i] && dest_length + i < size - 1)
                {
                        dst[j] = src[i];
                        j++;
                        i++;
                }
                dst[j] = 0;
        }
        if (dest_length > size)
                dest_length = size;
        return (dest_length + src_length);
}
