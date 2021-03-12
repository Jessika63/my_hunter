/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-jessica.ebely
** File description:
** draw_window
*/

#include "../include/my.h"

void my_window_selector(t_graph *prm, sfRenderWindow *window)
{
    sfRenderWindow_clear(window, sfMagenta);
    if (prm->game_step == 1)
        my_start(prm, window);
    else if (prm->game_step == 2)
        my_game(prm, window);
    else if (prm->game_step == 3)
        my_end(prm, window);
    sfRenderWindow_display(window);
}

void my_start(t_graph *prm, sfRenderWindow *window)
{
    sfRenderWindow_setMouseCursorVisible(window, sfTrue);
    sfRenderWindow_drawSprite(window, prm->background, NULL);
    sfSprite_setPosition(prm->play_button, (sfVector2f){312, 312});
    sfRenderWindow_drawSprite(window, prm->play_button, NULL);
}

void my_game(t_graph *prm, sfRenderWindow *window)
{
    my_manage_duck(prm);
    my_print_score(prm);
    sfRenderWindow_drawSprite(window, prm->background, NULL);
    sfSprite_setScale(prm->spritesheet, (sfVector2f){prm->direction, 1});
    sfRenderWindow_drawSprite(window, prm->spritesheet, NULL);
    sfRenderWindow_drawSprite(window, prm->aim, NULL);
    sfRenderWindow_drawText(window, prm->score_text, NULL);
    sfRenderWindow_drawText(window, prm->score_int, NULL);
    sfSprite_setPosition(prm->aim, prm->mouse_coord);
    my_print_life(prm);
    sfRenderWindow_drawText(window, prm->life, NULL);
}

void my_end(t_graph *prm, sfRenderWindow *window)
{
    my_print_score_final(prm);
    sfRenderWindow_setMouseCursorVisible(window, sfTrue);
    sfRenderWindow_drawSprite(window, prm->background, NULL);
    sfSprite_setPosition(prm->loser, (sfVector2f){292, 275});
    sfRenderWindow_drawSprite(window, prm->loser, NULL);
    sfRenderWindow_drawSprite(window, prm->exit_button, NULL);
    sfRenderWindow_drawText(window, prm->score_text, NULL);
    sfRenderWindow_drawText(window, prm->score_int, NULL);
}