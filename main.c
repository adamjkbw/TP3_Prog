#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "blindtest.h"

int main()
{
    srand(time(NULL));

    Song list[100];
    int nb = load_songs("songs.txt", list);
    if (nb > 0)
    {
        shuffleSong(list, nb);
        printf("Le blind test est pret et les morceaux sont melanges !\n");
    }

    for (int i = 0; i < nb; i++)
    {
        printf("%s\n", list[i].filename);
        play_song_excerpt_at(list[i].filename, 30, 10);
    }

    return 0;
}