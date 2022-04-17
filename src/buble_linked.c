/*
** EPITECH PROJECT, 2018
** buble_linked.c
** File description:
** HEADER
*/

#include "prototype.h"

int laucher(linked_list_t *l_a)
{
    linked_list_t *t = l_a;

    while (t->next != NULL) {
        if (t->data > t->next->data)
            return (84);
        t = t->next;
    }
    my_printf("\n");
    return (0);
}

void secu(int *t, linked_list_t *l_a, linked_list_t *l_b)
{
    (*t) ++;
    if ((*t) > 50000) {
        my_printf("\n\e[91m\e[5m\e[1mSECURE ABORT /!\\");
        my_printf("ENDLESS LOOP /!\\\e[0m\n");
        my_print_list(l_a);
        my_print_list(l_b);
        exit(168);
    }
}

int bigger(linked_list_t *l_b, linked_list_t *l)
{
    int tmp = l->data;

    while (l->next != NULL) {
        if (tmp < l->data)
            tmp = l->data;
        l = l->next;
    }
    return (tmp);
}

int buble_algo(linked_list_t *l_a, linked_list_t *l_b)
{
    int t = 0;
    int tmp = 0;
    linked_list_t *l = NULL;

    while (l_a != NULL) {
        push_linked(&l_a, &l_b);
        my_printf("pb ");
    }
    while (l_b != NULL) {
        l = l_b;
        tmp = bigger(l_b, l);
        while (l_b->data != tmp)
            rleft_linked(&l_b);
        rleft_linked(&l_b);
        push_linked(&l_b, &l_a);
        my_printf("pa");
        if (l_b != NULL)
            my_printf(" ");
        secu(&t, l_a, l_b);
    }
}
