/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:19:55 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 07:44:39 by tblanco          ###   ########.fr       */
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

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int		sames_char(char *base)
{
	int 	i;
	int 	j;

	i = -1;
	while (base[++i] != '\0')
	{
		j = i;
		while (base[++j] != '\0')
			if (base[i] == base[j])
				return (1);
	}
	return (0);
}

int		prohibited_char(char *base)
{
	char	*prohibited_char;
	int		i;
	int		j;

	prohibited_char = "\n\t\v\f\r +-";
	i = -1;
	while (base[++i] != '\0')
	{
		j = -1;
		while (base[++j] != '\0')
			if (base[i] == base[j])
				return (1);
	}
	return (0);
}

int		is_in_base(char c, char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (1);
	return (0);
}

int		ft_power(int nb, int power)
{
	int ret;

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

int 	ft_atoi_base(char *str, char *base)
{
	int i;
	int neg;
	int len_base;
	int ret;
	int pow;

	i = 0;
	len_base = ft_strlen(base);
	neg = 1;
	ret = 0;
	pow = 0;
	if (len_base <= 1 || ft_strlen(str) <= 0)
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	i--;
	while ((str[++i] == '-') || (str[i] == '+'))
		if (str[i] == '-')
			neg *= -1;
	while (is_in_base(str[i], base))
		i++;
	i--;
	while (is_in_base(str[i], base))
		ret += ft_power(len_base, pow++) * (is_in_base(str[i--],base));
	return ret * neg;
}
int main()
{
	ft_atoi_base();
	return 0;
}
