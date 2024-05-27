/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-1-1-palindrome-edgar1.maurel
** File description:
** palindrome.h
*/

#pragma once
#include <stdlib.h>
#include <unistd.h>

typedef struct {
    int number;
    int palindrom_res;
    int base;
    int max;
    int min;
} palindrome_t;

typedef struct {
    int n;
    int p;
    int b;
    int imin;
    int imax;
} arguments_t;

int my_strcmp(char *s1, char *s2);
palindrome_t *create_palindrome_from_number(int number);
palindrome_t *create_palindrome_from_palindrome(int palindrome);
void destroy_palindrome(palindrome_t *palindrome);
void error_message(char *message);
void destroy_args(arguments_t *args);
arguments_t *get_args(int argc, char **argv);
int my_strlen(char *str);
int my_getnbr(char *str);