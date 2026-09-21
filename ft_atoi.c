/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 14:51:27 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/21 22:00:48 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	index;
	int	sign;
	int	value;

	index = 0;
	sign = 1;
	value = 0;
	while ((nptr[index] == ' ') || (nptr[index] >= 9 && nptr[index] <= 13))
		index++;
	if (nptr[index] == '+' || nptr[index] == '-')
	{
		if (nptr[index] == '-')
			sign = -1;
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		value = (10 * value) + (nptr[index] - '0');
		index++;
	}
	return (value * sign);
}
