#include <iostream> 
#include <iostream> 
using namespace std;

/*int main()
{
	setlocale(LC_ALL, "Russian");
	int n[5];
	int x = 0;
	//Ввод чисел
	for (int i = 0; i < 5; i++) {

		cout << "Введите число";
		cin >> n[i];
	}
	//деление на 5
	for (int i = 0; i < 5; i++) {
		if (n[i] % 5 == 0) {
			x += n[i];
		}
	}
	//Вычисление суммы
	if (x!= 0) {
		cout << "Сумма чисел="<<x;
	}
	else {
		cout << "error" << endl;
	}
	return 0;
} */

/*int main() {
	setlocale(LC_ALL, "Russian");
	int n[5];
	int x = 0;
	int i = 0;
	//Вводиим числа
	while (i < 5) {
		cout << "Введите число";
		cin >> n[i];
		i++;

	}
	i = 0;
	//деление на 5
	while (i < 5) {
		if (n[i] % 5 == 0) {
			x += n[i];
		}
		i++;
	
	}
	//проверка чисел /5 
	if (x != -0) {
		cout << "Сумма чисел"<<x<< endl;
	} 
	else {
		cout << "error" << endl; 

	}
	return 0; 
} */ 
int main() {
	int n[5];
	int x; 
	int i = 0;
	//Ввод чисел 
	do {
		cout << "Введите число";
		cin>>n[i];
		i++;
	} while (i < 5);
	i = 0;
//вычесление суммы 
	do {
		if (n[i] % 5 == 0) {
			x += n[i];

		}
		i++;
	} while (i < 5); 
	//проверка 
	if(x != 0) {
		cout << "Сумма чисел:" << x << endl; 
	}
	else {
		cout << "errror" << endl; 
	}
	return 0;

}