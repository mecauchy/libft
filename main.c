/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:32:18 by mecauchy          #+#    #+#             */
/*   Updated: 2022/10/17 20:30:28 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int ac, char **av)
{
	char	*s1;
	char	*s2;
	char	*res;

	(void)ac;
	s1 = av[1];
	s2 = av[2];
	res = ft_strjoin(NULL, NULL);
	if (!res)
		printf("qqch est null\n");
	else
		printf("%s\n", res);
	return (0);
}
