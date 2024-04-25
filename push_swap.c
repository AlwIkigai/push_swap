/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:22:28 by asyed             #+#    #+#             */
/*   Updated: 2024/04/25 21:24:49 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// input validation to stack a
// first arg top of stack
    // -> ?
// can be multiple AV
    // -> need to atoi
        // -> if receive as a string, need to split
// can be negative or positive int
    // -> but must be within range


// if no parameter specified, program must not display anything and give the prompt back
    //  -> ac == 1
// if error, display "Error" followed by a '\n' on standard error
    // if duplicate (error)
        // -> need to do check against current index
    // beyond range
    // not int



int gotduplicate(char **intargs) // takes in av in full

{
    int start;
    int next;

    start = 0;
    while (intargs[start] != NULL && intargs[start + 1] != NULL) // 2 string to compare
    {
        next = start + 1;
        while (intargs[next])
        {
            if (ft_strcmp(intargs[start], intargs[next]) == 0) // compare if they are equal
            {
                return (1); // return true if they are equal
            }
            next++; // move to next av
        }
        start++;
    }
    return (0);
}

int notdigits(char **intargs)

{
    int array;
    int index;

    array = 0;
    while (intargs[array])
    {
        index = 0;
        if (intargs[array][index] < '0' || intargs[array][index] > '9') // if not digits, return true
        {
            return(1);
            index++;
        }
        array++;
    }
    return (0);
}

void    firsterrorcheck(void)

{
        ft_putstr_fd("Error\n", 2); // how to do it on standard error (fd2), 2nd parameter  
        exit (1); // 1 means exit on error, 0 means no error
}

int main(int ac, char *av[])
{
    int start;
    start = 1;

    if (ac > 1) // multiple argv
    {
        if (notdigits(&av[start]) || gotduplicate(&av[start])) // check digits and check doubles
        {
            firsterrorcheck();
        }
        else
        {
            while (start < ac - 1) // traverse through args
            // extra condition, index 0 is a '-'
            {
                ft_atoi(av[start]); // convert ascii to integer,create atol to handle int min
                // however number must still be within int range, hence input INTMIN and INTMAX
                // just use the macro MIN and MAX, check library to use         
            }
            start++;
        }
        // error checking then populate
    }
    return (0); // for no parameter
}