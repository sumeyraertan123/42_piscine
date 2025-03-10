/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sertan <sertan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:15:40 by sertan            #+#    #+#             */
/*   Updated: 2025/02/25 15:25:23 by sertan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	ilk;
	int	ikinci;

	ilk = 0;
	while (ilk <= 98)
	{
		ikinci = ilk + 1;
		while (ikinci <= 99)
		{			
			ft_putchar((ilk / 10) + '0');
			ft_putchar((ilk % 10) + '0');
			ft_putchar(' ');
			ft_putchar((ikinci / 10) + '0');
			ft_putchar((ikinci % 10) + '0');
			if (!(ilk == 98 && ikinci == 99))
				write(1, ", ", 1);
			ikinci++;
		}
		ilk++;
	}
}
