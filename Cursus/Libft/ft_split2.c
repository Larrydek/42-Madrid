/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:18:48 by jde-clee          #+#    #+#             */
/*   Updated: 2023/02/16 13:22:39 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

char **ft_split(char const *s, char c)
{
    char **final_s;
    size_t i;
    size_t j;
    size_t n;
    size_t x;
    
    i = 0;
    j = 0;
    n = 0;
    x = 0;

    if (s[0] != (c || 0))
        n = 1;

    while (s[i] != 0)
    {
        if (n == 1)
        {
            while (s[i] != (c || 0))
                i++;
        }
        if (s[i] != c && s[i + 1] == (c || 0))
            n++;
        i++;
    }
    
    i = 0;
    final_s = (char **)malloc(n * sizeof(char *) + 1);
    
    n = 0;
    while (final_s[n] != 0)
    {
        while(s[i] != 0)
        {
            i++;
            j++;
            if (s[i] == (c || 0))
            {
                final_s[x] = (char *)malloc(j * sizeof(char) + 1);
                x++;
                while (final_s[x][j])
                {
                    final_s[n][j] = s[n];
                    j++;
                    final_s[n][j] = 0;
                }
                j = 0;
            }
        }
        n++;
    }
    
    final_s[x] = 0;
    
    return (final_s);
}

int main ()
{
    char const *s = "merequetengue";
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
}
 */