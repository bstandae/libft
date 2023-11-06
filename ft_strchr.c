/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:02:37 by bstandae          #+#    #+#             */
/*   Updated: 2023/11/03 19:43:29 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{	
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (0);
}
/*
int main(void)
{
	char str[] = "Hello, World!";
	int chr = 'o';
	char* ptr = ft_strchr(str, chr);

   if (ptr) {
       printf("First occurrence of %c in %s is at index %ld",
	   chr, str, ptr - str);
   }
   else {
       printf("%c is not present in %s ", chr, str);
   }
   return 0;
}*/
