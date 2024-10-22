/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:27:44 by luide-ca          #+#    #+#             */
/*   Updated: 2024/10/15 18:27:45 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	if (little_len > len)
		return (0);
	i = 0;
	while (big[i] && i + little_len <= len)
	{
		if (ft_memcmp(&big[i], little, little_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
