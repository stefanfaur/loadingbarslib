#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}

void loading_bar(int percent, int width)
{
    int i;
    int num_of_loaded = (percent * width) / 100;
    int num_of_empty = width - num_of_loaded;
    printf("[");
    for (i = 0; i < num_of_loaded; i++)
    {
        printf("#");
    }
    for (i = 0; i < num_of_empty; i++)
    {
        printf(" ");
    }
    printf("] %d%%\r", percent);
    fflush(stdout);
}

void loading_bar_full(int percent, int width)
{
    int i;
    int num_of_loaded = (percent * width) / 100;
    int num_of_empty = width - num_of_loaded;
    printf("[");
    for (i = 0; i < num_of_loaded; i++)
    {
        printf("█");
    }
    for (i = 0; i < num_of_empty; i++)
    {
        printf(" ");
    }
    printf("] %d%%\r", percent);
    fflush(stdout);
}

void loading_bar_char(int percent, int width, char loading_char)
{
    int i;
    int num_of_loaded = (percent * width) / 100;
    int num_of_empty = width - num_of_loaded;
    printf("[");
    for (i = 0; i < num_of_loaded; i++)
    {
        printf("%c", loading_char);
    }
    for (i = 0; i < num_of_empty; i++)
    {
        printf(" ");
    }
    printf("] %d%%\r", percent);
    fflush(stdout);
}



