/*   The department of Defense would like a program that identifies candidates
between ages of 18 and 26, inclusive. Only do this  using nested if 
statement whose conditions test the next criterion only if all previous criteria tested 
were satisfied. ( E.g: If a candidates age is 20 years old and he directly puts this age in the program
it will give an error. The program will identify that candidate is eligible when he passes the previous 
criterion. )   */






#include<iostream>
using namespace std;
int main() {

	cout << "\n" << endl;
	cout << "Eligibility criteria ages for candidates are between 18 and 26 inclusive" << endl;
	cout << "Enter the ages accordingly as prompted till u reach your required age." << endl;
	cout << "After that program will tell you to enter next age But you will enter 0 because u have reached your required age" << endl;
	cout << "\n \n" << endl;

	int Age1;
	cout << "Enter 1st age of the eligibility criteria" << endl;
	cin >> Age1;

	int Age2;
	cout << "Enter 2nd age of eligibility criteria " << endl;
	cin >> Age2;

	int Age3;
	cout << "Enter 3rd Age of eligibility criteria" << endl;
	cin >> Age3;

	int Age4;
	cout << "Enter 4th Age of eligibility criteria" << endl;
	cin >> Age4;

	int Age5;
	cout << "Enter 5th Age of eligibility criteria" << endl;
	cin >> Age5;

	int Age6;
	cout << "Enter 6th Age of eligibility criteria" << endl;
	cin >> Age6;

	int Age7;
	cout << "Enter 7th Age of eligibility criteria" << endl;
	cin >> Age7;

	int Age8;
	cout << "Enter 8th Age of eligibility criteria" << endl;
	cin >> Age8;

	int Age9;
	cout << "Enter 9th Age of eligibility criteria" << endl;
	cin >> Age9;

	if (Age1 == 18)
	{
		cout << "18 year old Candidates are eligible" << endl;

		if (Age2 == 19)
		{
			cout << "19 year old Candidates are also eligible" << endl;

			if (Age3 == 20)
			{
				cout << "20 year old Candidates are also eligible" << endl;

				if (Age4 == 21)
				{
					cout << "21 year old Candidates are also eligible" << endl;

					if (Age5 == 22)
					{
						cout << "22 year old Candidates are also eligible" << endl;

						if (Age6 == 23)
						{
							cout << "23 year old Candidates are also eligible" << endl;

							if (Age7 == 24)
							{
								cout << "24 year old Candidates are also eligible" << endl;

								if (Age8 == 25)
								{
									cout << "25 year old Candidates are also eligible" << endl;

									if (Age9 == 26)
									{
										cout << "26 year old Candidates are also eligible" << endl;
										cout << "This Candidate satisfies the required age Criteria for Selection" << endl;
									}
									else
									{
										cout << "This Candidate Satisfies the required age criteria" << endl;
									}

								}
								else
								{
									cout << "This Candidate Satisfies the required age criteria" << endl;
								}

							}
							else
							{
								cout << "This Candidate Satisfies the required age criteria" << endl;
							}

						}
						else
						{
							cout << "This Candidate Satisfies the required age criteria" << endl;
						}

					}
					else
					{
						cout << "This Candidate Satisfies the required age criteria" << endl;
					}

				}
				else
				{
					cout << "This Candidate Satisfies the required age criteria" << endl;
				}

			}
			else
			{
				cout << "This Candidate Satisfies the required age criteria" << endl;
			}

		}
		else
		{
			cout << "This Candidate Satisfies the required age creteria" << endl;
		}

	}
	else
	{
		cout << "Not Eligible" << endl;
	}



} 




