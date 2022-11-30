/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 00:11:04 by mecauchy          #+#    #+#             */
/*   Updated: 2022/11/29 01:11:27 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)

char	**tab;
char	*tmp;
int		index;
int		i;
int		j;

i = 0;
index = 0;
tab = char **)malloc(sizeof(char *) * (ft_word(s, c) + 1));
