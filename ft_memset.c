/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:53:35 by aal-khat          #+#    #+#             */
/*   Updated: 2025/05/21 11:09:50 by aal-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[6] = "hello";

    printf("Before: %s\n", str);

    ft_memset(str, '*', 3);

    printf("After : %s\n", str);

    return 0;
}*/
