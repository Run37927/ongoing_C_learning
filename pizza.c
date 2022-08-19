#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])  // command line arguments passed to main() as an argument count and an array of pointers to the argument strings
{
    char *delivery = "";  //delivery is a pointer variable
    int thick = 0;
    int count = 0;
    char ch;

    while ((ch = getopt(argc, argv, "d:t")) != EOF)
        switch (ch)
        {
        case 'd':
            delivery = optarg;
            break;
        case 't':
            thick = 1;
            break;
        default:
            fprintf(stderr, "unknown option: '%s'\n", optarg);
            return 1;
        }

    argc -= optind;
    argv += optind;

    if (thick)
        puts("thick crust.");

    if (delivery[0])
        printf("To be deliveried %s.\n", delivery);

    puts("ingredients:");

    for (count = 0; count < argc; count++)
        puts(argv[count]);
    return 0;
}