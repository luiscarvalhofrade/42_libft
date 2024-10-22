/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:44:13 by luide-ca          #+#    #+#             */
/*   Updated: 2024/10/22 15:44:15 by luide-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_counder(char const *s, char c)
{
	int	counter_char_div;
	int	word_counter;
	char	*ptr_s;

	counter_char_div = 0;
	ptr_s = (char *)s;
	while (*ptr_s)
	{
		if (*s == c)
			counter_char_div++;
		ptr_s++;
	}
	if (counter_char_div == 0)
		word_counter = 1;
	else
	{
		if (ft_strlen(s) == (ft_strrchr(s, c) + 1))
			word_counter = counter_char_div;
		else
			word_counter = counter_char_div + 1;
	}
	return (word_counter);
}

static char	*ft_bool_matrix(char const *s, char c)
{
	char	*ptr_bool;
	char	*ptr_s;

	ptr_s = (char *)s;
	ptr_bool = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	while (*ptr_s)
	{
		if (*ptr_s == c)
			*ptr_bool = '1';
		else
			*ptr_bool = '0';
		ptr_bool++;
		ptr_s++;
	}
	return (ptr_bool);
}

char	**ft_split(char const *s, char c)
{
	int		string_counter;
	int		i_arr;
	char	**ptr_arr;
	char	*ptr_bool;

	string_counter = ft_word_counder(s, c);
	ptr_arr = (char **)malloc(string_counter * sizeof(char *));
	ptr_bool = ft_bool_matrix(s, c);

	while (i_arr < string_counter)
	{
		ft_substr(char const *s, unsigned int start, size_t len)
		ptr_arr[i_arr] = (char *)malloc(string_size * sizeof(char));
	}
}
