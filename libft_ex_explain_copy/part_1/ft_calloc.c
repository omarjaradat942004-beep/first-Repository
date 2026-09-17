/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 15:26:33 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 10:34:57 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
void	*ft_calloc(size_t n, size_t size)
{
	size_t			index;
	unsigned char	*ptr;

	if (n == 0 || size == 0)
		return (NULL);
	if (size > (size_t)-1 / n)
		return (NULL);
	ptr = malloc((n * size));
	if (!ptr)
		return (NULL);
	index = 0;
	while (index < (size * n))
	{
		ptr[index] = 0;
		index++;
	}
	return (ptr);
}
/*
int main()
{
	size_t	elements_number = 5;
	size_t	size = 4;
	printf("%p",ft_calloc(elements_number, size));
	
	index = 0;
        while (index < (size * n))
        {
                printf("%d-",ptr[index]);
                index++;
        }
	
}
*/

/*
Imagine an unsigned type with only 3 bits

A 3-bit unsigned integer has 8 possible bit patterns:

000 = 0
001 = 1
010 = 2
011 = 3
100 = 4
101 = 5
110 = 6
111 = 7

So:

minimum = 0
maximum = 7
number of values = 8

Now ask:

    What should happen when we convert -1 to this unsigned type?

C's rule for converting an integer to an unsigned type is effectively:

value modulo 2^N

Here N = 3, so:

-1 mod 8

Mathematically:

-1 = (-1 × 8) + 7

Therefore:

-1 mod 8 = 7

And 7 is:

111

So:

(unsigned 3-bit)-1
17 ÷ 8 = 2 remainder 1

Because:

17 = (2 × 8) + 1

Therefore:

17 mod 8 = 1

Now take -1.

We want to express -1 in the form:

(-1) = (some_integer × 8) + (remainder)

where the remainder must be between 0 and 7.

Try -1 × 8:

-1 × 8 = -8

We need to get from -8 to -1:

-8 + 7 = -1

Therefore:

-1 = (-1 × 8) + 7

So:

-1 mod 8 = 7

Think of it as wrapping around

Imagine the numbers modulo 8:

..., -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, ...
       ↓                       ↓
       7?                      0

Numbers that differ by 8 have the same remainder:

7 mod 8  = 7
-1 mod 8 = 7
15 mod 8 = 7
23 mod 8 = 7

Because:

7  = 0 × 8 + 7
-1 = -1 × 8 + 7
15 = 1 × 8 + 7
23 = 2 × 8 + 7

They're all in the same modulo-8 class.
This is exactly what happens with unsigned integers

For an 8-bit unsigned integer, there are 256 possible values:

0 ... 255

So converting -1 is effectively:

-1 mod 256

And:

-1 = (-1 × 256) + 255

Therefore:

-1 mod 256 = 255

So:

(unsigned char)-1

becomes:

255

The key thing to remember is:

-1 doesn't magically become positive.
The conversion maps it into the unsigned range by wrapping around.
*/
