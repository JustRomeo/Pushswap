/*
** EPITECH PROJECT, 2018
** swap_linked.c
** File description:
** HEADER
*/

#include "prototype.h"

void swap_linked(linked_list_t **l)
{
    linked_list_t *s = NULL;
        
    s = (*l)->next;
    (*l)->next = s->next;
    s->next = *l;
    *l = s;
    write(1, "sa", 2);
}

void rleft_linked(linked_list_t **l)
{
    linked_list_t *t = NULL;
    linked_list_t *p = NULL;
    
    t = *l;
    while (t->next != NULL)
        t = t->next;
    t->next = *l;
    p = (*l)->next;
    (*l)->next = NULL;
    *l = p;
    write(1, "rb ", 3);
}

void rright_linked(linked_list_t **l)
{
    linked_list_t *t = NULL;
    linked_list_t *p = NULL;

    t = *l;
    while (t->next != NULL)
        t = t->next;
    p = *l;
    while (p->next->next != NULL)
        p = p->next;
    p->next = NULL;
    t->next = *l;
    *l = t;
    write(1, "rra", 3);
}

void push_linked(linked_list_t **l_a, linked_list_t **l_b)
{
    linked_list_t *p = (*l_a)->next;

    if (l_a != NULL) {
        p = (*l_a)->next;
        (*l_a)->next = *l_b;
        *l_b = *l_a;
        *l_a = p;
    }
}
