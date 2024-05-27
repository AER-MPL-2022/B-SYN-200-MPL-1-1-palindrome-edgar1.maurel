/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-1-1-palindrome-edgar1.maurel
** File description:
** error_message.c
*/

#include "palindrome.h"

void error_message(char *message)
{
    write(2, message, my_strlen(message));
    exit(84);
}