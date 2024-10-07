/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parissachatagny <parissachatagny@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:47:41 by parissachat       #+#    #+#             */
/*   Updated: 2024/10/07 19:20:28 by parissachat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
int ft_count(int n)
{
    int sign;
    int count;

    count = 1;
    sign = 0;
    if (n < 0)
    {
        sign = 1;
        n *= -1;
    }
    if (n == 0)
        count++;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return (count + sign);
}

char *ft_itoa(int n)
{
    char *number;
    int i;
    int len_number;
    unsigned int num;

    len_number = ft_count(n);
    number = (char *)malloc((len_number + 1) * sizeof(char));
    if (!number)
        return (NULL);
    if (n < 0)
    {
        number[0] = '-';
        num = -n;
    }
    else
        num = n;
     i = len_number - 1;
     if (num == 0)
        number[i] = '0';
    else 
    {
        while (num > 0)
            {
                number[i] = (num % 10) + '0';
                num = num / 10;
                i--;
            }
    }
    number[len_number] = '\0';
    return (number);
}

#include <stdio.h>
int main (void)
{
    int i = -2;
    char *str = ft_itoa(i);
    printf("%s", str);
    free(str);
    return (0);
}