/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:22:33 by luide-ca          #+#    #+#             */
/*   Updated: 2024/10/15 17:22:35 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;
	size_t	copy_len;
	char	*ptr_dst;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	total_len = dst_len + src_len;
	if (size <= dst_len)
		return (src_len + size);
	copy_len = size - dst_len - 1;
	ptr_dst = dst + dst_len;
	while (*src && copy_len > 0)
	{
		*ptr_dst++ = *src++;
		copy_len--;
	}
	*ptr_dst = '\0';
	return (total_len);
}
