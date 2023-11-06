/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:15:18 by bstandae          #+#    #+#             */
/*   Updated: 2023/11/03 19:40:42 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			ptr = (char *)(s + i);
		i++;
	}
	if (s[i] == (char)c)
		ptr = (char *)(s + i);
	if (ptr != NULL)
		return (ptr);
	return (0);
}
/*
int main(void) 
{  
	char str[] = "Hello, World!";
	int chr = 'o';
	char* ptr = ft_strrchr(str, chr);

   if (ptr) {
       printf("Last occurrence of %c in %s is at index %ld",
	   chr, str, ptr - str);
   }
   else {
       printf("%c is not present in %s ", chr, str);
   }
   return 0;
}*/
