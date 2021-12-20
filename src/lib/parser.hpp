// PARSER HEADER FILE //

std::string parser_term(std::string term);

int parser_int(char const*rule_name, int line, int temp_state);

int reverse_parser_int(char const*rule_name, int line, int temp_state);

std::string parser_str(char const*rule_name, int line, std::string temp_state);

std::string reverse_parser_str(char const*rule_name, int line, std::string temp_state);

// MADE BY @hanilr //