/*
** EPITECH PROJECT, 2024
** B-CPE-110-PAR-1-1-organized-ariel.amriou
** File description:
** disp.c
*/

#include <stdlib.h>
#include <unistd.h>
#include "src.h"
#include "my.h"

int disp(void *data, char **args)
{
    linked_list_t **head = (linked_list_t **)data;
    linked_list_t *tmp = *head;

    if (*args != NULL)
        return 84;
    while (tmp != NULL) {
        print_linked_list(tmp, "\"\n");
        tmp = tmp->next;
    }
    args += 0;
    return 0;
}
