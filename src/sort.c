/*
** EPITECH PROJECT, 2024
** B-CPE-110-PAR-1-1-organized-ariel.amriou
** File description:
** sort.c
*/

#include <stdlib.h>
#include "src.h"
#include "my.h"

static void add_node(linked_list_t **node1, linked_list_t **node2)
{
    linked_list_t *tmp = NULL;

    tmp = *node1;
    *node1 = *node2;
    (*node1)->next = tmp;
}

static void split_strings(quick_sort_content_t content, char *str1, char *str2)
{
    if (my_strcmp(str1, str2) > 0)
        add_node(content.plus, content.node);
    if (my_strcmp(str1, str2) <= 0)
        add_node(content.minus, content.node);
}

static void split_ints(quick_sort_content_t content, int id1, int id2)
{
    if (id1 > id2)
        add_node(content.plus, content.node);
    if (id1 <= id2)
        add_node(content.minus, content.node);
}

static int is_revstr(quick_sort_content_t content, char *str1, char *str2)
{
    if (*(content.args + 1) != NULL && !my_strcmp(*(content.args + 1), "-r")) {
        split_strings(content, str2, str1);
    } else
        split_strings(content, str1, str2);
    return 0;
}

static int is_revid(quick_sort_content_t content, int id1, int id2)
{
    if (*(content.args + 1) != NULL && !my_strcmp(*(content.args + 1), "-r")) {
        split_ints(content, id2, id1);
    } else
        split_ints(content, id1, id2);
    return 0;
}

static int wich_sort(quick_sort_content_t content, linked_list_t **pivot)
{
    if (!my_strcmp(*content.args, "NAME"))
        return is_revstr(content, (*pivot)->name, (*content.node)->name);
    if (!my_strcmp(*content.args, "TYPE"))
        return is_revstr(content, (*pivot)->type, (*content.node)->type);
    if (!my_strcmp(*content.args, "ID"))
        return is_revid(content, (*pivot)->id, (*content.node)->id);
    return 84;
}

static int quick_sort(linked_list_t **pivot, char **args)
{
    linked_list_t *node = (*pivot)->next;
    linked_list_t *next_holder = node;
    linked_list_t *plus = NULL;
    linked_list_t *minus = NULL;
    quick_sort_content_t content = {&node, &plus, &minus, args};

    while (node != NULL) {
        next_holder = next_holder->next;
        if (wich_sort(content, pivot))
            return 84;
        node = next_holder;
    }
    if (minus != NULL && minus->next != NULL)
        quick_sort(&minus, args);
    if (plus != NULL && plus->next != NULL)
        quick_sort(&plus, args);
    merge_with_pivot(*pivot, minus, &plus);
    *pivot = plus;
    return 0;
}

int sort(void *data, char **args)
{
    linked_list_t **head = (linked_list_t **)data;

    if (*args == NULL)
        return 84;
    if (*head == NULL)
        return 0;
    if (quick_sort(head, args))
        return 84;
    return 0;
}
