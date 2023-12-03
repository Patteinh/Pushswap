/*
** EPITECH PROJECT, 2021
** action
** File description:
** action
*/

#include <unistd.h>
#include "pushswap.h"

static void next_pa(ps_t *ps, int i)
{
    for (;i > 0; i--)
        ps->l_a[i] = ps->l_a[i - 1];
    ps->len_a = ps->len_a + 1;
    ps->l_a[0] = ps->l_b[0];
    for (; i < ps->len_b - 1; i++)
        ps->l_b[i] = ps->l_b[i + 1];
    ps->l_b[ps->len_b - 1] = 0;
    ps->len_b = ps->len_b - 1;
}

void my_pa(ps_t *ps)
{
    int i = 0;

    if (ps->len_b > 0) {
        i = ps->len_a;
        next_pa(ps, i);
    }
}

static void next_pb(ps_t *ps, int i)
{
    for (; i > 0; i--)
        ps->l_b[i] = ps->l_b[i - 1];
    ps->len_b = ps->len_b + 1;
    ps->l_b[0] = ps->l_a[0];
    for (; i < ps->len_a - 1; i++)
        ps->l_a[i] = ps->l_a[i + 1];
    ps->l_a[ps->len_a - 1] = 0;
    ps->len_a = ps->len_a - 1;
}

void my_pb(ps_t *ps)
{
    int i = 0;

    if (ps->len_a > 0) {
        i = ps->len_b;
        next_pb(ps, i);
    }
    write(1, "pb ", 3);
}

void my_ra(ps_t *ps)
{
    int stock = 0;
    int i = 0;
    stock = ps->l_a[0];

    for (i = 0; i < ps->len_a - 1; i++)
        ps->l_a[i] = ps->l_a[i + 1];
    ps->l_a[i] = stock;
    write(1, "ra ", 3);
}
