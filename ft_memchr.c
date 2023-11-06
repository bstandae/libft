/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:16:13 by bstandae          #+#    #+#             */
/*   Updated: 2023/11/03 19:57:28 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void				*pointer;
	size_t				i;
	const unsigned char	*str;

	str = s;
	i = 0;
	while (str[i] != '\0' && i <= n)
	{
		if (str[i] == c)
		{
			*pointer = str[i];
			return (pointer);
		}
		i++;
	}
	return (0);
}

int main(void)
{
	char str[] = "Hello, World!";
	int chr = 'o';
	char* ptr = ft_memchr(str, chr, 6);

   if (ptr)
	   printf("First occurrence of %c in %s is at index %ld", chr, str, ptr - str);
   else
	   printf("%c is not present in %s ", chr, str);
   
   return 0;
}

