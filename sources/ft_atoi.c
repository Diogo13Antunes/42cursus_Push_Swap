/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:33:13 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/03 13:34:18 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long int	ft_atoi(const char *str)
{
	int			sinal;
	long int	numero;
	int			i;

	i = 0;
	sinal = 1;
	numero = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	while (str[i] >= 48 && str[i] <= 57)
		numero = (numero * 10) + (str[i++] - 48);
	return (numero * sinal);
}
