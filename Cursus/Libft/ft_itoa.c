/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:53:12 by jde-clee          #+#    #+#             */
/*   Updated: 2023/02/07 04:54:32 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static char *ft_case_min_int(void)
{
    char *min_char;
    min_char = (char *)malloc(12 * sizeof(char));
    if (min_char == NULL)
        return NULL;

    min_char[0] = '-';
    min_char[1] = '2';
    min_char[2] = '1';
    min_char[3] = '4';
    min_char[4] = '7';
    min_char[5] = '4';
    min_char[6] = '8';
    min_char[7] = '3';
    min_char[8] = '6';
    min_char[9] = '4';
    min_char[10] = '8';
    min_char[11] = '\0';

    return min_char;
}

static char *ft_case_zero(void)
{
    char *zero;
    zero = (char *)malloc(sizeof(char) * 2);

    if (zero == NULL)
        return NULL;

    zero[0] = 48;
    zero[1] = 0;
    return zero;
}

char *ft_itoa(int n)
{
    char *result;
    int i;
    int num;
    
    i = 1;
    num = n;

    if (n == 0)
        return (ft_case_zero());
    if (n == -2147483648)
        return (ft_case_min_int());

    while(num)
    {
        num = num / 10;
        i++;
    }
    
    if (n < 0)
    {
        i++;
        result = (char *)malloc(i * sizeof(char));
        if (result == NULL)
            return NULL;
        result[0] = '-';
        n = -n;
    }
    else
        result = (char *)malloc(i * sizeof(char));
        
    if (result == NULL)
        return NULL;
    i--;
    result[i] = 0;
    
    while(i--)
    {
        if (result[i] != '-')
        {
            result[i] = (n % 10) + 48;
            n = n / 10;
        }
    }

    return result;
}
/*
int main()
{   
    int n;
    char *result;
    char *min_int = ft_case_min_int();
    n = -2147483648;
    result = ft_itoa(n);
    printf("RESULT: %s\n", result);
    
    printf("FT_CASE_MIN_INT: %s\n", min_int);

    return (0);
}
*/
