/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 00:05:34 by amaltea           #+#    #+#             */
/*   Updated: 2025/09/04 00:33:32 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divisor;
	int	is_not_prime;

	divisor = 2;
	is_not_prime = 0;
	if (nb < 2)
		return (0);
	if (nb == divisor)
		return (1);
	while (divisor <= nb / 2)
	{
		if (nb % divisor == 0)
			is_not_prime++;
		divisor++;
	}
	if (is_not_prime == 0)
		return (1);
	else
		return (0);
}
