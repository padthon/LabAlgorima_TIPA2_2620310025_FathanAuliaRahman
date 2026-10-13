#include <iostream>
#include <string>
using std ::cout;
using std ::cin;
using std ::endl;
using std ::string;

int main ()
{
	string nama;
	string npm;
	
	cout << "masukan nama : ";
	getline(cin,nama);
	cout << "masukan npm  : ";
	getline(cin,npm);
	
	cout << "nama : " << nama << endl << "npm : " << npm << endl;
	
	return 0;
	
	}	
