/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** HEADER
*/

#include "prototype.h"

int main(int ac, char **argv)
{
    linked_list_t *l_a = my_params_to_list(l_a, ac, argv);
    linked_list_t *l_b = NULL;
    
    if (error(ac, argv) != 0)
        return (84);
    if (laucher(l_a) == 0)
        return (0);
    buble_algo(l_a, l_b);
    write(1, "\n", 1);
    return (0);
}
