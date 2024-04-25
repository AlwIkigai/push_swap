/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:34:36 by asyed             #+#    #+#             */
/*   Updated: 2024/04/17 15:34:36 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// reverse rotate A
// last element becomes first, the rest push down for STACK A

/*

STACK A -> STACK B

1 (down)    2
3 (down)    4
5^(first)

in this case 5 will be first and 1 and 3 pushed down

*/