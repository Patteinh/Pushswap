/*
** EPITECH PROJECT, 2022
** my_get_nbr.c
** File description:
** get a number in a string
*/

int my_getnbr(const char *nbr)
{
    int var = 0;
    int neg = 1;
    int i = 0;

    if (nbr == 0)
        return (0);
    for (; (*nbr < 47 || *nbr > 58) && *nbr != 0; nbr++, i++);
    if (i > 0 && *(nbr - 1) == 45)
        neg = -1;
    while (*nbr != 0 && *nbr >= 48 && *nbr <= 57) {
        var = var * 10;
        var = var + *nbr - 48;
        nbr++;
    }
    var = var * neg;
    return (var);
}
