// CONFIG HEADER FILE //

#ifndef _CONFIG_HPP
#define _CONFIG_HPP

void addr(char const *rule_name, std::string rule); // ADD RULE

void delr(char const *rule_name); // DELETE RULE

std::string fetchr(char const rule_name[128], int line); // FETCH RULE

int liner(char const *rule_name); // LINE OF RULE

void wdata(std::string real, std::string state); // WRITE DATA

void ddata(char const *real); // DELETE DATA

#endif // MADE BY @hanilr //