/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parissachatagny <parissachatagny@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:29:55 by parissachat       #+#    #+#             */
/*   Updated: 2024/10/07 18:38:41 by parissachat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_words_counts(char const *s, char c)
{
    int i;
    size_t len;

    i = 0;
    len = 0;
    if (!s)
        return (0);
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
            len++;
        while (s[i] != c && s[i])
            i++;
    }
    return (len);  
}

void *ft_free(char **new, int count)
{
    int i;

    i = 0;
    while (i < count)
    { 
        free(new[i]);
        i++;
    }
    return (NULL);
   
}

char *ft_fill_word(char *new, int start, int end)
{
    int i;
    char *word;

    word = (char *)malloc((end-start + 1) * sizeof(char));
    if (!word)
        return (NULL);
    i = 0;
    while (start < end)
    {
        word[i] = new[start];
        i++;
        start++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char **new;
    int i;
    int j;
    size_t start_word;
    
    new = (char **)malloc((ft_words_counts(s, c) + 1) * sizeof(char *));
    if (!new)
        return (0);
    i = 0;
    j = 0;
    start_word = -1;
    while (s[i])
    {
        if (s[i] != c && start_word < 0)
            start_word = i;
        else if ((s[i] == c || s[i] == '\0') && start_word >=0 )
        {
            new[j] = ft_fill_word(s, start_word, i);
            if (!new[j])
                return (ft_free(new, j));
            start_word = -1;
            j++;
                
        }
        i++;
    }
    return (new);
}