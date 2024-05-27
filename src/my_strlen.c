/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-1-1-palindrome-edgar1.maurel
** File description:
** my_strlen.c
*/

#include "palindrome.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}