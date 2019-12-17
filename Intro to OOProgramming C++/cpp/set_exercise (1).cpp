// This program displays a list of all the unique words found
// in a specified text file.
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>

using namespace std;


int main(void)
{
  // Variables
  string filename,   // To hold the filename
    input;      // To hold an item read from the file

  // File object
  ifstream file;

  // Set to hold the unique words
  set<string> words;

  // Get the name of the file.
  cout << "Enter a filename: ";
  getline(cin, filename);

  // Open the file.
  file.open(filename);

  // While not at the end of the file
  while (file >> input)
    {
      //FILL IN CODE HERE!
    }

  // Close the file.
  file.close();

  // Display the unique words.
  for (string element : words)
    {
      //FILL IN CODE HERE!
    }

  return 0;
}
