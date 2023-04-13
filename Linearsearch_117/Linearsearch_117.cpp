#include <iostream>
using namespace std;

int arr[20];
int n;
int i;


void input()
{
	while (true)
	{
		cout << "Masukkan jumlah elemen dalam array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray harus memiliki minimal 1 dan maksimal 20 elemen.\n\n";
	}


	cout << "\n-------------------\n";
	cout << " memasukkan elemen array \n";
	cout << "---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}



void LinearSearch()
{
	char ch;
	int ctr;

	do
	{

		cout << "\nMasukkan elemen yang ingin Anda cari: "; //Langkah no 1 Algoritma
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)								//Langkah no 2 & 3 & 4 Algoritma
		{
			ctr++;
			if (arr[i] == item)								//Langkah no 5 Algoritma
			{
				cout << "\n" << item << " Ditemukan di posisi " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << " tidak ditemukan dalam array\n";
		cout << "\nJumlah perbandingan: " << ctr << endl;

		cout << "\nLanjutkan pencarian (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}


int main()
{
	input();
	LinearSearch();
}