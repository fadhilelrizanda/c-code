#include <iostream>
using namespace std;

int main ()
{
	int banyak_barang;
	string string_count = "masukkan banyak barang : ", string_total = "maka harga totalnya adalah : ", string_name = "ASRIYANI FITNAISY";
	float harga,total_harga;
	harga = 5000;
	cout<<string_count;
	cin>>banyak_barang;
	total_harga = banyak_barang*harga;
	cout<<string_total<<total_harga<<endl;
	cout<<string_name<<endl;
}
