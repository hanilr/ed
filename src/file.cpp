// FILE MAIN FILE //

#include <iostream>
#include <fstream>

// DIY LIBRARY //
#include "lib/file.hpp"

int deletef(char const *file_name) { remove(file_name); }

void writef(std::string file_name, std::string file_str)
{
    std::ofstream wfile(file_name); // WRITE FILE
    wfile << file_str;
    wfile.close();
}

std::string readf(std::string file_name, int line)
{
    std::string ret_str; // RETURN STRING

    std::ifstream rfile(file_name); // READ FILE

    while(line>0)
    {
        getline(rfile, ret_str);
        line-=1;
    }
    rfile.close();

    return ret_str;
}

// MADE BY @hanilr //