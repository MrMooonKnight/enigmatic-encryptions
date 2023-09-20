#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <iomanip>


using namespace std;

/*****************************************/
void header() {
    cout << "\033[1;" << 40 << "m" << "\033[1;" << 40 << "m";
    cout << "                                                                                                           " << endl;
    cout << "      ███████╗██╗   ██╗██████╗ ███████╗████████╗██╗████████╗██╗   ██╗████████╗██╗ ██████╗ ███╗   ██╗       " << endl;
    cout << "      ██╔════╝██║   ██║██╔══██╗██╔════╝╚══██╔══╝██║╚══██╔══╝██║   ██║╚══██╔══╝██║██╔═══██╗████╗  ██║       " << endl;
    cout << "      ███████╗██║   ██║██████╔╝███████╗   ██║   ██║   ██║   ██║   ██║   ██║   ██║██║   ██║██╔██╗ ██║       " << endl;
    cout << "      ╚════██║██║   ██║██╔══██╗╚════██║   ██║   ██║   ██║   ██║   ██║   ██║   ██║██║   ██║██║╚██╗██║       " << endl;
    cout << "      ███████║╚██████╔╝██████╔╝███████║   ██║   ██║   ██║   ╚██████╔╝   ██║   ██║╚██████╔╝██║ ╚████║       " << endl;
    cout << "      ╚══════╝ ╚═════╝ ╚═════╝ ╚══════╝   ╚═╝   ╚═╝   ╚═╝    ╚═════╝    ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝       " << endl;
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
void blueLine(string txt, int text1){    
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
string shuffleAlphabet(int key) {
    // Define the original alphabet
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    // Ensure the key is within the valid range
    key = (key % 26 + 26) % 26; // Ensure key is between 0 and 25

    // Perform a cyclic shift on the alphabet string
    rotate(alphabet.begin(), alphabet.begin() + key, alphabet.end());

    return alphabet;}
/*****************************************/

/*****************************************/

void substitution(){

    int key;
    string ciphertext = "";
    key = rand() % 26 +1;



    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string shuffledAlphabet = shuffleAlphabet(key);


    string choice = inputString("Enter 'encode' or 'crack' : ");
    cin.ignore();

 
    if (choice == "encode")
    {
        
        string plaintext = getlineString("Enter Your Plain Text : ");
        blueLine("Your Key Is : ", key);
        blueLine("Shuffled Alphabet : ", shuffledAlphabet);
            

        for (int i = 0; i < plaintext.length(); ++i)
        {
            for (int j = 0; j < alphabet.length(); ++j)
            {
                if (plaintext[i] == alphabet[j])
                {
                    ciphertext += shuffledAlphabet[j];
                    break;
                }
            }
        }

        blueLine("Your Cipher Text Is : ", ciphertext);
    }

    if (choice == "crack") {
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        string ciphertext = getlineString("Enter Your Cipher Text : ");

        for (int k = 1; k < 27; ++k) {
            string shuffledAlphabetCrack = shuffleAlphabet(k);
            string cracked = "";

            for (int i = 0; i < ciphertext.length(); ++i) {
                for (int j = 0; j < shuffledAlphabetCrack.length(); ++j) {
                    if (ciphertext[i] == shuffledAlphabetCrack[j]) {
                        cracked += alphabet[j];
                        break;
                    }
                }
            }

            blueLine("Decrypted Cipher Text with key " + to_string(k) + " : ", cracked);
        }
    }






}

int main() {

    srand(time(0));

    header();

    disclaimer("Welcome To Simple Substitution Cipher");

    substitution();

    disclaimer("Talha Asghar, i221554, CY-C");

    return 0;
}
