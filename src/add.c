/*
** EPITECH PROJECT, 2024
** B-CPE-110-PAR-1-1-organized-ariel.amriou
** File description:
** add.c
*/

#include <stdlib.h>
#include <unistd.h>
#include "src.h"
#include "my.h"

static int is_correct(char *str)
{
    if (!my_strcmp(str, "WIRE") || !my_strcmp(str, "ACTUATOR") ||
        !my_strcmp(str, "DEVICE") || !my_strcmp(str, "SENSOR") ||
        !my_strcmp(str, "PROCESSOR"))
        return 0;
    return 1;
}

static void putnode(linked_list_t **head, char *name, char *type)
{
    linked_list_t *new = malloc(sizeof(linked_list_t));

    if (new == NULL)
        return;
    new->next = *head;
    new->name = my_strdup(name);
    new->type = my_strdup(type);
    if (*head == NULL)
        new->id = 0;
    else
        new->id = (*head)->id + 1;
    print_linked_list(new, "\" added.\n");
    *head = new;
}

int add(void *data, char **args)
{
    linked_list_t **head = (linked_list_t **)data;
    int len = list_len(args);

    if (len % 2 != 0 || len < 2)
        return 84;
    for (int i = 0; i < len; i += 2) {
        if (is_correct(args[0]))
            return 84;
    }
    for (int i = 0; i < len; i += 2) {
        if (args[0] == NULL)
            break;
        putnode(head, args[1], args[0]);
        args += 2;
    }
    return 0;
}
