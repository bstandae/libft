/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:52:54 by bstandae          #+#    #+#             */
/*   Updated: 2023/10/23 15:48:06 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int main(int argc, char **argv)
{
    int i;

    if (argc == 1)
        return (0);
    i = 1;
    while (i < argc)
    {
        printf("test: %c\n", argv[i][0]);
        printf("%i\n", ft_isdigit(argv[i][0]));
        i++;
    }
    return (0);
}*/
