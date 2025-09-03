#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <limits.h>
using namespace std;

int main(int argc, char* argv[]) 
{
	int words{0};
	string shortest_word;
	int min_length{INT_MAX};
	string longest_word;
	int max_length{INT_MIN};
	double average_length;
	int length_sum{0};

	if (argc != 2) 
	{
		cerr << "Only one command line argument expected";
		exit(1);
	}


	ifstream file( argv[1] );

	if (!file.is_open()) 
	{
		cerr << "Failed to open file.";
		exit(1);
	}

	string s;
	int word_length;
	while (file >> s) 
	{
		word_length = s.size();
		if (word_length < min_length) shortest_word = s;
		min_length = min(word_length, min_length);
		if (word_length > max_length) longest_word = s;
		max_length = max(word_length, max_length);

		length_sum += word_length;
		words++;
	}
	file.close();
	average_length = (double) length_sum / words;


	cout << "There are " << words << " words in the file." << endl;
	cout << "The shortest word was \"" << shortest_word << "\" with " << min_length << " character(s)." << endl;
	cout << "The longest word was \"" << longest_word << "\" with " << max_length << " character(s)." << endl;
	cout << "The average length was " << fixed << setprecision(2) << average_length << " character(s)." << endl;
	return 0;
}

