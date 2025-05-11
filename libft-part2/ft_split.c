/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:07:47 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/11 21:23:49 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_count_sections(char const *s, char c)
{
	size_t	idx;
	size_t	sections;

	sections = 0;
	idx = 0;
	while (s[idx] != '\0')
	{
		while (s[idx] == c)
			idx++;
		if (s[idx] != '\0')
			sections++;
		while (s[idx] != c && s[idx] != '\0')
			idx++;
	}
	return (sections);
}

char	**ft_check_arr(char **arr, size_t idx_arr)
{
	if (!arr[idx_arr])
	{
		while (idx_arr > 0)
			free(arr[--idx_arr]);
		free(arr);
		return (NULL);
	}
	return (arr);
}

char	**ft_fill_arr(char **arr, char const *s, char c)
{
	size_t	idx_s;
	size_t	start;
	size_t	idx_arr;

	idx_s = 0;
	idx_arr = 0;
	while (s[idx_s] != '\0')
	{
		while (s[idx_s] == c)
			idx_s++;
		if (s[idx_s] == '\0')
			break ;
		start = idx_s;
		while (s[idx_s] != c && s[idx_s] != '\0')
			idx_s++;
		arr[idx_arr] = (char *)malloc(idx_s - start + 1);
		if (!ft_check_arr(arr,idx_arr))
			return (NULL);
		ft_strlcpy(arr[idx_arr], &s[start], idx_s - start + 1);
		idx_arr++;
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	sections;
	char	**arr;

	sections = ft_count_sections(s, c);
	arr = (char **)malloc((sections + 1) * sizeof (char *));
	if (!arr)
		return (NULL);
	if (!ft_fill_arr(arr, s, c))
		return (NULL);
	arr[sections] = NULL;
	return (arr);
}
