 #include <iostream>
 using namespace std;
 int main()
 {
 int num1;
 cout << "Please enter one interger number!" << endl;
 cin >> num1;
 cout << "The nmber is" <<" "<< num1 << endl;
 cout << "The sequence of numbers is:" <<" "<< num1 <<" ";
 while (num1 >> 1)
	{
	if (num1 % 2 ==1)
	{
		num1 = 3* num1 +1;
	    cout << num1 <<" ";
	}
	else
	{
		num1 = num1 /2;
	    cout << num1 <<" ";
	}
	}
 return 0;
 }