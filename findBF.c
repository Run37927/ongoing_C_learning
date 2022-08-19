#include <stdio.h>
#include <string.h>

int NUM_ADS = 7;

char *ADS[] = {
    "William: SBM GSOH likes sports, TV, dining",
    "Matt: SWM NS likes art, movies, theater",
    "Luis: SLM ND likes books, theater, art",
    "Mike: DWM DS likes trucks, sports and bieber",
    "Peter: SAM likes chess, working out and art",
    "Josh: SJM likes sports, movies and theater",
    "Jed: DBM likes theater, books and dining"};

// someone who likes sports but not Bieber
int sports_no_bieber(char *s)
{
    return strstr(s, "sports") && !strstr(s, "bieber");
}

// someone who likes sports or working out
int sports_or_workout(char *s)
{
    return strstr(s, "sports") || strstr(s, "working out");
}

// someone who likes non-smoker and likes theatre
int ns_theatre(char *s)
{
    return strstr(s, "theater") && strstr(s, "NS");
}

// someone who likes arts, theater or dining
int arts_theater_or_dining(char *s)
{
    return strstr(s, "art") || strstr(s, "theater") || strstr(s, "dining");
}

void find(int (*match)(char*))
{
    int i;
    puts("Search results:");
    puts("-----------------------------------------------");

    for (i = 0; i < NUM_ADS; i++)
    {
        if (match(ADS[i]))
        {
            printf("%s\n", ADS[i]);
        }
    }
    puts("-----------------------------------------------");
}

int main()
{
    find(sports_no_bieber);
    find(sports_or_workout);
    find(ns_theatre);
    find(arts_theater_or_dining);

    return 0;
}




qsort(void *array, size_t length, size_t item_size, int (*compar)(const void *, const void *));