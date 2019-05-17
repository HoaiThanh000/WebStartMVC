#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

int dem_chuoi_in_hoa(char *p, int dem)
{
	while(*p)
	{
		if(isupper(*p))
		{
			dem++;
		}
		p++;
	}
	return dem;
}
int main()
{
	char s[51];
	char *p;
	cout << "Nhap vao mot chuoi: ";
	cin.getline(s, 51);
	p = s;
	cout << "So ki tu in hoa trong chuoi la: " << dem_chuoi_in_hoa(p, 0) << endl;

	return 0;
}