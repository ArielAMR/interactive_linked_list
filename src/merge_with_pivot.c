/*
** EPITECH PROJECT, 2024
** B-CPE-110-PAR-1-1-organized-ariel.amriou
** File description:
** merge_with_pivot.c
*/

#include <stdio.h>
#include "src.h"

void merge_with_pivot(linked_list_t *pivot,
    linked_list_t *minus, linked_list_t **plus)
{
    linked_list_t *tmp = *plus;

    pivot->next = minus;
    if (*plus != NULL) {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = pivot;
    } else
        *plus = pivot;
}
