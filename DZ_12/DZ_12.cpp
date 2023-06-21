#include <iostream>
using namespace std;

int main()
{
	//1
	int number;
	cout << "Enter number: ";
	cin >> number;
	int c = 0, sum = 0, n;
	if (number != 0) {
		while (number != 0) {
			c++;
			sum += number % 10;
			number /= 10;
		}
		n = sum / c;
		cout << "Digits = " << c << "\nSum = " << sum << "\nAverage = " << n << "\n\n";
	}
	else {
		cout << "Digits = " << c+1 << "\nSum = " << number << "\nAverage = " << number << "\n\n";
	}
	

	//2
	int size;
	cout << "Enter size: ";
	cin >> size;
	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) {
			for (int m = 0; m < size; m++) {
				for (int j = 0; j < 8; j++) {
					if (j % 2 == 0) {
						for (int k = 0; k < size; k++) {
							cout << "*";
						}
					}
					else {
						for (int k = 0; k < size; k++) {
							cout << "_";
						}
					}
				}
				cout << "\n";
			}
		}				
		else {
			for (int m = 0; m < size; m++) {
				for (int j = 0; j < 8; j++) {
					if (j % 2 == 0) {
						for (int k = 0; k < size; k++) {
							cout << "_";
						}
					}
					else {
						for (int k = 0; k < size; k++) {
							cout << "*";
						}
					}
				}
				cout << "\n";
			}
		}
	}


	//3
	int people;
	cout << "Enter number of people: ";
	cin >> people;
	int sum1 = 0, num;
	for ( int i = 0; i < people; i++) {
		do {
			cout << "Menu\nEnter number\n";
			cout << "1 - Cake - 5$\n";
			cout << "2 - Bun - 3$\n";
			cout << "3 - Cola - 2$\n";
			cout << "4 - Sprite - 2$\n";
			cout << "5 - Exit\n";
			cin >> num;
			switch (num)
			{
			default:
				cout << "Wrong number!\n";
				break;
			case 1:
				sum1 += 5;
				break;
			case 2:
				sum1 += 3;
				break;
			case 3:
				sum1 += 2;
				break;
			case 4:
				sum1 += 2;
				break;
			case 5:
				cout << "Exit!\n";
				break;
			}
		} while (num != 5);
	}
	cout << "Sum = " << sum1 << "$" << "\n\n";
	

	//4
	for (int i = 0; i < 10; i++) {
		for (char j = 65; j < 75; j++) {
			cout << j << i;
		}
		cout << "\n";
	}
}

