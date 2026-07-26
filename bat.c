#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char filename[256];
    char classname[256];
    char command[512];
    char jasmname[256];
    printf("\033c\033[47;30m\n");
    printf("give me file .class ?\n\n");

    scanf("%s", filename);

    strcpy(classname, filename);

    classname[strlen(classname)-6] = 0;

    sprintf(command,
    "/usr/bin/openjdk-asmtools-jdis %s -w ./",
    filename);

    system(command);

    

    return 0;
}
