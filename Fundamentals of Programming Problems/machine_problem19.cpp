#include <iostream>
using namespace std;

int main() {
	int TF, m_payment, total_tf;
	
	cout << "Enter Tuition Fee: ";
	cin >> TF;
	cout << endl;
	cout << "Press 1 for Cash \n2 for Two installment \n3 for Three Installment) \nPress Enter mode of payment: ";
	cin >> m_payment;
	total_tf = TF + (TF *0.05);
	
	
	if (m_payment == 1) {
		cout << "Your Total Tuition Fee is : " << TF - (TF *0.10);
	}

	else if (m_payment == 2) {
		cout << "Your Total Tuition Fee is : " << TF - (TF *0.05);
	}
	else if (m_payment == 3) {
		cout << "Your Total Tuition Fee is : " << TF + (TF *0.05);
	}
	return 0;
}
