#pragma once

#include <iostream>
#include "clsDate.h"
using namespace std;

template <class T>
class clsInputValidate
{
public:

	static bool IsNumberBetween(T Number, T From, T To)
	{
		return (Number >= From && Number <= To);
	}

	static T ReadNumber(string ErrorMessage)
	{
		int X = 0;

		cin >> X;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << ErrorMessage;
			cin >> X;
		}

		return X;
	}

	static T ReadNumberBetween(T From, T To, string ErrorMessage)
	{
		int Number = 0;

		do
		{
			Number = ReadNumber("Invalid Number, Please enter a valid one.");

			if (Number < From || Number > To)
				cout << ErrorMessage;

		} while (Number < From || Number > To);

		return Number;
	}

	//Sample Of Reusability

	/*static int ReadIntNumberBetween(int From, int To, string Message)
	{
		int Number = ReadIntNumber("Invalid Number, Please enter a valid one.");

		while (!IsNumberBetween(Number, From, To))
		{
			cout << Message;

			Number = ReadIntNumber("Invalid Number, Please enter a valid one.");
		}

		return Number;
	}*/

	static bool IsDateBetween(clsDate Date, clsDate DateStart, clsDate DateEnd)
	{
		if (clsDate::IsDate1AfterDate2(DateStart, DateEnd))
			clsDate::SwapDates(DateStart, DateEnd);

		return (
			clsDate::CompareDates(Date, DateStart) == enCompareDates::eAfter
			&&
			clsDate::CompareDates(Date, DateEnd) == enCompareDates::eBefore
			);
	}

	static bool IsValidDate(clsDate Date)
	{
		return clsDate::IsValidateDate(Date);
	}

	static string ReadString(string Message)
	{
		string Sub = "";

		cout << Message;
		getline(cin >> ws, Sub);

		return Sub;
	}
};

