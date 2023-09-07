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
	cout << "                        ██████╗ ██╗      █████╗ ██╗   ██╗███████╗ █████╗ ██╗██████╗                        " << endl;
	cout << "                        ██╔══██╗██║     ██╔══██╗╚██╗ ██╔╝██╔════╝██╔══██╗██║██╔══██╗                       " << endl;
	cout << "                        ██████╔╝██║     ███████║ ╚████╔╝ █████╗  ███████║██║██████╔╝                       " << endl;
	cout << "                        ██╔═══╝ ██║     ██╔══██║  ╚██╔╝  ██╔══╝  ██╔══██║██║██╔══██╗                       " << endl;
	cout << "                        ██║     ███████╗██║  ██║   ██║   ██║     ██║  ██║██║██║  ██║                       " << endl;
	cout << "                        ╚═╝     ╚══════╝╚═╝  ╚═╝   ╚═╝   ╚═╝     ╚═╝  ╚═╝╚═╝╚═╝  ╚═╝                       " << endl;
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
string padText(string text) {
    if (text.length() % 2 != 0) {
        text += 'X'; // Pad with 'X' if the length is odd
    }
    return text;}
/*****************************************/
string sanitizeInputText(string text) {
    string sanitizedText = "";
    for (char c : text) {
        if (c == ' ')
            continue; // Skip spaces
        if (c == 'J')
            c = 'I'; // Replace 'J' with 'I' as per Playfair rules
        sanitizedText += c;
    }
    return sanitizedText;}
/*****************************************/
string encryptText(const string& input, const string matrix[5][5]) {
    string encryptedText = "";
    for (int i = 0; i < input.length(); i += 2) {
        char c1 = input[i];
        char c2 = input[i + 1];

        if (c1 == 'J')
            c1 = 'I';
        if (c2 == 'J')
            c2 = 'I';

        int row1, col1, row2, col2;
        // Find the positions of c1 and c2 in the matrix
        for (int row = 0; row < 5; ++row) {
            for (int col = 0; col < 5; ++col) {
                if (matrix[row][col][0] == c1) {
                    row1 = row;
                    col1 = col;
                }
                if (matrix[row][col][0] == c2) {
                    row2 = row;
                    col2 = col;
                }
            }
        }

        // Apply Playfair encryption rules
        if (row1 == row2) {
            encryptedText += matrix[row1][(col1 + 1) % 5];
            encryptedText += matrix[row2][(col2 + 1) % 5];
        } else if (col1 == col2) {
            encryptedText += matrix[(row1 + 1) % 5][col1];
            encryptedText += matrix[(row2 + 1) % 5][col2];
        } else {
            encryptedText += matrix[row1][col2];
            encryptedText += matrix[row2][col1];
        }
    }
    return encryptedText;}
/*****************************************/
void playfair() {
    string alphabets[26] = {
        "A", "B", "C", "D", "E", "F", "G", "H", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "I"
    };

    const int mrows = 5;
    const int mcols = 5;
    string matrix[mrows][mcols];

    string key = inputString("Enter Your Key; No Empty Spaces And No Repetition: ");
    toUpper(key);

    // Key repetition and space check
    for (int i = 0; i < key.length(); ++i) {
        for (int j = i + 1; j < key.length(); ++j) {
            if (key[i] == key[j] || key[i] == ' ') {
                disclaimer("Error: Key Must Not Contain Repetitions or Spaces.");
                return;
            }
        }
    }

    // Embedding key into the matrix
    int rows = 0;
    int cols = 0;

    for (char c : key) {
        if (c == 'J')
            c = 'I'; // Replace 'J' with 'I' as per Playfair rules
        matrix[rows][cols] = c;
        cols++;
        if (cols == mcols) {
            cols = 0;
            rows++;
        }
    }

    // Fill the remaining matrix with unused alphabets
    int alphIndex = 0;

    for (int i = rows; i < mrows; ++i) {
        for (int j = cols; j < mcols; ++j) {
            while (key.find(alphabets[alphIndex]) != string::npos) {
                alphIndex++;
            }
            matrix[i][j] = alphabets[alphIndex];
            alphIndex++;
        }
        cols = 0; // Reset cols for the next row
    }

    // Print the matrix
    for (int i = 0; i < mrows; ++i) {
      	cout<< "\033[1;" << 46 << "m" << "\033[1;" << 30 << "m" << "\033[1;" << 53 << "m"  << "| " ;
        for (int j = 0; j < mcols; ++j) {
    		
            cout << matrix[i][j] << " ";
        }
        cout << " |" << "\33[0m" << endl;
    }

    cin.ignore();
    string inputText = sanitizeInputText(getlineString("Enter the text to encrypt: "));
    toUpper(inputText);
    inputText = padText(inputText);

   
    blueLine("Sanitized and Padded Input Text: " , inputText);
    
    string encryptedText = encryptText(inputText, matrix);
    
    blueLine("Encrypted Text: " , encryptedText);}
/*****************************************/
int main() {
	
	system("clear");
	
	header();
	
	disclaimer("Welcome To Playfair Encoder.");

	playfair();

	disclaimer("Copyright © https://github.com/mrblackhearts");

	return 0;}
