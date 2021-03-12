/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-jessica.ebely
** File description:
** my_event
*/

#include "../include/my.h"

void my_event_selector(sfEvent evt, sfRenderWindow *window, t_graph *prm)
{
    if (evt.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (prm->game_step == 1)
        my_start_event(evt, prm);
    else if (prm->game_step == 2)
        my_game_event(evt, prm);
    else if (prm->game_step == 3)
        my_end_event(evt, prm);
}

void my_start_event(sfEvent evt, t_graph *prm)
{
    prm->play_coord.x = 312;
    prm->play_coord.y = 312;
    if (evt.type != sfEvtMouseButtonPressed || evt.mouseButton.button !=
        sfMouseLeft)
        return;
    if ((evt.mouseButton.x <= prm->play_coord.x + 400) &&
    (evt.mouseButton.x >= prm->play_coord.x) &&
    (evt.mouseButton.y <= prm->play_coord.y + 145) &&
    (evt.mouseButton.y >= prm->play_coord.y)) {
        prm->game_step++;
    }
}

void my_game_event(sfEvent evt, t_graph *prm)
{
    if (evt.type == sfEvtMouseMoved)
        prm->mouse_coord = (sfVector2f){evt.mouseMove.x, evt.mouseMove.y};
    if (evt.type != sfEvtMouseButtonPressed || evt.mouseButton.button !=
        sfMouseLeft)
        return;
    if ((evt.mouseButton.x + 50 <= prm->duck_coord.x + 110) &&
    (evt.mouseButton.x + 50 >= prm->duck_coord.x) &&
    (evt.mouseButton.y + 50 <= prm->duck_coord.y + 110) &&
    (evt.mouseButton.y + 50 >= prm->duck_coord.y) &&
    (prm->direction == 1)) {
        prm->duck_coord.x = 1024;
        prm->score++;
        prm->speed += 0.35;
        return;
    } else if ((evt.mouseButton.x + 50 <= prm->duck_coord.x) &&
    (evt.mouseButton.x + 50 >= prm->duck_coord.x - 110) &&
    (evt.mouseButton.y + 50 <= prm->duck_coord.y + 110) &&
    (evt.mouseButton.y + 50 >= prm->duck_coord.y) &&
    (prm->direction == -1)) {
        prm->duck_coord.x = 20;
        prm->score++;
        prm->speed -= 0.35;
        return;
    } else
        prm->rest_of_life--;
}

void my_end_event(sfEvent evt, t_graph *prm)
{
    if (evt.type != sfEvtMouseButtonPressed || evt.mouseButton.button !=
        sfMouseLeft)
        return;
    if ((evt.mouseButton.x <= 200) && (evt.mouseButton.y <= 200)) {
        prm->game_step++;
    }
}