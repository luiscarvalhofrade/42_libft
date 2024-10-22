/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:11:08 by luide-ca          #+#    #+#             */
/*   Updated: 2024/10/18 17:11:09 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pos_stop_trim_f(char *s1, char *set)
{
	int	i_pos_s1;

	i_pos_s1 = 0;
	while (s1[i_pos_s1] != '\0')
	{
		if (!ft_strchr(set, s1[i_pos_s1]))
			break ;
		i_pos_s1++;
	}
	return (i_pos_s1);
}

static int	ft_pos_stop_trim_b(char *s1, char *set)
{
	int	i_pos_s1;

	i_pos_s1 = ft_strlen(s1) - 1;
	while (i_pos_s1 >= 0)
	{
		if (!ft_strchr(set, s1[i_pos_s1]))
			break ;
		i_pos_s1--;
	}
	return (i_pos_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_pos_f;
	int		i_pos_b;
	size_t	len_sub_str;

	if (s1 == 0 || set == 0)
		return (0);
	i_pos_f = ft_pos_stop_trim_f((char *)s1, (char *)set);
	i_pos_b = ft_pos_stop_trim_b((char *)s1, (char *)set);
	if (i_pos_f > i_pos_b)
		return (ft_strdup(""));
	len_sub_str = i_pos_b - i_pos_f + 1;
	return (ft_substr(s1, i_pos_f, len_sub_str));
}
