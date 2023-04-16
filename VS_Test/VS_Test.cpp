#include <iostream>
#include <string>
#include <vector>

#include "hangman_functions.h"

using namespace std;

int main()
{
	greet();

	const string word = {generate_word()};
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
				if (answer.find(letter, 0) != std::string::npos)
				{
					cout <<
						"You already guessed that letter. Try again.\n";
				}
				else cout << "Correct! You're closer to cracking the word.\n";

				answer[i] = letter;
				guessed_word = true;
			}
		}

		if (guessed_word == false)
		{
			if (find(incorrect_letters.begin(), incorrect_letters.end(), letter) != incorrect_letters.end())
			{
				cout << "You already guessed that letter. Try again.\n";
			}
			else
			{
				if (misses != 6) cout << "Incorrect! Another body part has been added.\n";
				incorrect_letters.push_back(letter);
				misses++;
			}
		}

		guessed_word = false;
	}

	end_game(answer, word);
}
