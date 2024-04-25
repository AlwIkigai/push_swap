/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:34:44 by asyed             #+#    #+#             */
/*   Updated: 2024/04/17 15:34:44 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// rotate a
// first element becomes last, the rest push up for STACK A

/*

STACK A -> STACK B

1 (last)    2
3^          4
5^

in this case 1 will be last and 3 and 5 pushed up

*/