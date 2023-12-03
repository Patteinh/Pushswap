/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include <unistd.h>
#include "pushswap.h"

int main(int ac, char **av)
{
    if (ac < 2) {
        write(1, "\n", 1);
        return (ERROR);
    }
    return (start_pushwap(ac, av));
}
