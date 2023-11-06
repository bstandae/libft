/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:19:01 by bstandae          #+#    #+#             */
/*   Updated: 2023/10/27 11:16:07 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*duplicate;

	i = 0;
	while (s[i] != '\0')
		i++;
	i++;
	duplicate = (char *) malloc(i * sizeof(char));
	if (duplicate == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		duplicate[i] = (char)s[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
/*
int	main(void)
{
	char	str[] = "hello";

	printf("%s\n", ft_strdup(str));
	return (0);
}*/
