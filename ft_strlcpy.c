/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:22:44 by luide-ca          #+#    #+#             */
/*   Updated: 2024/10/15 17:22:47 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*ptr_src;
	char		*ptr_dst;
	size_t		i_total_len;

	ptr_src = src;
	ptr_dst = dst;
	i_total_len = 0;
	while (*ptr_src)
	{
		ptr_src++;
		i_total_len++;
	}
	if (size == 0)
		return (i_total_len);
	while ((size - 1 > 0) && *src)
	{
		*ptr_dst = *src;
		ptr_dst++;
		src++;
		size--;
	}
	*ptr_dst = '\0';
	return (i_total_len);
}
