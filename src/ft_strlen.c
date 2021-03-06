/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasur <tmasur@mail.de>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:43:50 by tmasur            #+#    #+#             */
/*   Updated: 2022/01/18 23:36:32 by tmasur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*ptr_s;

	ptr_s = s;
	while (*ptr_s)
		ptr_s++;
	return (ptr_s - s);
}
