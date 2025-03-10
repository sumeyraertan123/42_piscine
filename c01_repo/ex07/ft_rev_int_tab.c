/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sertan <sertan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:51:06 by sertan            #+#    #+#             */
/*   Updated: 2025/02/27 15:21:13 by sertan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	son;

	son = size -1;
	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[son];
		tab[son] = temp;
		i++;
		son--;
	}
}
