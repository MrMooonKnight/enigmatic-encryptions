#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*****************************************/
void header() {

    cout << "\033[1;" << 40 << "m" << "\033[1;" << 40 << "m";
    cout << "                                                                                                           " << endl;
    cout << "                           ██╗   ██╗██╗ ██████╗ ███████╗███╗   ██╗███████╗██████╗ ███████╗                 " << endl;
    cout << "                           ██║   ██║██║██╔════╝ ██╔════╝████╗  ██║██╔════╝██╔══██╗██╔════╝                 " << endl;
    cout << "                           ██║   ██║██║██║  ███╗█████╗  ██╔██╗ ██║█████╗  ██████╔╝█████╗                   " << endl;
    cout << "                           ╚██╗ ██╔╝██║██║   ██║██╔══╝  ██║╚██╗██║██╔══╝  ██╔══██╗██╔══╝                   " << endl;
    cout << "                            ╚████╔╝ ██║╚██████╔╝███████╗██║ ╚████║███████╗██║  ██║███████╗                 " << endl;
    cout << "                             ╚═══╝  ╚═╝ ╚═════╝ ╚══════╝╚═╝  ╚═══╝╚══════╝╚═╝  ╚═╝╚══════╝                 " << endl;
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
    }   }   
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
void vigenere() {
    string choice = inputString("Enter 'encode' or 'decode': ");
    cin.ignore();
    string text = getlineString("Enter Your Text: ");
    string key = inputString("Enter the Vigenère key: ");
    int textLength = text.length();
    int keyLength = key.length();
    toLower(text);
    toLower(key);

    string result = "";

    for (int i = 0, j = 0; i < textLength; ++i) {
        char c = text[i];
        if (c == ' ') {
            result += c;
        } else {
            char keyChar = key[j % keyLength];
            int shift = keyChar - 'a';
            if (choice == "encode") {
                char encodedChar = 'a' + ((c - 'a' + shift) % 26);
                result += encodedChar;
            } else if (choice == "decode") {
                char decodedChar = 'a' + ((c - 'a' - shift + 26) % 26);
                result += decodedChar;
            }
            j++;
        }
    }

    if (choice == "encode") {
        blueLine("Your Encoded Vigenère Cipher Text Is: ", result);
    } else if (choice == "decode") {
        blueLine("Your Decoded Vigenère Cipher Text Is: ", result);
    }
}

/*****************************************/
int main() {
    system("clear");
    header();
    disclaimer("Welcome To Vigenère Cipher.");
    vigenere();
    disclaimer("Talha Asghar, i221554, CY-C");
    return 0;
}
