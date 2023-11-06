/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:33:20 by bstandae          #+#    #+#             */
/*   Updated: 2023/10/25 13:58:09 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (0);
	i = 0;
	while (i < size && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	src[] = "Hello";
	char	dst[] = "Goodbye";

	printf("%s\n", dst);
	ft_strlcpy(dst, src, 4);
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcpy(dst, src, 4));
	return (0);
}*/
