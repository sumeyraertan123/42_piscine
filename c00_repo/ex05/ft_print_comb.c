/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sertan <sertan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:16:59 by sertan            #+#    #+#             */
/*   Updated: 2025/02/25 15:28:23 by sertan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	y;
	char	o;
	char	b;

	y = '0';
	while (y <= '7')
	{
		o = y + 1;
		while (o <= '8')
		{
			b = o + 1;
			while (b <= '9')
			{
				ft_putchar(y);
				ft_putchar(o);
				ft_putchar(b);
				if (!(y == '7' && o == '8' && b == '9'))
					write(1, ", ", 2);
				b++;
			}	
			o++;
		}
		y++;
	}
}
