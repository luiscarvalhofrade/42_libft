/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:28:48 by luide-ca          #+#    #+#             */
/*   Updated: 2024/10/17 14:28:49 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_is_min_int(void)
{
	char	*is_min_int;

	is_min_int = (char *)malloc(12 * sizeof(char));
	if (!is_min_int)
		return (0);
	is_min_int[0] = '-';
	is_min_int[1] = '2';
	is_min_int[2] = '1';
	is_min_int[3] = '4';
	is_min_int[4] = '7';
	is_min_int[5] = '4';
	is_min_int[6] = '8';
	is_min_int[7] = '3';
	is_min_int[8] = '6';
	is_min_int[9] = '4';
	is_min_int[10] = '8';
	is_min_int[11] = '\0';
	return (is_min_int);
}

static int	ft_size_of_int(int n)
{
	int	counter;

	counter = 1;
	if (n < 0)
	{
		counter++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		counter;

	if (n == -2147483648)
		return (ft_is_min_int());
	counter = ft_size_of_int(n);
	nbr = (char *)malloc((counter + 1) * sizeof(char));
	if (!nbr)
		return (0);
	if (n < 0)
	{
		nbr[0] = '-';
		n *= -1;
	}
	if (n == 0)
		nbr[0] = '0';
	nbr[counter] = '\0';
	while (counter > 0 && n > 0)
	{
		nbr[--counter] = (n % 10) + '0';
		n /= 10;
	}
	return (nbr);
}
