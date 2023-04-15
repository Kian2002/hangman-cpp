#include <iostream>
#include <string>
#include <vector>

#include "hangman_functions.h"

using namespace std;

int main()
{
	greet();

	const string word = "hello"; // replace with a random word from a list
	string answer{};
	for (char letter : word) { answer += "_"; }

	int misses = 0;
	vector<char> incorrect_letters;
	bool guessed_word = false;
	char letter{};

	while (answer != word && misses < 7)
	{
		display_misses(misses);
		display_status(incorrect_letters, answer);

		cout << "Please enter your guess: ";
		cin >> letter;

		for (int i = 0; i < word.length(); i++)
		{
			if (letter == word[i])
			{
				cout << "Correct! You're closer to cracking the word.\n";
				answer[i] = letter;
				guessed_word = true;
			}
		}

		if (guessed_word == false)
		{
			cout << "Incorrect! Another body part has been added.\n";
			incorrect_letters.push_back(letter);
			misses++;
		}

		guessed_word = false;
	}

	end_game(answer, word);
}
