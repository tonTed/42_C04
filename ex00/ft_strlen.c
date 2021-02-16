/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:03:31 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/16 15:06:23 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui compte le nombre de caractères dans une chaîne de 
** caractères et qui retourne le nombre trouvé.
*/

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(*str)
		len++;
	return (len);
}

int	main()
{
	printf()
}