#include<iostream>
using namespace std;

struct SP
{
	char ma_san_pham[21];
	char ten_san_pham[21];
	char ten_kho[21];
	float don_gia;
	int so_luong;
};
void nhap_ds_sp(SP *sp, int n);
void xuat_ds_sp(SP *sp, int n);
int dem_sp_ten_kho(SP *sp, int n);
void nhap_1_sp(SP &sp);

int main()
{
	const int max = 10;
	SP * sp;
	int n, x;
	do {
		cout << "Nhap vao so luong san pham: ";
		cin >> n;
		if(n < 1 || n > max)
			cout << "Nhap sai! Nhap lai!\n";
	} while ( n < 1 || n > max);
	sp = new SP[n];
	cout << "***Nhap thong tin cua " << n << " san pham***" << endl;
	nhap_ds_sp(sp ,n);
	cout << "**Thong tin cua " << n << " san pham vua nhap la***\n" << endl;
	xuat_ds_sp(sp, n);
	if( dem_sp_ten_kho(sp ,n) == 0)
	{
		cout << "Khong co san pham nao ten kho la TPHCM!";
	}
	else
	{
		cout << "Co " << dem_sp_ten_kho(sp, n) << " san pham co ten kho la TPHCM";
	}

	do{
		cout << "\n+ Ban muon sua thong tin san pham thu may: ";
		cin >>x;
		if( x < 0 || x > n)
			cout << "San pham ban vua tim khong co trong danh sach!\n";
	} while( x < 0 || x > n);
	nhap_1_sp(*(sp + x - 1));
	cout << "***Thong san pham sau khi sua la***" << endl;
	xuat_ds_sp(sp, n);

	delete sp;
	sp = nullptr;
	return 0;
}

void nhap_1_sp(SP &sp)
{
	cin.ignore();
	cout << "Nhap vao ma san pham: ";
	cin.getline(sp.ma_san_pham, 21);
	cout << "Nhap vao ten san pham: ";
	cin.getline(sp.ten_san_pham, 21);
	cout << "Nhap vao ten kho: ";
	cin.getline(sp.ten_kho, 21);
	cout << "Nhap vao don gia: ";
	cin >> sp.don_gia;
	cout << "Nhap vao so luong: ";
	cin >> sp.so_luong;
}

void nhap_ds_sp(SP *sp, int n)
{
	for(int i = 0; i < n;i++)
	{
		cout << "+ Nhap vao thong tin san pham thu " << i + 1 << endl;
		nhap_1_sp(*(sp + i));
		cout << endl;
	}
}

void xuat_1_sp(SP &sp)
{
	cout << "Ma san pham la: " << sp.ma_san_pham << endl;
	cout << "Ten san pham la: " << sp.ten_san_pham << endl;
	cout << "Ten kho la: " << sp.ten_kho << endl;
	cout << "Don gia la: " << sp.don_gia << endl;
	cout << "So luong la: " << sp.so_luong << endl;
}

void xuat_ds_sp(SP *sp, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "+ Thong tin san pham thu " << i + 1 << endl;;
		xuat_1_sp(*(sp + i));
		cout << endl;
	}
}

int dem_sp_ten_kho(SP *sp, int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
		if( ((sp+i)->ten_kho) == "TPHCM")
		{
			dem++;
		}
	return dem;
}
