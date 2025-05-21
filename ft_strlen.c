/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:25:19 by aal-khat          #+#    #+#             */
/*   Updated: 2025/05/20 21:43:20 by aal-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/*#include <stdio.h>

int	main()
{
	printf("lenght %zu\n", ft_strlen("ahmad"));
	printf("length %zu\n", ft_strlen("963"));
	printf("length %zu\n", ft_strlen(""));
	return (0);
}*/
