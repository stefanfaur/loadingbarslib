#include <stdio.h>
#include "loadingbars.h"

void load_with_delay(int num_of_ms)
{
    int i;
    for (i = 0; i < 100; i++)
    {
        loading_bar(i, 100);
        delay(num_of_ms);
    }
}

int main()
{
    load_with_delay(10);
    load_with_delay(20);
    load_with_delay(50);
    load_with_delay(30);
    load_with_delay(40);

    return 0;
}