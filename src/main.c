/*
** EPITECH PROJECT, 2024
** main.c
** File description:
** main function
*/

#include <stdlib.h>
#include "shell.h"
#include "src.h"

static void free_linked_list(linked_list_t *head)
{
    linked_list_t *tmp = NULL;

    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp->name);
        free(tmp->type);
        free(tmp);
    }
}

int main(void)
{
    linked_list_t *head = NULL;
    int return_value = workshop_shell(&head);

    free_linked_list(head);
    return return_value;
}
