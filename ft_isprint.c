/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:07:27 by bstandae          #+#    #+#             */
/*   Updated: 2023/10/23 15:49:21 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (0);
	i = 1;
	while (i < argc)
	{
		printf("test: %c\n", argv[i][0]);
		printf("%i\n", ft_isprint(argv[i][0]));
		i++;
	}
	return (0);
}*/
