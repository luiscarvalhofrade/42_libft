/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:56:39 by luide-ca          #+#    #+#             */
/*   Updated: 2024/10/17 19:56:40 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len_dup;

	len_dup = ft_strlen(s) + 1;
	dup = (char *)malloc(len_dup * sizeof(char));
	if (!dup)
		return (0);
	ft_memcpy(dup, s, len_dup);
	return (dup);
}
