#include <iostream>
#include <string>
using namespace std;
// Function to decrypt the text with a given shift
string decrypt(const string &ciphertext,int key)
{
    string decryptedText="";
    for(char c:ciphertext)
    {
        // Check if the character is uppercase
        if(isupper(c))
        {
            decryptedText+=char(int(c-key-'A'+26)%26+'A');
        }
        // Check if the character is lowercase
        else if(islower(c))
        {
            decryptedText+=char(int(c-key-'a'+26)%26+'a');
        }
        // Non-alphabetic characters remain unchanged
        else
        {
            decryptedText+=c;
        }
    }
    return decryptedText;
}
int main()
{
    string ciphertext;
    // Input the ciphertext
    cout<< "Enter the ciphertext: ";
    getline(cin,ciphertext);
    cout<< "\nAttempting to decrypt using all possible keys:\n";
    for(int key=1;key<=26;key++)
    {
        string decryptedText=decrypt(ciphertext,key);
        cout<<"Key "<<key<<": "<<decryptedText<<endl;
    }
    return 0;
}