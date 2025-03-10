/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sertan <sertan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:41:32 by sertan            #+#    #+#             */
/*   Updated: 2025/02/25 13:40:00 by sertan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	negatif;
	char	pozitif;	

	negatif = 'N';
	pozitif = 'P';
	if (n < 0)
	{
		ft_putchar(negatif);
	}
	else
	{
		ft_putchar(pozitif);
	}
}
