/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-jessica.ebely
** File description:
** my
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <time.h>
#include <math.h>

typedef struct s_graph
{
    sfSprite *background;
    sfSprite *spritesheet;
    sfVector2f mouse_coord;
    sfVector2f duck_coord;
    int duck_number;
    float speed;
    int direction;
    sfSprite *aim;
    int score;
    sfText *score_int;
    sfText *score_text;
    sfText *life;
    int rest_of_life;
    int game_step;
    sfSprite *play_button;
    sfVector2f play_coord;
    sfSprite *exit_button;
    sfVector2f exit_coord;
    sfSprite *loser;
} t_graph;

sfRenderWindow *my_create_window(int width, int height);
void my_load_texture(t_graph *prm);
void my_game_event(sfEvent evt, t_graph *prm);
void my_duck_animation(t_graph *prm);
void my_window_selector(t_graph *prm, sfRenderWindow *window);
void my_manage_duck(t_graph *prm);
int my_randomizer(int min, int max);
void my_reset_position(t_graph *prm);
void my_print_life(t_graph *prm);
void my_print_score_final(t_graph *prm);
void my_print_score(t_graph *prm);
char *my_convert(t_graph *prm);
void my_start(t_graph *prm, sfRenderWindow *window);
void my_game(t_graph *prm, sfRenderWindow *window);
void my_end(t_graph *prm, sfRenderWindow *window);
void my_event_selector(sfEvent evt, sfRenderWindow *window, t_graph *prm);
void my_start_event(sfEvent evt, t_graph *prm);
void my_end_event(sfEvent evt, t_graph *prm);
char *my_int_strlen(int nbr);