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

/* #include "libft.h"

size_t ft_n_strings(char const *s, char c)
{
    size_t n;
    size_t i;

    char *trim_s;
    char cast_c[2];
    cast_c[0] = c;
    cast_c[1] = 0;
    
    i = 0;
    n = 0;
    
    trim_s = ft_strtrim(s, cast_c);

    while (trim_s[i] != 0)
    {
        if (trim_s[i] != c && (trim_s[i + 1] == c || trim_s[i + 1] == 0))
            n++;
        i++;
    }

    return (n);
}

char    ft_str_bytes(char const *s, char c)
{
    size_t n;
    size_t i;
    size_t j;

    char *trim_s;
    char cast_c[2];
    cast_c[0] = c;
    cast_c[1] = 0;
    
    i = 0;
    n = 0;
    
    trim_s = ft_strtrim(s, cast_c);
    
    while (n < ft_n_strings(s, c))
    {
        while (trim_s[i] != 0)
        {
            i++;
            j++;
        }
            if (trim_s[i] == 0)
                {
                    
                }
        
    }
    
}

char **ft_split(char const *s, char c)
{
    char **final_s;
    char c_str[2];
    char *trim_s;
    
    size_t i;
    size_t n_strings;

    i = 0;
    n_strings = ft_n_strings(s, c);
    c_str[0] = c;
    c_str[1] = 0;
    trim_s = ft_strtrim(s, c_str);
    
    while (i < n_strings)
    {
        final_s = (char **)malloc(sizeof(char *));
        i++;
    }

    i = 0;

    return (final_s)  
}

int main ()
{
    char const *s = "mmmmmmmeeeeeerequetengueeeeee";
    char c = 'e';
    char **result = ft_split(s, c);
    int i;
    i = 0;

    while(result[i] != 0)
    {
        printf("%s", result[i]);
        i++;
    }
    return 0;

    printf("%zu", n_strings(s, c));
    return (0);
}
 */
