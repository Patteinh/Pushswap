/*
** EPITECH PROJECT, 2021
** start_check
** File description:
** start_check
*/

#include <unistd.h>
#include <stdlib.h>
#include "pushswap.h"

static void free_all(ps_t *ps)
{
    free(ps->l_a);
    free(ps->l_b);
    free(ps);
}

static int check_if_sorted(ps_t *ps)
{
    for (int i = 1; i != ps->len_a; i++)
        if (ps->l_a[i] < ps->l_a[i - 1])
            return (SUCCESS);
    write(1, "\n", 1);
    return (FAILURE);
}

static void begin_lists(int ac, char **av, ps_t *ps)
{
    int j = 1;
    ps->l_a = malloc(sizeof(int) * (ac - 1));
    ps->l_b = malloc(sizeof(int) * (ac - 1));

    for (int i = 0; i != ac - 1; i++) {
        ps->l_a[i] = my_getnbr(av[j]);
        j++;
    }
}

static int add_info_to_list(int ac, char **av, ps_t *ps)
{
    begin_lists(ac, av, ps);
    ps->len_a = ac - 1;
    ps->len_b = 0;

    if (check_if_sorted(ps) == FAILURE)
        return (FAILURE);
    return (SUCCESS);
}

int start_pushwap(int ac , char **av)
{
    ps_t *ps = malloc(sizeof(ps_t));

    if (add_info_to_list(ac, av, ps) == FAILURE)
        return (SUCCESS);
    my_algorithm(ac, ps);
    write(1, "\n", 1);
    free_all(ps);
    return (SUCCESS);
}
