// UTIL MAIN FILE //

// STANDARD LIBRARY
#include <iostream>

// DIY LIBRARY
#include "lib/util.hpp"
#include "lib/parser.hpp"
#include "lib/config.hpp"

int linstr(std::string string, std::string letter)
{
    if(string.find(letter) != -1) { return 0; }
    else { return -1;}
} // IF LETTER DIDN'T FOUND RETURN -1

int stic(const char *temp_state)
{
    int ret = (int)temp_state[0];
    return ret;
}

int enint(char const *rule_name, int true_state)
{
    int false_state, rule_line = liner(rule_name), loop_buffer=1;
    std::string state;

    false_state = parser_int(rule_name, loop_buffer, true_state);
    loop_buffer+=1;
    rule_line-=1;
    while(rule_line>1)
    {
        false_state = parser_int(rule_name, loop_buffer, false_state);
        loop_buffer+=1;
        rule_line-=1;
    }

    wdata(std::to_string(true_state), std::to_string(false_state));
    return false_state;
}

int deint(char const *rule_name, int false_state)
{
    int true_state, rule_line = liner(rule_name);

    true_state = reverse_parser_int(rule_name, rule_line, false_state);
    rule_line-=1;
    while(rule_line>0)
    {
        true_state = reverse_parser_int(rule_name, rule_line, true_state);
        rule_line-=1;
    }

    return true_state;
}

std::string enstr(char const *rule_name, std::string true_state)
{
    std::string false_state;
    int rule_line = liner(rule_name), loop_buffer=1;

    false_state = parser_str(rule_name, loop_buffer, true_state);
    loop_buffer+=1;
    rule_line-=1;
    while(rule_line>1)
    {
        false_state = parser_str(rule_name, loop_buffer, false_state);
        loop_buffer+=1;
        rule_line-=1;
    }

    wdata(true_state, false_state);
    return false_state;
}

std::string destr(char const *rule_name, std::string false_state)
{
    std::string true_state;
    int rule_line = liner(rule_name);

    true_state = parser_str(rule_name, rule_line, false_state);
    rule_line-=1;
    while(rule_line>0)
    {
        true_state = parser_str(rule_name, rule_line, true_state);
        rule_line-=1;
    }

    return true_state;
}

// MADE BY @hanilr //