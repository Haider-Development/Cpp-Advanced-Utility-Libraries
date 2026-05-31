#include <iostream>
#include "clsDate.h"
#include "clsInputValidate.h"
#include "clsString.h"
#include "clsUtil.h"

using namespace std;

int main()
{
	//
	//Testing (Date & Time) Class-Library Section
	//Note : Most of the methods doesn't need to create an object to use them
	//

	cout << "---------------------------------------------------------------\n";
	cout << "Testing (Date & Time) Class-Library Section\n";
	cout << "---------------------------------------------------------------\n\n";

	clsDate Date1;
	clsDate Date2(1, 6, 2026);

	enCompareDates CompareResult = Date1.CompareDates(Date2);
	if (CompareResult == enCompareDates::eAfter)
	{
		cout << "system Date is after Date 2";
	}

	else if (CompareResult == enCompareDates::eBefore)
	{
		cout << "Date 2 is after system Date";
	}

	else
	{
		cout << "Date 2 is equal to system Date";
	}

	string DateNow = clsDate::ConvertDateToString(clsDate(), "/");
	string TimeNow = clsDate::CurrentTime();

	cout << "\nDate and Time Now : " << DateNow + " : " + TimeNow;

	clsDate Date3;

	cout << "\nDate 3 : ";
	Date3.ConvertStringToDate("1,6,2006", ",");
	Date3.Print();

	cout << "\n\nPress any Key to see String Class-Library ...";
	system("Pause>0");


	//
	//Testing (String) Class-Library Section
	//Note : Most of the methods doesn't need to create an object to use them
	//

	cout << "\n\n---------------------------------------------------------------\n";
	cout << "Testing (String) Class-Library Section\n";
	cout << "---------------------------------------------------------------\n\n";

	clsString FirstName;
	FirstName.Value = "Haider";

	clsString LastName;
	LastName.Value = "Tarraf";

	clsString FullName = clsString::JoinString(FirstName.Value, LastName.Value, " ");
	cout << "Full Name is : " << FullName.Value << endl;

	clsString StringWithSpaces("     Hello, My Name is Haider Tarraf, and i'm a Software Engineer       ");
	cout << "\nString after Trim Left : " << StringWithSpaces.TrimLift();
	cout << "\nString after Trim Right : " << StringWithSpaces.TrimRight();
	cout << "\nString after Full Trim : " << StringWithSpaces.Trim();

	cout << "\n\nNumber of Vowel letters in \"This is a String\" is : " << clsString::CountVowelLetters("This is a String");


	cout << "\n\nPress any Key to see Input Validate Class-Library ...";
	system("Pause>0");

	//
	//Testing (Input Validate) Class-Library Section
	//Note : You can use methods without creating an object
	//

	cout << "\n\n---------------------------------------------------------------\n";
	cout << "Testing (Input Validate) Class-Library Section\n";
	cout << "---------------------------------------------------------------\n\n";

	/*cout << "enter a number : ";
	int Number = clsInputValidate<int>::ReadNumber("Number is invalid ... please enter a valid one : ");

	cout << "\nyour valid Number is : " << Number;*/

	if (clsInputValidate<int>::IsValidDate(Date3))
		cout << "\n\nDate 3 {" << Date3.FormatDate("mm-dd-yyyy") << "} : is valid Date!";

	else
		cout << "\n\nDate 3 {" << Date3.FormatDate("mm-dd-yyyy") << "} : is Not valid Date!";


	if (clsInputValidate<int>::IsValidDate(clsDate(65, 56, 2026)))
		cout << "\n\nDate {" << clsDate::FormatDate(clsDate(65, 56, 2026), "mm-dd-yyyy") << "} : is valid Date!";

	else
		cout << "\n\nDate {" << clsDate::FormatDate(clsDate(65, 56, 2026), "mm-dd-yyyy") << "} : is Not valid Date!";


	cout << "\n\nPress any Key to see Utility Class-Library ...";
	system("Pause>0");


	//
	//Testing (Utility) Class-Library Section
	//Note : You can use methods without creating an object
	//

	cout << "\n\n---------------------------------------------------------------\n";
	cout << "Testing (Utility) Class-Library Section\n";
	cout << "---------------------------------------------------------------\n\n";


	//we must use srand function before generating any random operation
	clsUtil::Srand();

	int RandomNumber = clsUtil::RandomNumber(20, 30);
	cout << "Your random number is : " << RandomNumber;

	char RandomCharacter = clsUtil::GetRandomCharacter(enCharacterType::smallletter);
	cout << "\nYour random Character is : " << RandomCharacter;

	string EncryptedText = clsUtil::Encryption("Hi, My Name is Haider", 4);
	cout << "\nYour Text after Encyption : " << EncryptedText;

	cout << "\nYour Text after Decryption : " << clsUtil::Decryption(EncryptedText, 4) << endl;

	system("Pause>0");
	return 0;
}