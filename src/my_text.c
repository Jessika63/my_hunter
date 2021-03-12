/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-jessica.ebely
** File description:
** my_text
*/

#include "../include/my.h"

void my_print_score(t_graph *prm)
{
    sfFont *police = sfFont_createFromFile("./pics/astroarmada.ttf");
    prm->score_text = sfText_create();
    sfText_setString(prm->score_text, "Score : ");
    sfText_setFont(prm->score_text, police);
    sfText_setColor(prm->score_text, sfWhite);
    sfText_setCharacterSize(prm->score_text, 45);
    sfText_setPosition(prm->score_text, (sfVector2f){300, 700});
    prm->score_int = sfText_create();
    sfText_setString(prm->score_int, my_int_strlen(prm->score));
    sfText_setFont(prm->score_int, police);
    sfText_setColor(prm->score_int, sfWhite);
    sfText_setCharacterSize(prm->score_int, 45);
    sfText_setPosition(prm->score_int, (sfVector2f){500, 700});
}

void my_print_score_final(t_graph *prm)
{
    sfFont *police = sfFont_createFromFile("./pics/astroarmada.ttf");
    prm->score_text = sfText_create();
    sfText_setString(prm->score_text, "Final Score : ");
    sfText_setFont(prm->score_text, police);
    sfText_setColor(prm->score_text, sfWhite);
    sfText_setCharacterSize(prm->score_text, 45);
    sfText_setPosition(prm->score_text, (sfVector2f){100, 700});
    prm->score_int = sfText_create();
    sfText_setString(prm->score_int, my_int_strlen(prm->score));
    sfText_setFont(prm->score_int, police);
    sfText_setColor(prm->score_int, sfWhite);
    sfText_setCharacterSize(prm->score_int, 45);
    sfText_setPosition(prm->score_int, (sfVector2f){500, 700});
}

void my_print_life(t_graph *prm)
{
    char *str = my_convert(prm);

    sfFont *police = sfFont_createFromFile("./pics/astroarmada.ttf");
    prm->life = sfText_create();
    sfText_setString(prm->life, str);
    sfText_setFont(prm->life, police);
    sfText_setColor(prm->life, sfWhite);
    sfText_setCharacterSize(prm->life, 45);
    sfText_setPosition(prm->life, (sfVector2f){500, 5});
    if (prm->rest_of_life == 0)
        prm->game_step++;
}