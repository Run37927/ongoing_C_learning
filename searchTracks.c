#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in harvard med school",
    "Newark, Newark - a wonderful town",
    "Dancing with a dork",
    "From here to maternity",
    "The girl from Iwo Jima",
};

void find_track(char search_for[])
{
    int i;
    for (i = 0; i < 5; i++) {
        if (strstr(tracks[i], search_for)) {
                printf("Tracks %i: '%s'\n", i, tracks[i]);
        } else {
                printf("String not found\n");
        }
    }
}

int main()
{
    char search_for[80];
    printf("Search for: ");
    fgets(search_for, 80, stdin);
    find_track(search_for);
    return 0;
}