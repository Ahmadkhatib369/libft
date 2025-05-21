/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 20:38:43 by aal-khat          #+#    #+#             */
/*   Updated: 2025/05/21 11:08:17 by aal-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*#include <stdio.h>

int	main()
{
	printf("Z: %d\n", ft_isalnum('z'));
	printf(" : %d\n", ft_isalnum(' '));
	printf("0: %d\n", ft_isalnum('0'));
	printf("a: %d\n", ft_isalnum('a'));
}*/
