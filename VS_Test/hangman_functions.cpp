#include <iostream>
#include <vector>

using namespace std;

void greet()
{
	cout << "========================\n";
	cout << "Welcome to Hangman!\n";
	cout << "========================\n";
}

void display_misses(const int misses)
{
	if (misses == 0)
	{
		cout << "  +---+ \n";
		cout << "  |   | \n";
		cout << "      | \n";
		cout << "      | \n";
		cout << "      | \n";
		cout << "      | \n";
		cout << " ========= \n";
	}
	else if (misses == 1)
	{
		cout << "  +---+ \n";
		cout << "  |   | \n";
		cout << "  O   | \n";
		cout << "      | \n";
		cout << "      | \n";
		cout << "      | \n";
		cout << " ========= \n";
	}
	else if (misses == 2)
	{
		cout << "  +---+ \n";
		cout << "  |   | \n";
		cout << "  O   | \n";
		cout << "  |   | \n";
		cout << "      | \n";
		cout << "      | \n";
		cout << " ========= \n";
	}
	else if (misses == 3)
	{
		cout << "  +---+ \n";
		cout << "  |   | \n";
		cout << "  O   | \n";
		cout << " /|   | \n";
		cout << "      | \n";
		cout << "      | \n";
		cout << " ========= \n";
	}
	else if (misses == 4)
	{
		cout << "  +---+ \n";
		cout << "  |   | \n";
		cout << "  O   | \n";
		cout << " /|\\  | \n";
		cout << "      | \n";
		cout << "      | \n";
		cout << " ========= \n";
	}
	else if (misses == 5)
	{
		cout << "  +---+ \n";
		cout << "  |   | \n";
		cout << "  O   | \n";
		cout << " /|\\  | \n";
		cout << " /    | \n";
		cout << "      | \n";
		cout << " ========= \n";
	}
	else if (misses == 6)
	{
		cout << "  +---+ \n";
		cout << "  |   | \n";
		cout << "  O   | \n";
		cout << " /|\\  | \n";
		cout << " / \\  | \n";
		cout << "      | \n";
		cout << " ========= \n";
	}
}

void display_status(vector<char> incorrect, string answer)
{
	if (!incorrect.empty())
	{
		cout << "Incorrect Guesses: ";
		for (const char letter : incorrect)
		{
			cout << letter << " ";
		}
	}

	if (!answer.empty())
	{
		cout << "Correct Guesses: ";
		for (const char letter : answer)
		{
			cout << letter << " ";
		}
	}
}
