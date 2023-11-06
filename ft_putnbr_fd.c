/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstandae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:50:03 by bstandae          #+#    #+#             */
/*   Updated: 2023/10/27 12:36:10 by bstandae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(fd, ft_itoa(n), ft_strlen(ft_itoa(n)));
}

int	main(void)
{
	int	n;

	n = 12345;
	ft_putnbr_fd(n, 1);
	printf("\n");
	return (0);
}
