/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasur <tmasur@mail.de>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:34:03 by tmasur            #+#    #+#             */
/*   Updated: 2022/01/18 23:35:21 by tmasur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*r1;
	char	*r2;

	r1 = malloc(ft_strlen(s) + 1);
	if (!r1 || !s)
		return (NULL);
	r2 = r1;
	while (*s)
		*r1++ = *s++;
	*r1 = '\0';
	return (r2);
}
