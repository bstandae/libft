/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:21:28 by bstandae          #+#    #+#             */
/*   Updated: 2023/10/26 22:54:34 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i] && i < n)
		i++;
	return (str1[i] - str2[i]);
}
/*
int     main(void)
 {
         char    str1[] = "a";
          char    str2[] = "abbi";
          char    str3[] = "napi";
          int result;
      unsigned int n;
 
      n = 3;
          result = ft_memcmp(str1, str2, n);
          printf("%d \n", result);
          result = ft_memcmp(str3, str2, n);
          printf("%d \n", result);
          result = ft_memcmp(str1, str3, n);
         printf("%d \n", result);
          return(0);
 }*/
