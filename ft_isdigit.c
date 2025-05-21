/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:07:23 by aal-khat          #+#    #+#             */
/*   Updated: 2025/05/20 20:38:21 by aal-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*#include <stdio.h>

int	main()
{
	printf("1: %d\n", ft_isdigit('1'));
	printf("a: %d\n", ft_isdigit('a'));
	printf("?: %d\n", ft_isdigit('?'));
}*/
