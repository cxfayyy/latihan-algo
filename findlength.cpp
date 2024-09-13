// C++ program to find length
// of a string
#include <iostream>
#include <string.h>
using namespace std;

// Driver code
int main()
{
	int i;

	// String obj
	string str = "GeeksforGeeks";

	// The constructor of string will set it to the
	// C-style string,
	// which ends at the '\0'

	// size of string object using for loop
	// for(; NOT NULL
	for (i = 0; str[i]; i++);
	cout << i << endl;

	return 0;
}
