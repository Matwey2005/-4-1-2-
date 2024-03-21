#include <iostream>
using namespace std; 
int main() {

	setlocale(LC_ALL, "Russian");
	int n[5]; 
	int pol;
	int otr; 
	for (int i = 0; i < 5; i++) {
		cout << "Введите число ";
			cin>> n[5];
		if (n[i] > 0) {
			pol++;
		}
		else if (n[5] < 0) {
			otr++;
		}
	}
	if (pol == 0 && otr == 0) {
		cout << "error" << endl; 
	}
	else {
		cout << "Количество положительных чисел" << pol << endl;
		cout << "Количество отрицательных чисел" << otr << endl; 
	}
	return 0; 
}