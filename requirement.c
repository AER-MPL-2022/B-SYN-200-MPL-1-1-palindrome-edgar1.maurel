/*
** EPITECH PROJECT, 2023
** repo
** File description:
** requirement.c
*/

int my_factrec_synthesis(int nb) {
    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (1);
    return (nb * my_factrec_synthesis(nb - 1));
}
