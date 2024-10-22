/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 22:20:29 by luide-ca          #+#    #+#             */
/*   Updated: 2024/10/17 22:20:30 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr_s;
	char			*str_map_i;
	unsigned int	index_s;

	index_s = 0;
	ptr_s = (char *)s;
	str_map_i = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str_map_i)
		return (0);
	while (s[index_s] != '\0')
	{
		str_map_i[index_s] = f(index_s, ptr_s[index_s]);
		index_s++;
	}
	str_map_i[index_s] = '\0';
	return (str_map_i);
}
