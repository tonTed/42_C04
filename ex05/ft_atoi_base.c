/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:19:55 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 11:37:16 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ecrire une fonction qui convertit le début de la chaîne pointée par str en
** entier de type int.
** str est dans une base specifique passée en second argument de la fonction.
** A part le système de base, cette fonction doit reproduire le comportement de
** ft_atoi.
** Si un paramètre contient une erreur la fonction renvoie 0. Une erreur peut
** être :
**		la base est vide ou est de taille 1 ;
** 		la base contient deux fois le même caractère ;
** 		la base contient les caractères + ou - ou des whitespaces ;
*/

long	ft_strlen(char *str)
{
	long len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int		bad_base(char *base)
{
	int		i;
	int		j;

	i = -1;
	while (base[++i] != '\0')
	{
		if (base[i] <= ' ' || base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (base[++j] != '\0')
			if (base[i] == base[j])
				return (0);
	}
	return (1);
}

long	in_base(char c, char *base, int to_do)
{
	long i;

	if (to_do == 1)
	{
		i = -1;
		while (base[++i])
			if (c == base[i])
				return (1);
		return (0);
	}
	else
	{
		i = -1;
		while (base[++i])
			if (c == base[i])
				return (i);
		return (0);
	}
}

long	ft_power(long nb, long power)
{
	long ret;

	ret = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_power(nb, power - 1));
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		neg;
	long	ret;
	long	pow;

	i = 0;
	neg = 1;
	ret = 0;
	pow = 0;
	if (ft_strlen(base) <= 1 || ft_strlen(str) <= 0 || !bad_base(base))
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	i--;
	while ((str[++i] == '-') || (str[i] == '+'))
		if (str[i] == '-')
			neg *= -1;
	while (in_base(str[i], base, 1))
		i++;
	i--;
	while (in_base(str[i], base, 1))
		ret += ft_power(ft_strlen(base), pow++) * (in_base(str[i--], base, 2));
	if (ret * neg > 2147483647 || ret * neg < -2147483648)
		return (0);
	return (ret * neg);
}
