/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sertan <sertan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:41:24 by sertan            #+#    #+#             */
/*   Updated: 2025/03/08 16:44:23 by sertan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	i = 0;
	if (size <= d)
		return (size + s);
	while (src[i] && (d + i) < size -1)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}

#include <stdio.h>
int main()
{
	char src[] = "elma";
	char dest[] = "armut";

	ft_strlcat(dest,src,7);
	printf("%s",dest);
}
