/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-jessica.ebely
** File description:
** my_window
*/

#include "../include/my.h"

sfRenderWindow *my_create_window(int width, int height)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "My_hunter",
    sfTitlebar | sfClose, NULL);
    return (window);
}

int my_randomizer(int min, int max)
{
    int result;
    int low_nbr = 0;
    int high_nbr = 0;

    if (min < max) {
        low_nbr = min;
        high_nbr = max + 1;
    } else {
        low_nbr = min + 1;
        high_nbr = min;
    }
    time(NULL);
    result = rand() % (high_nbr - low_nbr) + low_nbr;
    return result;
}

char *my_convert(t_graph *prm)
{
    if (prm->rest_of_life == 3)
        return ("3");
    else if (prm->rest_of_life == 2)
        return ("2");
    else if (prm->rest_of_life == 1)
        return ("1");
    return 0;
}

char *my_int_strlen(int nbr)
{
    int length = 1;
    int nb = 10;
    char *result;

    if (nbr < 0)
        nbr *= -1;
    for (; nbr >= nb; length++, nb *= 10);
    result = malloc(sizeof(char) * length);
    result[length] = '\0';
    for (; length--; nbr /= 10)
        result[length] = nbr % 10 + 48;
    return result;
}