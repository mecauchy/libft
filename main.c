/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:32:18 by mecauchy          #+#    #+#             */
/*   Updated: 2022/11/02 22:05:08 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_lst(t_list *lst)
{
	while (lst != NULL)
	{
		printf(" %s -> ", lst->content);
		lst = lst->next;
	}
	printf("(null)\n");
}

int	main(int ac, char **av)
{
	t_list *lst;
	
	for (int i = 1; i < ac; i++)
	{
		lst = ft_lstnew(av[i]);
		ft_lstadd_front(&lst, lst);
		ft_bzero(lst, sizeof(lst));
		print_lst(lst);
	}
	return (0);
}

