/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:11:24 by aal-khat          #+#    #+#             */
/*   Updated: 2025/05/21 11:08:59 by aal-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include <stdio.h>

int	main()
{
	printf("120 %d\n", ft_isascii(120));
	printf("21 %d\n", ft_isascii(21));
	printf("330 %d\n", ft_isascii(330));
	printf("201 %d\n", ft_isascii(201));
}*/
