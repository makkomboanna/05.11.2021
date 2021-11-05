//Стасюк Анна П13121
#include<iostream>
using namespace std;
int main() {
	/*
	* for1
	*/
	/*int K, N;
	cout << "Number K: ";
	cin >> K;
	cout << "Number N: ";
	cin >> N;
	for (int i = 0; i < N; i++)
		cout << K << " ";*/

	/*
	* for2
	*/
	/*int A, B;
	cout << "Number A: ";
	cin >> A;
	cout << "Number B: ";
	cin >> B;
	int c = 0;
	for (int i = A; i <= B; i++) {
		cout << i << " ";
		c++;
	}
	cout << endl;
	cout << "Number of integers: " << c;*/

	/*
	* for3
	*/
	/*int A, B;
	cout << "Number A: ";
	cin >> A;
	cout << "Number B: ";
	cin >> B;
	int c = 0;
	for (int i = B - 1; i > A; i--) {
		cout << i << " ";
		c++;
	}
	cout << endl;*/

	/*
	* for4
	*/
	srand((int)time(0));
	float price;
	price = (rand() % 10000) / 100.0;
	cout << "Price for 1 kg: " << price << endl;
	float cost = 0;
	for (int i = 1; i <= 10; i++) {
		cost += price;
		cout << std::fixed;
		cout << std::setprecision(2);
		cout << i << " kg : price -> " << cost << endl;
	}



	return 0;
}
