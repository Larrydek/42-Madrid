/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:26:21 by jde-clee          #+#    #+#             */
/*   Updated: 2023/02/07 17:56:24 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t len_dst;
    size_t i;
    size_t len_original_dst;

    i = 0;
    len_dst = ft_strlen(dst);
    len_original_dst = ft_strlen(dst);
        
    while ((len_dst + i + 1) < dstsize && (i < ft_strlen(src)))
    {
        dst[len_dst + i] = src[i];
        i++;
    }

    dst[len_dst + i] = 0;

    if (dstsize < len_dst)
        return(ft_strlen(src) + dstsize);
    
    return (len_dst + ft_strlen(src));
}

/* int main()
{
    char dst[50] = "";
    char src[] = "gasdg";

    printf("strlcpy: %zu", strlcat("pqrstuvwxyz", "abcd", 15));
    printf("\n");
    printf("dst: %s", dst);
    printf("\n");
    printf("src: %s", src);
    printf("\n");
    printf("\n");

    char ft_dst[] = "ROSARIO";
    char ft_src[] = " DE SANTA FE";

    printf("ft_strlcpy: %zu", ft_strlcat(ft_dst, ft_src , ft_strlen(ft_dst) + ft_strlen(ft_src) + 1));
    printf("\n");
    printf("ft_dst: %s", ft_dst);
    printf("\n");
    printf("ft_src: %s", ft_src);
    
} */