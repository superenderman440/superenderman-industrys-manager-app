#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define INPUT_SIZE 1024

static bool read_input(const char *prompt, char *buffer, size_t size)
{
    if (prompt != NULL) {
        fputs(prompt, stdout);
        fflush(stdout);
    }

    if (fgets(buffer, (int)size, stdin) == NULL) {
        return false;
    }

    buffer[strcspn(buffer, "\n")] = '\0';
    return true;
}

static void helpme(const char *name)
{
    if (strcmp(name, "secondarymainDEV") == 0) {
        puts("position : highest DEV");
    } else {
        puts("position : founder / extreme highest DEV");
    }
}

static void callmewhenneeded(void)
{
    
