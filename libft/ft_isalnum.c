/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 22:07:36 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/06 22:23:06 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);
int	ft_isdigit(int arg);

int	isalnum(int argument)
{
	if (ft_isalpha(argument) || ft_isdigit(argument))
		return (1);
	return (0);
}
