#pragma once
#include <string>
#include <vector>

void greet();
void display_misses(int misses);
void display_status(std::vector<char> incorrect, std::string answer);
void end_game(std::string answer, std::string word);
std::string generate_word();
