/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:34:46 by asyed             #+#    #+#             */
/*   Updated: 2024/04/17 15:34:46 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// swap a + swap b
// swap first 2 element at the top of STACK A & STACK B, do nothing if only 1 or no element

/*

STACK A -> STACK B

1           2
3^          4^
5

in this case 1 will swapped with 3 && 2 swap with 4

if, as such, does nothing

STACK A || STACK B OR STACK A || STACK B

1            1

*/