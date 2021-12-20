// CONFIG MAIN FILE //

// STANDARD LIBRARY
#include <iostream>
#include <fstream>
#include <string.h>

// DIY LIBRARY
#include "lib/config.hpp"
#include "lib/file.hpp"

void addr(char const *rule_name, std::string rule)
{
    std::string rule_file = "config/";
    rule_file += rule_name;
    rule_file += ".txt";
    writef(rule_file, rule);
}

void delr(char const *rule_name)
{
    char rule_file[256] = "config/";
    strcat(rule_file, rule_name);
    strcat(rule_file, ".txt");
    deletef(rule_file);
}

std::string fetchr(char const *rule_name, int line)
{
    char rule_file[256] = "config/";
    strcat(rule_file, rule_name);
    strcat(rule_file, ".txt");

    return readf(rule_file, line);
}

int liner(char const *rule_name)
{
    std::string null_str;
    char rule_file[256] = "config/";
    int line = 0;

    strcat(rule_file, rule_name);
    strcat(rule_file, ".txt");

    std::ifstream gl(rule_file); // READ FILE
    while(getline(gl, null_str)) { line+=1; }
    gl.close();
 
    return line;
}

void wdata(std::string real, std::string state)
{
    std::string state_file = "data/";
    state_file += real;
    state_file += ".txt";
    writef(state_file, state);
}

void ddata(char const *real)
{
    char state_file[256] = "data/";
    strcat(state_file, real);
    strcat(state_file, ".txt");
    deletef(state_file);
}

// MADE BY @hanilr //