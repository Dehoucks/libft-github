/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:35:50 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/07 20:26:51 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memcpy will copy n bits from source into dest. Overlaps will cause issues.
void	ft_memcpy (void *dest, void *source, unsigned int bit_size)
{
	char			*chardest;
	char			*charsource;
	unsigned int	i;

	chardest= (char *) dest;
	charsource = (char *) source;
	i = 0;
	
	while (i < bit_size)
	{
		chardest[i] = charsource[i];
		i++;
	}
}
/*
int main()
{
   char csrc[100] = "Geeksfor";
   ft_memcpy(csrc+5, csrc, strlen(csrc)+1);
   printf("%s", csrc);
   return 0;
}


int main()
{
	int isource[] = {10, 20, 30, 40, 50};

	int n = sizeof(isource) / sizeof(isource[0]);
	//sizeof(isource = 4+4+4+4+4 = 20, and isource[0] = 4,
	//so this expression result in the number of elements.

	int idest[n];
	ft_memcpy(idest, isource, sizeof(isource));
	
	int i = 0;
	while (i < n)
	{
		printf("%d\n", idest[i]);
		i++;
	}
}
*/
