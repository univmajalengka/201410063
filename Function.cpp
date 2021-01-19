#include<iostream>
using namespace std;
int totaldetik(int j, int m, int d);
int function_waktu (int td);
void tampil (int show);
int main()
{
	cout<<"=========================================="<<endl;
	cout<<"=========================================="<<endl;
	cout<<"====> Function Konversi Total Detik <===="<<endl;
	cout<<"=========================================="<<endl;
	cout<<"=========================================="<<endl;
	int td, waktu,a,b,c,d;
	td=totaldetik(a,b,c);
	tampil(td);
	waktu=function_waktu(td);
	return 0;
}
//function mencari total detik
int totaldetik(int j, int m, int d){
	int td;
	cout<<"Konversi Jam Menit Detik Ke Total Detik"<<endl;
	cout<<"masukan waktu-Nya"<<endl;
	cout<<"masukan jam = ";
	cin>>j;
	cout<<"masukan menit = ";
	cin>>m;
	cout<<"masukan detik = ";
	cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<"total detik-Nya adalah =";
	return td;
}
//function konversi total detik
int function_waktu(int td)
{
	int j, m, sm, d;
	cout<<endl;
	cout<<"Konversi total detik ke jam, menit, detik"<<endl;
	cout<<"masukan total detik :";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<"waktu awal-Nya adalah ="<<j<<"jam :"<<m<<"menit : "<<d<<"detik";
	return 0;
}
void tampil (int show)
{
	cout<<show;
}
