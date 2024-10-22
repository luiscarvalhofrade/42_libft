/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:53:07 by luide-ca          #+#    #+#             */
/*   Updated: 2024/10/14 15:53:08 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t		counter_len;
	const char	*ptr_s;

	counter_len = 0;
	ptr_s = s;
	while (*ptr_s++)
	{
		counter_len++;
	}
	return (counter_len);
}
