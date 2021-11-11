/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:36:05 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/11 15:20:56 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1 : skeep any space(s) before first digit
// 2 : stop at first character which isn't a digit after encountering first digit
// 3 : read up to one '-' or '+', otherwise return 0
// 4 : if no digit, return 0

int	ft_putnumber(const char *source, int i)
{
	int	j;
	int	number;

	j = 0;
	number = 0;
	while (source[i] >= '0' && source[i] <= '9')
	{
		number = number * 10 + source[i] - '0';
		i++;
	}
	return (number);
}

int	ft_clean(const char *source)
{
	int	i;

	i = 0;
	while ((source[i] >= 9 && source[i] <= 12) || source[i] == 32)
	{
		i++;
	}
	return (i);
}

int ft_atoi(const char *number)
{
	int	sign;
	int	i;
	int final_number;

	sign = 1;
	i = ft_clean(number);
	if (number[i] == '+')
		i++;
	if (number[i] == '-')
	{
		i++;
		sign *= -1;
	}
	final_number = ft_putnumber(number, i);
	return (final_number * sign);
}
/*
int main()
{
	printf("%d", ft_atoi("  "));
	printf("\n%d", atoi("  "));
}*/