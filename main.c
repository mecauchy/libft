/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:32:18 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/12 19:02:52 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *str)
{
	int		i;
	char	*ret;

	i = 0;
	ret = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i])
	{
		ret[i] = str[i];
		i++;
	}
	return (ret);
}

int		main(void)
{
	char	*dest;

	dest = malloc(sizeof(char) * 16);
	memset(dest, 'r', 15);
	printf("%zu, %s\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5), dest);
	return 0;
}
