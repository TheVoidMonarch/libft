/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:16:01 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/08/11 21:44:17 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
/*#include <stdio.h>*/

int	ft_memcmp(void *str1, void *str2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	if (ptr1 == NULL || ptr2 == NULL)
	{
		return (-1);
	}
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*ptr1 != *ptr2)
		{
			return (*ptr1 - *ptr2);
		}
		ptr1++;
		ptr2++;
	}
	return (0);
}

/*
int main()
{
    char data1[] = "Hello";
    char data2[] = "HelLo";
    size_t n = 5;

    int result = ft_memcmp(data1, data2, n);
    if (result < 0) {
        printf("data1 is less than data2\n");
    } else if (result > 0) {
        printf("data1 is greater than data2\n");
    } else {
        printf("data1 is equal to data2\n");
    }

    return 0;
}
*/
