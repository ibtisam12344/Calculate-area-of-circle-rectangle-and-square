#include<iostream>
using namespace std;
int square(int& l)
{
	return  pow(l, 2);
}
int rectangle(float l, float b)
{
	return l * b;
}
int circle(float& r)
{
	return 3.142 * pow(r, 2);
}
int main()
{
	int choice;
	do {
		cout << "1. Area of square." << endl;
		cout << "2. Area of rectangle." << endl;
		cout << "3. Area of circle. " << endl;
		cout << "Enter your choice(1 , 2 or 3)" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			int l;
			cout << "Enter the length = ";
			cin >> l;
			cout << "Area of square is = " << square(l) << endl;
			break;
		}
		case 2:
		{
			float l, b;
			cout << "Enter the length = ";
			cin >> l;
			cout << "Enter the breadth = ";
			cin >> b;
			cout << "Area of circle is = " << rectangle(l, b) << endl;
			break;
		}
		case 3:
		{
			float r;
			cout << "Enter the radius of circle = ";
			cin >> r;
			cout << "Area of circle is = " << circle(r) << endl;
			break;
		}
		default:
		{
			cout << "\nWrong choice , Entered again" << endl;
			break;
		}
		}
	} while (choice != 1 && choice != 2 && choice != 3);


	return 0;
}


