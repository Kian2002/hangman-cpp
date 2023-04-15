#include <iostream>
#include <string>
#include <vector>

#include "hangman_functions.h"

using namespace std;

int main()
{
	greet();

	const string word = "hello";
	string answer = "_____";

	int misses = 0;
	vector<char> incorrect_letters;
	bool guessed_word = false;
	char letter{};

	while (answer != word && misses < 7)
	{
		display_misses(misses);
		display_status(incorrect_letters, answer);
	}
}
