/*
** EPITECH PROJECT, 2018
** tools.c
** File description:
** HEADER
*/

#include "include/prototype.h"

void argtotab(int ac, char **argv, int *tab)
{
    int k = 1;
    int i = 0;

    while (k < ac) {
        tab[i] = my_getnbr(argv[k]);
        k++;
        i++;
    }
}
