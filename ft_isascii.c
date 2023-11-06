/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:59:37 by bstandae          #+#    #+#             */
/*   Updated: 2023/10/23 15:48:54 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
        printf("%i\n", ft_isascii(argv[i][0]));
        i++;
    }
    return (0);
}*/
