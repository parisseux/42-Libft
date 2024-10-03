/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:20:42 by pchatagn          #+#    #+#             */
/*   Updated: 2024/10/03 14:22:44 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst1;
	const unsigned char	*src1;

	src1 = (const unsigned char *)src;
	dst1 = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// int main (void)
// {
//     char b[50] = "salut mA VIE";
// 	char c[] = "coucou";
//     ft_memcpy(b, c, 6);
//     printf("%s", b);
// }