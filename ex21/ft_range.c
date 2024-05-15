/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:34:09 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/15 20:08:09 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	rang;
	int	*tab;

	i = 0;
	rang = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * rang);
	if (tab == NULL)
		return (0);
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
