/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:38:17 by luide-ca          #+#    #+#             */
/*   Updated: 2024/10/17 14:38:19 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	const char	*ptr_s1;
	const char	*ptr_s2;
	char		*s3;
	char		*ptr_s3;

	ptr_s1 = s1;
	ptr_s2 = s2;
	s3 = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s3)
		return (0);
	ptr_s3 = s3;
	while (*ptr_s1)
		*ptr_s3++ = *ptr_s1++;
	while (*ptr_s2)
		*ptr_s3++ = *ptr_s2++;
	*ptr_s3 = '\0';
	return (s3);
}
