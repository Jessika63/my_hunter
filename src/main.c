/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-jessica.ebely
** File description:
** main
*/

#include "../include/my.h"

int main(void)
{
    sfRenderWindow *window = my_create_window(1024, 768);
    t_graph *prm = malloc(sizeof(t_graph));
    sfEvent evt;
    sfClock *anim = sfClock_create();

    prm->duck_number = 0;
    prm->speed = 5;
    prm->rest_of_life = 3;
    prm->direction = 1;
    prm->game_step = 1;
    prm->score = 0;
    my_load_texture(prm);
    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window) && prm->game_step < 4) {
        while (sfRenderWindow_pollEvent(window, &evt)) {
            my_event_selector(evt, window, prm);
        }
        if (sfClock_getElapsedTime(anim).microseconds > 100000) {
            my_duck_animation(prm);
            sfClock_restart(anim);
        }
        my_window_selector(prm, window);
    }
    sfRenderWindow_destroy(window);
    free(prm);
}