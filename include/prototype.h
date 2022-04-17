/*
** EPITECH PROJECT, 2018
** prototype.h
** File description:
** #include "include/prototype.h"
*/

#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int buble_algo(linked_list_t *l_a, linked_list_t *l_b);
int error(int ac, char **argv);
int finish_linked(linked_list_t *l_a);
int laucher(linked_list_t *l_a);
int main(int ac, char **argv);
void my_linked_sort(linked_list_t *l_a, linked_list_t *l_b);
void push_linked(linked_list_t **l_a, linked_list_t **l_b);
void rleft_linked(linked_list_t **l);
void rright_linked(linked_list_t **l);
void swap_linked(linked_list_t **l);
void secu(int *t, linked_list_t *l_a, linked_list_t *l_b);
