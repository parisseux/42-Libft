/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:15:57 by pchatagn          #+#    #+#             */
/*   Updated: 2024/10/03 14:17:02 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = 0;
	dst_len = 0;
	while (src[src_len])
		src_len++;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	while (i < (dstsize - dstlen - 1) && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dstsize > 0 && (dst_len + 1) < dstsize)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
