/*
** EPITECH PROJECT, 2018
** criterion.c
** File description:
** HEADER
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/prototype.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(utils, ascending_order_test)
{
    char **argv = malloc(sizeof(char) * 5);
    int ac = 5;

    argv[0] = "0";
    argv[1] = "5";
    argv[2] = "4";
    argv[3] = "3";
    argv[4] = "2";

    cr_assert(error(ac, argv) == 0);
}

Test(utils, ascending_order_test_2)
{
    char **argv = malloc(sizeof(char) * 5);
    int ac = 5;

    argv[0] = "0";
    argv[1] = "10";
    argv[2] = "1000";
    argv[3] = "100000";
    argv[4] = "10000000";

    cr_assert(error(ac, argv) == 0);
}


Test(utils, ascending_order_test_3)
{
    char **argv = malloc(sizeof(char) * 5);
    int ac = 5;

    argv[0] = "0";
    argv[1] = "10";
    argv[2] = "1000";
    argv[3] = "100000";
    argv[4] = "Salut";

    cr_assert(error(ac, argv) == 84);
}
