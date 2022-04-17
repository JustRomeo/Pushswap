/*
** EPITECH PROJECT, 2018
** my_putint_in_str.c
** File description:
** HEADER
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);

char *my_putint_in_str(int z)
{
    char *result = malloc(sizeof(char) * 12);
    int n = 0;
    int b = 10;
    
    while (result[n]) {
        if (z > 0)
            result[n] = (z % b + '0');
        if (z > b)
            result[n] = (z / b + '0');
        b = b * 10;
        n ++;
    }
    return (my_revstr(result));
}
