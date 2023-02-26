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

static size_t ft_n_strings(char const *s, char c)
{
    size_t n;
    size_t i;

    char *trim_s;
    char c_str[2];
    c_str[0] = c;
    c_str[1] = 0;
    
    i = 0;
    n = 0;
    
    trim_s = ft_strtrim(s, c_str);

    while (trim_s[i] != 0)
    {
        if (trim_s[i] != c && (trim_s[i + 1] == c || trim_s[i + 1] == 0))
            n++;
        i++;
    }

    free(trim_s);
    return (n);
}

/*
-CASTEO EL CHAR A STRING
-RESERVO MEMORIA PARA N_STRINGS BYTES
-TRIM PARA SACAR LOS CARACTERES INICIALES Y FINALES
-RESERVO MEMORIA PARA N_STRINGS DE LONGITUD X + 1
-RELLENO LAS STRINGS
*/

char **ft_split(char const *s, char c)
{
    char **final_s;
    char c_str[2];
    char *trim_s;
    
    size_t i;
    size_t j;
    size_t x;
    size_t n_strings;

    i = 0;
    j = 0;
    x = 0;
    n_strings = ft_n_strings(s, c);

    c_str[0] = c;
    c_str[1] = 0;

    trim_s = ft_strtrim(s, c_str);

    if (!s || s == 0)
        return NULL;
    
    final_s = (char **)malloc((n_strings + 1) * sizeof(char *));
    final_s[n_strings] = NULL;

    while (i < n_strings)
    {
        x = 0;
        while (trim_s[j] != c && trim_s[j] != 0)
        {
            j++;
            x++;
        }
        if (trim_s[j] == c || trim_s[j] == 0)
        {
            final_s[i] = (char *)malloc((x + 1) * sizeof(char));
            final_s[i][x] = '\0';
            j++;
        }
        i++;
    }
    
    i = 0;
    j = 0;
    x = 0;

    while(i < n_strings)
    {
        while(trim_s[j] != c && trim_s[j] != 0)
        {
            printf("\ni:%ld COPIANDO STRING", i);
            printf("\nx:%ld COPIANDO STRING", x);
            final_s[i][x] = trim_s[j];
            j++;
            x++;
        }
        while (trim_s[j] == c)
            j++;
        i++;
        x = 0;
    }
    
    free(trim_s);
    return (final_s);
}

/*
IMPRIMO CADA STRING EN LOOP
RESULT[I] = CADA PALABRA SEPARADA
*/


int main ()
{
    char const *s = "ARGENTINA";
    char c = 'E';
    char **result = ft_split(s, c);

    size_t i;
    i = 0;

    printf("CANTIDAD DE STRINGS: %zu\n", ft_n_strings(s, c));
    printf("STRING SEPARADAS:\n");
    while(result[i] != NULL)
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }

    free(result);
    return (0);
}

