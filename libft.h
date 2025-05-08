/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:30:13 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/08 20:58:05 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
	int	ft_isalpha(int c);
	int	ft_isdigit(int arg);
	int	ft_isalnum(int argument);
	int	ft_tolower(int argument);
	int	ft_toupper(int ch);
	int	ft_isascii(int c);
	int	ft_isprint(int c);
	int	strlen(const char *s);
	int	strncmp(const char *s1, const char *s2, int n);
	int	strlcpy(char *dst, char *src, int dst_size);
	int	strlcat(char *dst, char *src, int size);
	char	*strchr(const char *s, int c);
	char	*strrchr(const char *s, int c);
#endif