#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./cat <filename>\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if(file == NULL)
    {
        printf("file doesn't exist\n");
        return 1;
    }
    char ch;

    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }
    //success
}