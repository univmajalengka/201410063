#include<iostream>
using namespace std;
int main ()

{
	float diskon0, diskon1, diskon2, diskon3;
	int total_belanja, total_bayar, diskon;
	diskon0 = 0;
	diskon1 = 10;
	diskon2 = 12.5;
	diskon3 = 15;
	
	cout << "Masukan Total Belanja : Rp. ";
	cin >> total_belanja;
	cout <<endl;
	
	if (total_belanja <= 25000){
		diskon = total_belanja * diskon0;
		total_bayar = total_belanja - diskon;
		cout << "Diskon 0%						: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << total_bayar <<endl<<endl;

	}else if (total_belanja <= 50000){
		diskon = total_belanja * diskon1;
		total_bayar = total_belanja - diskon;
		cout << "Diskon 10%						: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << total_bayar <<endl<<endl;
		
	}else if (total_belanja <= 100000){
		diskon = total_belanja * diskon2;
		total_bayar = total_belanja - diskon;
		cout << "Diskon 12.5%					: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << total_bayar <<endl<<endl;
		
	}else if (total_belanja > 100000){
		diskon = total_belanja * diskon3;
		total_bayar = total_belanja - diskon;
		cout << "Diskon 15%						: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << total_bayar <<endl<<endl;
		cout << "Terima kasih, Sudah berbelanja di toko kami";
		
	}
	return 0;
}
