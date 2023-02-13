/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:38:16 by jde-clee          #+#    #+#             */
/*   Updated: 2023/02/01 21:19:06 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int ft_isalpha(int c)
{
    if (!((c > 64 && c < 91) || (c > 96 && c < 123)))
        return (0);
    return (1);
}

// int main()
// {
//     printf("%d\n", ft_isalpha(''));
//     printf("%d", isalpha(''));
//     return (0);
// }