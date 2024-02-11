//word frequency counter using hash table
//unordered map

#include <iostream>
#include <unordered_map>
#include <sstream>
#include <algorithm>

using namespace std;

class WordFrequencyCounter {
	
	private: unordered_map<string, int> wordFrequency;

		static string toLowerCase(const string& str) 
		{
			string result = str;
			transform(result.begin(), result.end(), result.begin(), ::tolower);
			return result;
		}

	public: void processText(const string& text) 
	{
			istringstream iss(text);
			string word;

			while (iss >> word) 
			{
				word = toLowerCase(word);
				wordFrequency[word]++;
			}
		}

		void displayWordFrequencies(const string& inputText) const 
		{
			istringstream iss(inputText);
			string word;

			while (iss >> word) 
			{
				const string& lowercaseWord = toLowerCase(word);
				int frequency = wordFrequency.at(lowercaseWord);
				cout << lowercaseWord << " : " << frequency << " times\n";
			}
		}
};

int main() {
	cout << "Sayli Dholam_A_16\n";
	cout << "DSA Mini Project : \n";
	cout << "\n----------------------------------------\n\n";

	string inputText = " ";
	cout << "Enter sentence : \n";
	getline(cin, inputText);
	cout << "\n\n";

	WordFrequencyCounter wordCounter;
	wordCounter.processText(inputText);
	wordCounter.displayWordFrequencies(inputText);

	return 0;
}

