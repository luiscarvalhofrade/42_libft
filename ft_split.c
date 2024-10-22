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

static int	ft_word_counter(char const *s, char c)
{
	int		counter_char_div;
	int		word_counter;
	char	*ptr_s;

	counter_char_div = 0;
	ptr_s = (char *)s;
	while (*ptr_s)
	{
		if (*ptr_s == c && (ptr_s == s || *(ptr_s - 1) != c))
			counter_char_div++;
		ptr_s++;
	}
	if (ft_strlen(s) > 0 && *(ptr_s - 1) == c)
		counter_char_div--;
	word_counter = counter_char_div + 1;
	return (word_counter);
}

static int	ft_start_pos(char *s, int c)
{
	size_t	i_start_pos;

	i_start_pos = 0;
	while (s[i_start_pos] && s[i_start_pos] == c)
		i_start_pos++;
	return (i_start_pos);
}

static int	ft_len_str(char *s, int c)
{
	size_t	i_total_len;

	i_total_len = 0;
	while (s[i_total_len] && s[i_total_len] != c)
		i_total_len++;
	return (i_total_len);
}

char	**ft_split(char const *s, char c)
{
	int		strings_counter;
	int		i_arr;
	int		next_start_pos;
	int		next_len;
	char	*ptr_s;
	char	**ptr_arr;

	if (!s)
		return (0);
	strings_counter = ft_word_counter(s, c);
	if (strings_counter == 0)
		return (0);
	ptr_arr = (char **)malloc((strings_counter + 1) * sizeof(char *));
	if (!ptr_arr)
		return (0);
	i_arr = 0;
	ptr_s = (char *)s;
	while (i_arr < strings_counter)
	{
		next_start_pos = ft_start_pos(ptr_s, c);
		next_len = ft_len_str(ptr_s + next_start_pos, c);
		ptr_arr[i_arr] = (char *)malloc((next_len + 1) * sizeof(char));
		if (!ptr_arr[i_arr])
		{
			while (i_arr > 0)
				free(ptr_arr[--i_arr]);
			free(ptr_arr);
			return (0);
		}
		ft_strlcpy(ptr_arr[i_arr], ptr_s + next_start_pos, next_len + 1);
		i_arr++;
		ptr_s += next_start_pos + next_len;
	}
	ptr_arr[i_arr] = NULL;
	return (ptr_arr);
}
