/*
** EPITECH PROJECT, 2018
** my_print_array.c
** File description:
** HEADER
*/

#include <stdio.h>

void my_print_array_col(int *array, int size)
{
    int mem = 0;

    while (mem != size) {
        printf("%d\n", array[mem]);
        mem ++;
    }
}

void my_print_array_line(int *array, int size)
{
    int mem = 0;

    while (mem != size) {
        printf("%d ", array[mem]);
        mem ++;
    }
    printf("\n");
}
