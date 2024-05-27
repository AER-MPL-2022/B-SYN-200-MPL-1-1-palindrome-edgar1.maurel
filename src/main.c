/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-1-1-palindrome-edgar1.maurel
** File description:
** main.c
*/

#include "palindrome.h"

int main(int argc, char **argv)
{
    arguments_t *args = get_args(argc, argv);
    palindrome_t *palindrome = create_palindrome(args);

    if (palindrome->number != -1) {
        generate_palindrome(palindrome);
        printf("%d leads to %d in %d iteration(s) in base %d\n",
        palindrome->number, palindrome->palindrom_res, palindrome->iteration, palindrome->base);
    }

    destroy_args(args);
    destroy_palindrome(palindrome);
    return 0;
}
