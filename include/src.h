/*
** EPITECH PROJECT, 2024
** src.h
** File description:
** src.h
*/

#ifndef SRC_H_
    #define SRC_H_
    #define FALSE 0
    #define TRUE 1

typedef struct linked_list_s {
    int id;
    char *name;
    char *type;
    struct linked_list_s *next;
    struct linked_list_s *prev;
} linked_list_t;

typedef struct string_to_compare_s {
    char *str1;
    char *str2;
    int is_string;
} string_to_compare_t;

typedef struct int_to_compare_s {
    int nb1;
    int nb2;
} int_to_compare_t;

typedef struct quick_sort_content_s {
    linked_list_t **node;
    linked_list_t **plus;
    linked_list_t **minus;
    char **args;
} quick_sort_content_t;

int list_len(char **list);
void print_linked_list(linked_list_t *head, char *end);
void merge_with_pivot(linked_list_t *pivot,
    linked_list_t *minus, linked_list_t **plus);

#endif
