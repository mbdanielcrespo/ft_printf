/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:45:31 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/28 19:35:39 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fdp(char *s, t_i32 fd)
{
	int	c;

	if (!s || fd < 0)
		return (0);
	write(fd, s, ft_strlen(s));
	c = ft_strlen(s);
	return (c);
}
