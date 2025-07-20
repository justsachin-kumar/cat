// header files
#include <stdio.h>
#include <string.h>
// main with command line argument
int main(int argc, char *argv[])
{
    // conditions
    if(argc != 2)
    {
        printf("Usage: ./cat <filename>\n");
        return 1;
    }
    // file pointer
    FILE *file = fopen(argv[1], "r");
    
    if(file == NULL)
    {
        printf("file doesn't exist\n");
        return 1;
    }
    // loop to iterate character using fgetc() function
    char ch;

    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }
    //success
    fclose(file);
}
