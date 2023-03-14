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

static long	ft_count_spaces(int n)
{
	long	count;
	long	num;

	num = n;
	count = 1;
	if (num < 0)
	{
		count++;
		num = -num;
	}
	while (num)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	i;
	long	num;

	num = n;
	if (num == 0)
		return (ft_strdup("0"));
	i = ft_count_spaces(num);
	result = (char *)malloc(sizeof(char) * i);
	if (!result)
		return (NULL);
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	i--;
	result[i] = 0;
	while (i-- && result[i] != '-')
	{
		result[i] = (num % 10) + 48;
		num = num / 10;
	}
	return (result);
}

/* int main()
{   
	int n;
	char *result;
	//char *min_int = ft_case_min_int();
	n = 42;
	result = ft_itoa(n);

	printf("RESULT: %s\n", result);
	//printf("FT_CASE_MIN_INT: %s\n", min_int);
	printf("%ld", ft_count_spaces(n));

	return (0);
}
 */