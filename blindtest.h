#ifndef BLINDTEST_H
#define BLINDTEST_H

typedef struct Player
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

void trim_newline(char *s);

void normalize_string(char *dest, const char *src);

int string_equals_normalized(const char *a, const char *b);

void play_song_excerpt_at(const char *filename, int start, int seconds);

int load_songs(char *filename, Song lib[]);

#endif
