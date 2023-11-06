/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:55:15 by bstandae          #+#    #+#             */
/*   Updated: 2023/10/23 15:48:27 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '1' && c <= '9')
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
        printf("%i\n", ft_isalnum(argv[i][0]));
        i++;
    }
    return (0);
}*/
