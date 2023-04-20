#include <regex> // regex library

//create a regex pattern
//1. create a pattern string
string phone_pattern = R"(\d{3}-\d{3}-\d{4})";

//2. convert into regex object
regex reg_phone(phone_pattern);

//3. use regex funtions
regex_match(s, reg_phone);
