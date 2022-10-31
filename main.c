/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:32:18 by mecauchy          #+#    #+#             */
/*   Updated: 2022/10/31 17:43:33 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("ft_strncmp = %d\n", ft_strncmp("test\200", "test\0", 6));
	printf("strncmp = %d\n", strncmp("test\200", "test\0", 6));
	return (0);
}
