/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 01:36:36 by jde-clee          #+#    #+#             */
/*   Updated: 2023/02/16 13:22:29 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
CUENTA LA CANTIDAD DE BYTES A ALMACENAR EN LA DIMENSION DE MÁS AFUERA
-LA CANTIDAD DE STRINGS SEPARADAS, BÁSICAMENTE-
*/

static void ft_free(char **str, size_t j)
{
    while(j-- > 0)
        free(str[j]);
    free(str);
}

static size_t ft_n_strings(char const *s, char c)
{
    size_t i;
    size_t n_strings;

    i = 0;
    n_strings = 0;

    while(s && s[i])
    {
        if(s[i] != c)
        {
            n_strings++;
            while(s[i] != c && s[i])
                i++;
        }
        else
            i++;
    }
    return (n_strings);
}
static size_t ft_n_chars(char const *s, char c, size_t i)
{
    size_t size;

    size = 0;
    while(s[i] != c && s[i])
    {
        i++;
        size++;
    }
    return size;
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t j;
    size_t n_strings;
    size_t size;
    char **final_s;

    i = 0;
    j = 0;
    n_strings = ft_n_strings(s, c);

    final_s = malloc(sizeof(char *) * (n_strings + 1));
    if(!(final_s))
        return NULL;

    while(j < n_strings)
    {
        while(s[i] == c)
            i++;
        size = ft_n_chars(s, c, i);

        final_s[j] = ft_substr(s, i, size);
        if(!(final_s[j]))
        {
            ft_free(final_s, j);
            return NULL;
        }
        i = i + size;
        j++;
    }
    final_s[j] = 0;
    return final_s;
}
/*
int main ()
{
    char *s = "VENI VENI CANTA CONMIGO";
    char **final_s;
    char c = 'N';

    size_t i;
    i = 0;
    
    final_s = ft_split(s , c);
    while(i <= ft_n_strings(s, c))
    {
        printf("%s\n" , final_s[i]);
        i++;
    }
    return 0;
}
*/
