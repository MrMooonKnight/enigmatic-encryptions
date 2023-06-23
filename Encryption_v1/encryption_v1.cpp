// Encryption_v1
// @mrblackhearts

#include <iostream>

using namespace std;

int main ()
{

	char a,b,c,d,e,f,g,h,i,j;

	cout <<  "\nEnter Your Sentence : " << endl << endl;
	cout << "\n ==>  ";

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	cin >> g;
	cin >> h;
	cin >> i;
	cin >> j;

	cout << "\n\n\nYou Have Entered : " <<endl;
	cout << "==>  " << a << b << c << d << e << f << g << h << i << j << endl; 

	cout << "\nEncrypting...";
	
	
	// ENCRYPTING
	
	a = a - 15;
	b = b -23;
	c = c + 45;
	d = d + 68;
	e = e - 20;
	f = f + 11;
	g = g - 8;
	h = h + 12;
	i = i - 56;
	j = j + 10;
	


	cout << "==>  " << a << b << c << d << e << f << g << h << i << j <<endl <<endl;

	return 0;

}