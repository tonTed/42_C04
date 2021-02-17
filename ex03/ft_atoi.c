/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:10:17 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/17 08:49:11 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Ecrire une fonction qui convertit le début de la chaîne pointée par str en
** entier de type int
** str peut commencer par un nombre arbitraire de ‘white space‘ (comme defini
** par isspace(3))
** str peut ensuite être suivi par un nombre arbitraire de signe + et de
** signe -. Le signe - fera changer le signe de l’entier retourné en fonction
** du nombre de signe - et si celui ci est pair ou impair.
** Pour finir str devra être composée de chiffre de la base 10
** Votre fonction devra lire str tant que celle ci suit les règles au dessus et
** elle doit retourner le nombre trouvé jusque là.
** Vous ne devriez pas prendre en compte les overflows et les underflows, le 
** résultat est considérer comme indéfini dans ces cas.
** Vous pouvez comparer votre fonction avec la vrai fonction atoi à part la 
** partie sur les signes ainsi que l’overflow.
**
** Voici l’exemple d’un programme qui affiche la valeur de retour de atoi :
** 		$>./a.out " ---+--+1234ab567"
**		-1234
*/

/*
** > white space = '', '\n, '\t', '\v', '\f', '\r'
**
*/

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
	while (str[i] && ((str[i] >= '\t' && str[i] <= '\r')|| str[i] == ' '))
		i++; 
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			neg_pos = -1;
		i++;
	}
	i--;
	while (str[++i] && (str[i] >= '0' && str[i] <= '9'))
		len_nb++;
	
	return (convert_to_number(&str[i]) * neg_pos);
}


#include <stdio.h>

int	main()
{
	printf("%d\n",ft_atoi(" ---+--+1234ab567"));
	printf("%d\n",ft_atoi(" \n\t\f\v\r---+--+1234ab567"));
	printf("%d\n",ft_atoi(" -- -+--+1234ab567"));
	printf("%d\n",ft_atoi(" ---+--+ 1234ab567"));
	printf("%d\n",ft_atoi(" ---+--+9234ab567"));
	printf("%d\n",ft_atoi(" ---+--+0234ab567"));
	printf("%d\n",ft_atoi(" ---+--+1239ab567"));
	printf("%d\n",ft_atoi(" ---+--+1230ab567"));
	printf("%d\n",ft_atoi(" ---+--+0000001230ab567"));
	printf("%d\n",ft_atoi(" ---+--+123000000ab567"));
	printf("%d\n",ft_atoi(" ---D+--+1234ab567"));
	return 0;
}