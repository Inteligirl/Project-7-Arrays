#include<iostream>
#include<string>



using namespace std;


/*********************************************
		CLASSES
********************************************/
class CharConverter
{
public:
	
	void uppercase(string s);	//Function method prototype passing string object as parameter
	
	
	void properWords(string s);	//Function method prototype passing string object as parameter

};

void welcome();			//Function method prototype for describing program to user


/*******************************
		FUNCTION DEFINITIONS
*******************************/
/***********************************************
	CharConverter::uppercase
This function converts all letters in
the string to uppercase letters.
***********************************************/
void CharConverter::uppercase(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = toupper(s[i]);
	}
	cout << "\nYour string in all uppercase is:\n " << endl << s << endl << endl;
}
/***********************************************
CharConverter::properWords
This function converts the first letter after a
space in the string to uppercase letters.
***********************************************/
void CharConverter::properWords(string s)
{
	for (int i = 0; i < s.length(); i++) //for loop to check if the first character is either lower or upper get convert it
		{
			if (i == 0)
			{
				s.at(i) = toupper(s.at(i));
			}
			else if (s.at(i - 1) == ' ')
			{
				s.at(i) = toupper(s.at(i));
			}
		}
		cout << "\nYour string in proper case is:\n " << endl << s << endl << endl;
}
/***********************************************
Welcome function method
***********************************************/
void welcome()		//state purpose of program to user
{
	string stars;   //output formating created stars object of string class
	stars.assign(45, '*');	//called assign function of string

	cout << "\n" << stars << endl;
	cout << "\nCharacter Converter Class\n" << endl;
	cout << stars << endl;

	cout << "\nThis program will accept a string from user\n";
	cout << "and allow the user to either convert all letters\n";
	cout << "to uppercase or the first letter of each new word.\n" << endl;
}

void formatdash()
{
	string dashes;   //output formating created dashes object of string class
	dashes.assign(45, '-');	//called assign function of string
	cout << endl << dashes << endl;
}

/*****************************
		START OF MAIN
******************************/

int main()
{
	CharConverter cc;
	int menuChoice;
	string s;
	string ch;
	

	welcome();	//call welcome function

	while (ch != "n" && ch != "N")
	{	

		cout << endl << "User please enter a string : ";	//user decides function method to call

		getline(cin, s);

		cout << "\nUser choose which method to use on the string you entered.\n" << endl;
		cout << "Choose 1 to uppercase the entire string." << endl;
		cout << "Choose 2 to uppercase the first letter of each word." << endl;
		cout << "Choose 3 to exit the program." << endl;
		cout << "\nEnter your choice : ";

		cin >> menuChoice;

		formatdash();

		// switch case to select the one of two choices
		switch (menuChoice)		//switch used to call appropriate function
		{
		case 1: cc.uppercase(s);	//calls uppercase function method of object cc in class CharConverter. passing argument s.
			break;
		case 2: cc.properWords(s);	//calls properWords function method of object cc in class CharConverter. passing argument s.
			break;
		case 3: cout << "\nYou have chosen to exit. Goodbye.\n" << endl;
			exit(0);
		default: cout << "\nInvalid selection." << "\nPlease choose either 1, 2, or 3." << endl;
		}

		formatdash();

		cout << "\nWould you like to enter another string?\n";	// user decides to run program again
		cout << "\nEnter 'Y' to continue or 'N' to exit: ";

		cin >> ch;
		cin.ignore();
	}
	
	return 0;
}
