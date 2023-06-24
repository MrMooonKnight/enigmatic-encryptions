#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    srand(time(0));
  
	//size of the sentence

	int size;

	// ASKING THE SIZE OF THE SENTENCE
	
	cout << "\nEnter The Total Size Of Your Sentence In Letters : ";
	cin >> size;
	cout << endl;

	int keysArray[size];

	for (int i = 0; i < size; i++)
	{  
		keysArray[i] = rand() % 40;  //Generate number between 0 to 40
	}
	

	for (int i = 0; i < size; i++)
	{
		cout << keysArray[i] ;
		if(i != size-1)
		{
	            cout << "," ;
		}
  	}
	cout << endl << endl;	


	// CREATION OF INPUT ARRAY
	
	char sentence[size];


    // INPUTTING THE SENTENCE
    cin.ignore(); // Ignore the newline character left in the input buffer
    cout << "Enter The Sentence: ";
    cin.getline(sentence, size); 
	
	cout << endl;
	
	
	// encrypting;
	
	for (int i = 0; i < size; i++)
	{
		sentence[i] -= keysArray[i];
	}
	
	for (int i = 0; i < size; i++)
	{
		cout << sentence[i];	
	}

	
	cout << endl;

    return 0;

}