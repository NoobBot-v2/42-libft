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
	int	ft_isdigit(int c);
	int	ft_isalnum(int c);
	int	ft_tolower(int c);
	int	ft_toupper(int c);
	int	ft_isascii(int c);
	int	ft_isprint(int c);
	int	ft_strncmp(const char *s1, const char *s2, size_t n);
	size_t	ft_strlen(const char *s);
	size_t	ft_strlcpy(char *dst, const char *src, size_t size);
	size_t	ft_strlcat(char *dst, const char *src, size_t size);
	char	*ft_strchr(const char *s, int c);
	char	*ft_strrchr(const char *s, int c);
	void	*ft_memset(void *s, int c, size_t n);
	void	ft_bzero(void *s, size_t n);
	void	*ft_memcpy(void *dest, const void *src, size_t n);
#endif