/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:25:25 by bstandae          #+#    #+#             */
/*   Updated: 2023/10/27 11:25:42 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = (char *) malloc(len * sizeof(char));
	if (sub == NULL)
		return (0);
	while (s[start] != '\0' && i <= len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}
/*
int	main(void)
{
	char	str[] = "hello i am just a little guy";

	printf("%s\n", (char*)ft_substr(str, 11, 6));
	return (0);
}*/
