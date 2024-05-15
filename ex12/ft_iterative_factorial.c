/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:11:32 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/15 20:03:44 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factor;

	factor = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 1)
	{
		factor = factor * nb;
		nb--;
	}
	return (factor);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_factorial(-15));
}
*/
