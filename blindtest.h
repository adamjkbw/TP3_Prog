#define BLINDTEST_H
#ifndef BLINDTEST_H

typedef struct
{
    char name[10];
    int score;
    struct Player *next;
} Player;

typedef struct
{
    char filename[50];
    char title[50];
    char artist[50];
} Song;

#endif
