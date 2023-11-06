/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:08:19 by bstandae          #+#    #+#             */
/*   Updated: 2023/11/03 23:37:29 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_awrite(int n, char *s, int len)
{
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	s[len + 1] = '\0';
	while (n / 10 != 0)
	{
		s[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		i;

	len = 1;
	if (n < 0)
		len++;
	i = n;
	while (i / 10 != 0)
	{
		i = i / 10;
		len++;
	}
	s = (char *) malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (0);
	s = ft_awrite(n, s, len);
	return (s);
}

int	main(void)
{
	int	n;

	n = -1234;
	printf("%s\n", ft_itoa(n));
	ft_putendl_fd(ft_itoa(n), 1);
	return (0);
}
