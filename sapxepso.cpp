#include <iostream>
using namespace std;
int main()
{
	int Array[10];
	cout << "Sap xep so trong mang!!!\n";
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Nhap so thu " << i + 1 << ": ";
		cin >> Array[i];
	}

	int n;
	for (int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10;j ++)
			if (Array[j] < Array[j - 1])
			{
				n = Array[j];
				Array[j] = Array[j - 1];
				Array[j - 1] = n;
			}
	}
	cout << "Gia tri lon nhat: " << Array[9];
	cout << "\nGia tri nho nhat: " << Array[0];
	cout << endl;
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << Array[i] << " ";
	}
}