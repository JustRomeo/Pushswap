/*
** EPITECH PROJECT, 2018
** Error.c
** File description:
** HEADER
*/

#include "prototype.h"

int error(int ac, char **argv)
{
    int a = 0;

    if (ac < 2) {
        my_printf("Not Enough Arguments :(\n");
        return (84);
    }
    ac -= 1;
    while (ac != 0) {
        if (argv[ac][a] == '\0') {
            a = -1;
            ac -= 1;
        }
        else if (argv[ac][a] != '0' && argv[ac][a] != '1' &&
                 argv[ac][a] != '2' && argv[ac][a] != '3' &&
                 argv[ac][a] != '4' && argv[ac][a] != '5' &&
                 argv[ac][a] != '6' && argv[ac][a] != '7' &&
                 argv[ac][a] != '8' && argv[ac][a] != '9' &&
                 argv[ac][a] != '-') {
            my_printf("Invalid Arguments : %s\n", argv[ac]);
            return (84);
        }
        a ++;
    }
}
