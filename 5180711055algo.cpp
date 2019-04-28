#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int  B[10],N[10],jum, ganti, hapus, cari, ketemu = 0;

ulang:
	cout << "inputan jumlah data : ";
	cin >> jum;

	if (jum> 9 )
	{
		cout << "\nMaaf, max jumlah data adalah 10!\n\n";

		goto ulang;
	}
	else
	{
		for (int i = 0; i<jum; i++)
		{
			cout << i + 1 << " .NIM 2 digit terakhir :";
			cin >> B[i];
			cout << "Nilai" << i + 1 << " : ";
			cin >> N[i];
		}
        cout << "\nData yang telah dimasukkan : ";
		for (int j = 0; j<jum; j++)
		{
			cout << "\nNIM[" << j << "]= " << B[j];
			cout << "\nNilai[" << j << "]= " << N[j];
		}
	}
	cout << "\n\nMasukkan  data yang akan diubah = "; cin >> ganti;

	for (int g = 0; g<jum; g++)
	{
		if (B[g] == ganti)
		{cout << "Masukka nim baru = "; cin >> B[g];}
		else if (N[g] == ganti)
		{cout << "Masukka data baru = "; cin >> N[g];}
	}

    cout << "\n\nData setelah diubah";
	for (int h = 0; h<jum; h++)
	{
		cout << "\nNIM[" << h << "]= " << B[h];
		cout << "\nNILAI[" << h << "]= " << N[h];
	}

	cout << "\n\ninputan nilai yang akan dihapus = ";
	cin >> hapus;

	for (int j = 0; j < jum; j++)
	{
		if (hapus == N[j])
		{
        for (int k = j ; k < jum; k++)
        {
        N[k];
        }

        jum -= 1;
        break;
		}

    else if (hapus == B[j])
		{

        for (int k = j ; k < jum; k++)
        {
        B[k];
        }

        jum -= 1;
        break;
		}
	}

	cout << "\n\nData Baru :";
	for (int p = 0; p<jum; p++)
	{
		cout << "\nNim[" << p << "]= " << B[p];
		cout << "\nNilai[" << p << "]= " << N[p];
	}

	cout << "\n\n masukan data yang akan dicari = "; cin >> cari;
	for (int n = 0; n<jum; n++) {
		if (cari == B[n])
            {


	cout << "\nNilai " << cari << " ditemukan pada index = " << n <<endl;
    ketemu = 1;
    break;
		}

		else if (cari == N[n])
            {


	cout << "\nNilai " << cari << " ditemukan pada index = " << n <<endl;
    ketemu = 1;
    break;
		}
	}

	if (ketemu == 0) cout << "data yg dicari tidak tersedia";




}
