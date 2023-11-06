/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:26:12 by bstandae          #+#    #+#             */
/*   Updated: 2023/11/03 22:16:56 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] == big[i])
		{
			if (little[j] == '\0')
				return ((char *)(big + i - j));
			j++;
			i++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	big[] = "Hello my name is Bo";
	char	little[] = "name";

	printf("%s\n", ft_strnstr(big, little, 200));
	return (0);
}
