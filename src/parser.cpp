// PARSER MAIN FILE //

// STANDARD LIBRARY
#include <iostream>
#include <algorithm>

// DIY LIBRARY
#include "lib/parser.hpp"
#include "lib/util.hpp"
#include "lib/config.hpp"

std::string parser_term(std::string term)
{
    std::replace(term.begin(), term.end(), 46, 13);
    return term;
}

int parser_int(char const *rule_name, int line, int temp_state)
{
    std::string rule = fetchr(rule_name, line);
    int rule_number = (int) rule[2] - 48;

    if(linstr(rule, "+") == 0) { return (temp_state + rule_number); }
    if(linstr(rule, "-") == 0) { return (temp_state - rule_number); }
    if(linstr(rule, "*") == 0) { return (temp_state * rule_number); }
    if(linstr(rule, "/") == 0) { return (temp_state / rule_number); }
    if(linstr(rule, "#") == 0) { return (temp_state); }
}

int reverse_parser_int(char const *rule_name, int line, int temp_state)
{
    std::string rule = fetchr(rule_name, line);
    int rule_number = (int) rule[2] - 48;

    if(linstr(rule, "+") == 0) { return (temp_state - rule_number); }
    if(linstr(rule, "-") == 0) { return (temp_state + rule_number); }
    if(linstr(rule, "*") == 0) { return (temp_state / rule_number); }
    if(linstr(rule, "/") == 0) { return (temp_state * rule_number); }
    if(linstr(rule, "#") == 0) { return (temp_state); }
}

std::string parser_str(char const *rule_name, int line, std::string temp_state)
{
    std::string temp_conv, rule = fetchr(rule_name, line);
    int temp_int, state_len = temp_state.length(), rule_number = (int) rule[2] - 48;

    for(int i = 0; state_len>i; i+=1)
    {
        temp_int = temp_state[i];
        if(linstr(rule, "+") == 0) { temp_int += rule_number; }
        if(linstr(rule, "-") == 0) { temp_int -= rule_number; }
        if(linstr(rule, "*") == 0) { temp_int *= rule_number; }
        if(linstr(rule, "/") == 0) { temp_int /= rule_number; }
        if(linstr(rule, "#") == 0) { temp_int += 0; }
        temp_conv += temp_int;
    }

    return temp_conv;
}

std::string reverse_parser_str(char const *rule_name, int line, std::string temp_state)
{
    std::string temp_conv, rule = fetchr(rule_name, line);
    int temp_int, state_len = temp_state.length(), rule_number = (int) rule[2] - 48;

    for(int i = 0; state_len>i; i+=1)
    {
        temp_int = temp_state[i];
        if(linstr(rule, "+") == 0) { temp_int -= rule_number; }
        if(linstr(rule, "-") == 0) { temp_int += rule_number; }
        if(linstr(rule, "*") == 0) { temp_int /= rule_number; }
        if(linstr(rule, "/") == 0) { temp_int *= rule_number; }
        if(linstr(rule, "#") == 0) { temp_int += 0; }
        temp_conv += temp_int;
    }

    return temp_conv;
}

// MADE BY @hanilr //