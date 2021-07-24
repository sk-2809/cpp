#include<simplecpp>

main_program
{
	int fact=1, number;
	int count = 1;

	cout<<"Enter a Number: ";
	cin>>number;

	repeat(number)
	{
		fact*=count;

		cout << count << "! = " << fact << endl;
		count ++;

	}
}
