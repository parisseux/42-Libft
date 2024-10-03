/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:49:52 by pchatagn          #+#    #+#             */
/*   Updated: 2024/10/03 14:21:19 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst1;
	const unsigned char	*src1;

	src1 = (const unsigned char *)src;
	dst1 = (unsigned char *)dst;
	i = 0;
	if (src1 < dst1)
	{
		while (i < n)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			dst1[i] = src1[i];
			i--;
		}
	}
	return (dst);
}

// #include <stdio.h>
// int main (void)
// {
//     char b[50] = "salut mA VIE";
// 	char c[] = "coucou";
//     ft_memmove(b,c,6);
//     printf("%s", b);
// }