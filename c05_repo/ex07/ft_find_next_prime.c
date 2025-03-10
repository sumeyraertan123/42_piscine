/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sertan <sertan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:34:05 by sertan            #+#    #+#             */
/*   Updated: 2025/03/09 18:34:24 by sertan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 2;
	j = 0;
	if (nb > 1)
	{
		while (i <= nb)
		{
			if (nb % i == 0)
				j++;
			i++;
		}
		if (j == 1)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
