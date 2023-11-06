/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:55:08 by bstandae          #+#    #+#             */
/*   Updated: 2023/11/03 18:58:26 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;

	i = 0;
	d = ft_strlen(dst);
	while (src[i] != '\0' && i < size)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (ft_strlen(dst));
}
/*
int	main(void)
{
	char	dst[] = "Hello";
	char	src[] = " and goodbye";
	size_t	s;

	s = ft_strlcat(dst, src, 14);
	printf("test: %zu, %s\n", s, dst);
	return (0);
}*/
