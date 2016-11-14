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
		//valid check for first letter is either 0 to 9 or space then left //WTF IS THIS COULD BE SHORTER?
		if (s.at(i) == ' ' || s.at(i) == '0' ||
			s.at(i) == '1' || s.at(i) == '2' ||
			s.at(i) == '3' || s.at(i) == '4' ||
			s.at(i) == '5' || s.at(i) == '6' ||
			s.at(i) == '7' || s.at(i) == '8' ||
			s.at(i) == '9' || s.at(i) > 'A' && s.at(i) < 'Z')
			continue; 		//what is this???
		else
		{
			//convert to capital
			s[i] = s.at(i) - 'a' + 'A'; 	//is this in the book?
		}
	}
	cout << s << endl;
}
/***********************************************
CharConverter::properWords
This function converts the first letter after a
space in the string to uppercase letters.
***********************************************/
void CharConverter::properWords(string s)
{
	//int len = s.length();	//get length of the string function. its returning a int and storing in len.
		
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
	cout << s << endl;
}


/*****************************
		START OF MAIN
******************************/

int main()
{
	CharConverter cc;
	int ch;
	string s;




	cout << "Enter a string" << endl;
	getline(cin, s);
	cout << "1.Uppercase" << endl;
	cout << "2.properWords " << endl;
	cout << "Enter your choice : " << endl;
	cin >> ch;
	// switch case to select the one of two choices
	switch (ch)
	{
	case 1: cc.uppercase(s);
		break;
	case 2: cc.properWords(s);
		break;
	default: cout << "invalid choice";
	}


	//pause system for a while   //WHY????
	system("pause");
	return 0;
}
