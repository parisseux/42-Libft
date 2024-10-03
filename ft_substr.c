/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:06:08 by pchatagn          #+#    #+#             */
/*   Updated: 2024/10/03 16:46:48 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	len_s;
	size_t	i;

	if (!s)
		return (NULL);
	len_s = 0;
	while (s[len_s])
		len_s++;
	if ((len_s - start) < len)
		len = len_s - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
//     char *s = "Anais aime les chats!";
//     char *str = ft_substr(s, 2, 6);

//     if (str)
//     {
//         printf("%s", str);
//         free(str);
//     }
//     return 0;
// }