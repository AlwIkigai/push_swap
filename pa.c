/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:32:48 by asyed             #+#    #+#             */
/*   Updated: 2024/04/17 15:34:55 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// push a
// first element top of B and out it at top of A
// remember as push to A, BT -> AT

/*

STACK A <- STACK B

1          <-2
3            4
5

in this case 2 will be pushed to above 1

if, as such, does nothing. STACK A empty.

STACK A || STACK B

            1

*/