/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:13:20 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 20:46:04 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int a;
	int i;

	a = 0;
	i = 0;
	while (dst[i] != '\0')
		i++;
	while (src[a] != '\0')
	{
		dst[i] = src[a];
		a++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
