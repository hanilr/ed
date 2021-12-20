// ENCODER-DECODER (ED) MAIN FILE //

// STANDARD LIBRARY
#include <iostream>

// DIY LIBRARY
#include "lib/util.hpp"
#include "lib/file.hpp"
#include "lib/config.hpp"
#include "lib/parser.hpp"
#include "lib/help.hpp"

void wendl(std::string msg) { std::cout << "\n" << msg << "\n\n"; } // WITH ENDL

int main(int argc, char *argv[])
{
    if(argc == 1 || argc > 5) { wendl(NOT_ENOUGH_ENTRY); }
    else if(argc == 2)
    {
        if(linstr(argv[1], "github") == 0) { wendl(GITHUB); }
        else if(linstr(argv[1], "feedback") == 0) { wendl(FEEDBACK); }
        else if(linstr(argv[1], "-h") == 0) { wendl(HELP); }
        else if(linstr(argv[1], "-r") == 0) { wendl(RULE); }
        else { wendl(NOT_ENOUGH_ENTRY); }
    }

    else if(argc == 4)
    {
        if(linstr(argv[1], "config") == 0 && linstr(argv[2], "del") == 0) { delr(argv[3]); }
        else if(linstr(argv[1], "data") == 0 && linstr(argv[2], "del") == 0) { ddata(argv[3]); }
        else { wendl(NOT_ENOUGH_ENTRY); }
    }

    else if(argc == 5)
    {
        if(linstr(argv[1], "config") == 0 && linstr(argv[2], "add") == 0)
        {
            std::string parsed = parser_term(argv[4]);
            addr(argv[3], parsed);
        }
        else if(linstr(argv[1], "data") == 0 && linstr(argv[2], "add") == 0) { wdata(argv[3], argv[4]); }

        else if(linstr(argv[1], "encode") == 0)
        {
            if(linstr(argv[2], "int") == 0) { std::cout << "\n" << enint(argv[3], (int)argv[4]) << "\n\n"; }
            else if(linstr(argv[2], "str") == 0) { std::cout << "\n" << enstr(argv[3], argv[4]) << "\n\n"; }
            else { wendl(NOT_ENOUGH_ENTRY); }
        }

        else if(linstr(argv[1], "decode") == 0)
        {
            if(linstr(argv[2], "int") == 0) { std::cout << "\n" << deint(argv[3], (int)argv[4]) << "\n\n"; }
            else if(linstr(argv[2], "str") == 0) { std::cout << "\n" << destr(argv[3], argv[4]) << "\n\n"; }
            else { wendl(NOT_ENOUGH_ENTRY); }
        }
        else { wendl(NOT_ENOUGH_ENTRY); }
    }
    else { wendl(NOT_ENOUGH_ENTRY); }
    return 0;
}

// MADE BY @hanilr //