/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:12:34 by bstandae          #+#    #+#             */
/*   Updated: 2023/10/25 16:45:10 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
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
        result = ft_strncmp(str1, str2, n);
        printf("%d \n", result);
        result = ft_strncmp(str3, str2, n);
        printf("%d \n", result);
        result = ft_strncmp(str1, str3, n);
       printf("%d \n", result);
        return(0);
}*/
