/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:32:45 by bstandae          #+#    #+#             */
/*   Updated: 2023/10/27 11:44:32 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		i;
	int		len;	

	newstr = (char *) malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (newstr == NULL)
		return (0);
	i = 0;
	len = 0;
	while (s1[len] != '\0')
	{
		newstr[len] = s1[len];
		len++;
	}
	while (s2[i] != '\0')
	{
		newstr[len + i] = s2[i];
		i++;
	}
	newstr[len + i] = '\0';
	return (newstr);
}
/*
int	main(void)
{
	char	s1[] = "just a";
	char	s2[] = " lil guy";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/
