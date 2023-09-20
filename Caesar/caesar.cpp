#include <iostream>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std;

/*****************************************/
void header() {

    //cout << "\033[1;" << 40 << "m" << "\033[1;" << 31 << "m";
    cout << "\033[1;" << 40 << "m" << "\033[1;" << 40 << "m";
	cout << "                                                                                                           " << endl;
    cout << "                               ██████╗ █████╗ ███████╗███████╗ █████╗ ██████╗                              " << endl;
    cout << "                              ██╔════╝██╔══██╗██╔════╝██╔════╝██╔══██╗██╔══██╗                             " << endl;
    cout << "                              ██║     ███████║█████╗  ███████╗███████║██████╔╝                             " << endl;
    cout << "                              ██║     ██╔══██║██╔══╝  ╚════██║██╔══██║██╔══██╗                             " << endl;
    cout << "                              ╚██████╗██║  ██║███████╗███████║██║  ██║██║  ██║                             " << endl;
    cout << "                               ╚═════╝╚═╝  ╚═╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝                             " << endl;
    cout << "                                                                                                           " << endl;
                                                    

                                                                                                
	cout << "\033[0m";}
/*****************************************/
void disclaimer(string txt) {
    int length;
    length = txt.length();

    int leftW = 53;
    int rightW = 53;

    leftW += length/2;
    rightW -= length/2;

    cout << "\033[1;" << 40     << "m" << "\033[1;" << 31 << "m" << "\033[1;" << 53 << "m";
    cout << "|" << setw(leftW) << right << txt << setw(rightW)  << "|" << "\033[0m" << endl;}
/*****************************************/
void disclaimer() {
    
        cout << "\033[1;" << 40 << "m" << "\033[1;" << 31 << "m" << "\033[1;" << 53 << "m" << "|" << setw(106) << right  << "|" << "\033[0m" << endl;}
/*****************************************/
string inputString(string text) {
    cout << "\033[1;" << 103 << "m" << "\033[1;" << 90 << "m" << "\033[1;" << 53 << "m";
    cout << "| " << text;
    string temp;
    cin >> temp;
    cout << "\033[0m";
    return temp;}
/*****************************************/
string getlineString(string text) {
    cout << "\033[1;" << 103 << "m" << "\033[1;" << 90 << "m" << "\033[1;" << 53 << "m";
    cout <<"| " <<text;
    string temp;
    getline(cin , temp);
    cout  << "\033[0m";
    return temp;}
/*****************************************/
void blueLine(string txt, string text1){    
    cout << "\033[1;" << 46 << "m" << "\033[1;" << 30 << "m" << "\033[1;" << 53 << "m" << setw(2) << "| " << setw(33) << left  <<  txt << " " << text1 << " " << "\33[0m" << endl;}    
/*****************************************/
void toLower(string & text) {

	int size = text.length();

	for (int i = 0; i < size; ++i)
	{
		if (text[i] >= 65 && text[i] <= 90)
		{
			text[i] += 32;
		}	
	}	}	
/*****************************************/
void toUpper(string & text) {
	int size = text.length();

	for (int i = 0; i < size; ++i)
	{
		if (text[i] >= 97 && text[i] <= 122)
		{
			text[i] -= 32;
		}	
	}}
/*****************************************/

/*****************************************/

/*****************************************/

/*****************************************/
void caesar(){

    string choice = inputString("Enter 'encode' or 'decode' or 'crack' : ");
    cin.ignore();
    string text = getlineString("Enter Your Plain Text : ");
    int length = text.length();
    toLower(text);

    if (choice == "encode")
    {
        for (int i = 0; i < length; ++i)
        {
            if (text[i] == 32)
            {
                continue;
            }
            if(text[i] + 3 <= 122)
            {
                text[i] += 3;
            }
            else
            {
                int temp = (text[i] + 3) % 122;
                text[i] = 96 + temp;
            }
        }
    
        blueLine("Your Encrypted Cipher Text Is : ", text);
    }
    else if (choice == "decode")
    {
        for (int i = 0; i < length; ++i)
        {
            if (text[i] == 32)
            {
                continue;
            }
            if(text[i] - 3 >= 97)
            {
                text[i] -= 3;
            }
            else
            {
                int temp = 97 - (text[i]);
                text[i] = 122 - temp;
            }
        }
        blueLine("Your Decrypted Cipher Text Is : ", text);
    }
    else if (choice == "crack")
    {

        for (int key = 1; key <= 26 ; ++key)
        {
            
            string crack = text;

            for (int i = 0; i < length; ++i)
            {
                if(crack[i] - key >= 97)
                {
                    crack[i] -= key;
                }
                else
                {
                    int temp = 97 - (crack[i] - key);
                    crack[i] = 123 - temp;
                }
            }
            blueLine("Decrypted Cipher Text with key " + to_string(key) + " : ", crack);
        }



    }


}
/*****************************************/
int main() {
	
	system("clear");
	
    header();
	
	disclaimer("Welcome To Caesar Cipher.");

    caesar();


	disclaimer("Talha Asghar, i221554, CY-C");

	return 0;}