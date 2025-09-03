/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 23:41:16 by amaltea           #+#    #+#             */
/*   Updated: 2025/09/03 23:41:39 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 1;
	if (power < 0)
	{
		return (0);
	}
	j = 0;
	while (j < power)
	{
		j++;
		i *= nb;
	}
	return (i);
}
