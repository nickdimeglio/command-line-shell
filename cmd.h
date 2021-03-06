#ifndef CMD_H
#define CMD_H
#include <stdbool.h>
#include "smallsh.h"

/* ---------------------------------------------------
 *
 * smallsh command struct with accompanying 
 * function declarations
 *
 * -------------------------------------------------*/
struct cmd {
    /* struct for smallsh commands */
    char *text;
    char **argv;
    int argc;
    bool background;
    char *input;
    char *output;
};

char* cmdExpand(char* cmdString);
struct cmd *cmdInit();
struct cmd *cmdParse(struct smallsh *shell, char* cmd);
void cmdPrint(struct cmd *cmd);

#endif
