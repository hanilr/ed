// UTIL HEADER FILE //

#ifndef _UTIL_HPP
#define _UTIL_HPP

int linstr(std::string string, std::string letter); // LETTER IN STRING

int stic(const char *temp_state); // STRING TO INT CONVERTER

int enint(char const*rule_name, int true_state); // ENCODE INTEGER

int deint(char const*rule_name, int false_state); // DECODE INTEGER

std::string enstr(char const *rule_name, std::string true_state); // ENCODE STRING

std::string destr(char const *rule_name, std::string false_state); // DECODE STRING

#endif // MADE BY @hanilr //