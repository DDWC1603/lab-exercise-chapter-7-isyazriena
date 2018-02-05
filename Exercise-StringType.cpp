//compare two strings
//complete the program below. 

#include <iostream>
using namespace std;

int main()
{

	string myName="Syaz";//write your name there.
	//make a while loop until user input 'quit' to exit/end the program

	while (true)
	{
		
		string userName;
		//get the user input for string.
		cout << "Insert name: " << endl;
		cin >> userName;
		
		if (userName=="Abu")
	       	{
			cout << "Hey Abu!" << endl;
			}
		else if (userName=="quit")
		{
			cout << endl;
			break;
		}
		else
		{
			cout << "Aha! its " << myName << endl;
		}
	}
	return 0;
}

