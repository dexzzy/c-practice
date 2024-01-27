// c++ practice
//Sum Practice
#include<iostream>
using namespace std;
/*
 Four Parts of Program
 Step 1) Declare Variables to store data
 Step 2) Get Input from user
 Step 3) Process Input
 Step 4) Display Output
*/
int main()
{
	//Step 1
	int num1;
	int num2;
	int sum;
	int diff;

	//Step 2
	cout << " Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	//Step 3
	sum = num1 + num2;
	diff = num1 - num2;

	//Step 4
	cout << " The sum is " << sum << endl;
	cout << "The diff is " << diff << endl;

	system("pause");
	return 0;
}
