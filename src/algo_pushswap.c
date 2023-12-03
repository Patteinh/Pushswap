/*
** EPITECH PROJECT, 2021
** algo_pushswap
** File description:
** algo_pushswap
*/

#include <unistd.h>
#include "pushswap.h"

static void find_small_nb_l_a(ps_t *ps)
{
    ps->small_nb = ps->l_a[0];
    for (int i = 0; i != ps->len_a; i++)
        if (ps->l_a[i] < ps->small_nb)
            ps->small_nb = ps->l_a[i];
}

void my_algorithm(int ac, ps_t *ps)
{
    for (int i = 0; i != ac - 1; i++) {
        find_small_nb_l_a(ps);
        for (int i = 0; ps->l_a[0] != ps->small_nb; i++)
            my_ra(ps);
        my_pb(ps);
    }
    for (int i = 0; i != ac - 1; i++) {
        my_pa(ps);
        (i == ac - 2) ? write(1, "pa", 2) : write(1, "pa ", 3);
    }
}
