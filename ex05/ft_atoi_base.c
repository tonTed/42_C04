/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:19:55 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/17 11:50:10 by tblanco          ###   ########.fr       */
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

#include <stdio.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while(*str++)
		len++;
	return (len);
}

int		str_to_int(char *str)
{
	int pow;
	int nb;

	pow = 1;
	nb = 0;
	while(*--str >= '0' && *str <= '9')
	{	
		nb += (*str - '0') * pow;
		pow *= 10;
	}
	return (nb);
}

int		ft_atoi(char *s)
{
	int i;
	int neg_pos;

	i = -1;
	neg_pos = 1;
	while (s[++i] && (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r')))
		continue;
	while (s[++i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			neg_pos *= -1;
	}
	while (s[++i] >= '0' && s[i] <= '9')
		continue;
	return (str_to_int(&s[i]));
	
}

int 	sames_char(char *base)
{
	int i;
	int j;

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
	int i;
	int j;

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

int		base_to_str(char *str, char *base)
{

}

int ft_atoi_base(char *str, char *base)
{
	if (ft_strlen(base) <= 1 || ft_strlen(str) <= 0)
		return (0);
	else if (sames_char(base))
		return (0);
	else if (prohibited_char(base))
		return (0);
	else
		base_to_str(str, base);
}

int main()
{
	printf("%d\n", ft_atoi_base("testsadaf", "es+t"));
}