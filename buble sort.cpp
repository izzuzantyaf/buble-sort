#include <iostream>

using namespace std;

// deklarasi fungsi pengurutan menggunakan algoritma bubble sort
int bubbleSort(int data[], int n) {

	// deklarasi variabel untuk iterator
	int i, j;

	// deklarasi variabel sementara pembantu pengurutan
	int temp;

	/////////// ALGORITMA BUBBLE SORT
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < (n - i - 1); j++) {
			if (data[j]>data[j+1])
			{
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
	/////////// akhir dari ALGORITMA BUBBLE SORT
	return 0;
}

int main()
{
	// deklarasi array dan variabel
	int data[20],n;

	// input jumlah data dari user
	cout << "Masukkan jumlah data yang anda inginkan : "; cin >> n;

	// mendefiniskan jumlah elemen array data[] sebanyak yang user inginkan
	data[n];

	// input nilai-nilai yang akan diurutkan/disorting
	cout << endl << "Masukkan data-data anda" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << i + 1 << ": "; cin >> data[i];
	}

	// pengurutan data yang telah user inputkan
	bubbleSort(data, n);

	// menampilkan data setelah diurutkan
	cout << endl << "Data setelah diurutkan" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << i + 1 << ": " << data[i]<<endl;
	}

	return 0;
}