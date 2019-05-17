#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int a;
	int dem_chan, dem_le;
	cout << "Nhap vao 1 so nguyen: ";
	cin >> a;
	ofstream out_data;
	ifstream in_data;

	out_data.open("BaiThi.txt", ios::app);
	in_data.open("BaiThi.txt");

	if(out_data.is_open())
	{
		out_data << a << "#";
		cout << "Ghi file thanh cong." << endl;
		out_data.close();
	}
	if(in_data.is_open())
	{
		in_data >> a;
		cin.ignore('#');
		if(a % 2 == 0)
		{
			dem_chan++;
		}	
		else
		{
			dem_le++;
		}
		cout << "Co " << dem_chan << " so chan trong file." << endl;
		cout << "Co " << dem_le << " so le trong file." << endl;
		in_data.close();
	}
	return 0;
}