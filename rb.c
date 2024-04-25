/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:34:40 by asyed             #+#    #+#             */
/*   Updated: 2024/04/17 15:34:40 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// rotate b
// first element becomes last, the rest push up for STACK B

/*

STACK A -> STACK B

1           2 (last)
3           4^
5 

in this case 2 will be last and 4 pushed uop

*/