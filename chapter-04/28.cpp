// 4.28 Write a program to print the size of each of the built-in types.

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	// void type
	cout << "void: nullptr_t\t" << sizeof(std::nullptr_t) << " bytes" << endl << endl;

	// boolean type
	cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl << endl;

	// character type
	cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
	cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
	cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl;
	cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl << endl;

	// integers type
	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
	cout << "long long:\t" << sizeof(long long) << " bytes" << endl << endl;

	// floating point type
	cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
	cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
	cout << "long double:\t" << sizeof(long double) << " bytes" << endl << endl;

	return 0;
}


