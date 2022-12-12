/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:32:18 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/12 18:22:57 by mecauchy         ###   ########.fr       */
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
	char	str[100] = "";
	char	*test = "milissa";
	size_t	total_len;

	total_len = ft_strlcat(str, test, sizeof(str));
	printf(" + %s = %s, len %zu\n", test, str, total_len);
	return 0;
}
