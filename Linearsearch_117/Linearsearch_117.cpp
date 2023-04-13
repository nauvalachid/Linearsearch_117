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