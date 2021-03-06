/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanfred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 19:21:57 by cmanfred          #+#    #+#             */
/*   Updated: 2018/11/26 13:22:36 by cmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		i;
	int		tmp[10];

	if (n < 0)
		ft_putchar('-');
	if (n == 0)
		ft_putchar('0');
	i = 0;
	while (n != 0)
	{
		tmp[i] = n % 10;
		n /= 10;
		if (tmp[i] < 0)
			tmp[i] *= -1;
		i++;
	}
	while (i-- > 0)
		ft_putchar(tmp[i] + '0');
}
