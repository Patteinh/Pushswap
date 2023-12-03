/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#include "my.h"

#ifndef _PROJECT_H
    #define _PROJECT_H

typedef struct ps_s {
    int *l_a;
    int *l_b;
    int len_a;
    int len_b;
    int small_nb;
}ps_t;

int  start_pushwap(int ac , char **av);
void my_algorithm(int ac, ps_t *list);
void my_ra(ps_t *list);
void my_pb(ps_t *list);
void my_pa(ps_t *list);

#endif
