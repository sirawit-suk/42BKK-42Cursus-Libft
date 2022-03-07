/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 03:10:50 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/03/05 03:50:44 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	multiply_ten(int num, int digit)
{
	int	i;
	int	tenth;

	i = 0;
	tenth = 1;
	while (i < digit)
	{
		tenth *= 10;
		i++;
	}
	return (num * tenth);
}

int	ft_atoi(char *str)
{
	int	negative;
	int	result;
	int	num[401];

	negative = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	num[399] = 0;
	while (*str >= '0' && *str <= '9')
	{
		num[num[399]++] = *str - '0';
		str++;
	}
	num[400] = 0;
	num[399] -= 1;
	while (num[399] >= 0)
		result += multiply_ten(num[num[399]--], num[400]++);
	return (result * negative);
}
