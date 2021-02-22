/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:10:17 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/19 11:31:43 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	convert_to_number(char *str_nb)
{
	int pow;
	int nb;

	pow = 1;
	nb = 0;
	while (*--str_nb >= '0' && *str_nb <= '9')
	{
		nb += ((*str_nb - '0') * pow);
		pow *= 10;
	}
	return (nb);
}

int	ft_atoi(char *str)
{
	int i;
	int neg_pos;
	int len_nb;

	i = 0;
	neg_pos = 1;
	len_nb = 0;
	while (str[i] && ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			neg_pos *= -1;
		i++;
	}
	i--;
	while (str[++i] && (str[i] >= '0' && str[i] <= '9'))
		len_nb++;
	return (convert_to_number(&str[i]) * neg_pos);
}
