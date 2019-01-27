/*
 * Matthew Rinne
 * scanner.c
 * cs403 Programming Languages
 */


#include "lexer.h"
#include "types.h"
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    FILE *fp = fopen(argv[argc-1], "r");
    getFile(fp);
    Lexeme *token = lex();
    while (getLexemeType(token) != END_OF_FILE)
    {
        printf("%s\n", getLexemeType(token));
        token = lex();
    }
    fclose(fp);
    return 0;
}
