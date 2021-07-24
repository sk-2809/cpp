#include<simplecpp>

main_program
{
	int i = 1, fact=1, number;
	int count = 1;

	cout<<"Enter a Number: ";
	cin>>number;

	repeat(number)
	{
		i=1;
		fact=1;

		repeat(count)
		{
			fact = fact*i;
			i++;
		}

		cout << count << "! = " << fact << endl;
		count ++;

	}
}
