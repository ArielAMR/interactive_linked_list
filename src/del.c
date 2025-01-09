/*
** EPITECH PROJECT, 2024
** B-CPE-110-PAR-1-1-organized-ariel.amriou
** File description:
** del.c
*/

#include <stdlib.h>
#include "src.h"
#include "my.h"

static int is_int(char *nb)
{
    for (int i = 0; i < my_strlen(nb); i++)
        if (nb[i] > '9' || nb[i] < '0')
            return 1;
    return 0;
}

static int is_number(char *str)
{
    for (int i = 0; i < my_strlen(str); i++)
        if (str[i] < '0' || str[i] > '9')
            return 1;
    return 0;
}

static void relink_node(linked_list_t *node1, linked_list_t *node2)
{
    linked_list_t *tmp = NULL;

    tmp = node1->next;
    node1->next = node2->next;
    free(tmp->name);
    free(tmp->type);
    free(tmp);
}

static void relink_first(linked_list_t **head)
{
    linked_list_t *tmp = NULL;

    tmp = (*head);
    (*head) = (*head)->next;
    free(tmp->name);
    free(tmp->type);
    free(tmp);
}

static int delete_node(linked_list_t **head, int id)
{
    linked_list_t *tmp = *head;

    if (tmp != NULL && tmp->id == id) {
        print_linked_list(*head, "\" deleted.\n");
        relink_first(head);
        return 1;
    }
    while (tmp != NULL && tmp->next != NULL) {
        if (tmp->next->id == id) {
            print_linked_list(tmp->next, "\" deleted.\n");
            relink_node(tmp, tmp->next);
            return 1;
        }
        tmp = tmp->next;
    }
    return 0;
}

int del(void *data, char **args)
{
    linked_list_t **head = (linked_list_t **)data;
    int len = list_len(args);
    int id = 0;

    if (len < 1)
        return 84;
    while (*args != NULL) {
        if (is_int(*args))
            return 84;
        id = my_getnbr(*args);
        if (!is_number(*args) && !delete_node(head, id))
            return 84;
        args++;
    }
    return 0;
}
