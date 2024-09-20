#include<iostream>
#include<string>
#include<cctype>
#include<limits>
using namespace std;
// Function to compute GCD
int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
// Function to find modular inverse
int modInverse(int a,int m) {
    a=a%m;
    for(int i=1;i<m;i++)
    {
        if((a*i)%m==1)
        {
            return i;
        }
    }
    return -1; // Modular inverse doesn't exist
}
// Function to decrypt the message
string decrypt(string ciphertext,int key) {
    int keyInverse=modInverse(key,26);
    if (keyInverse==-1) {
        cout<<"Modular inverse doesn't exist. Decryption not possible."<<endl;
        return "";
    }
    string plaintext="";
    for (char c : ciphertext)
    {
        if (isalpha(c))
        {
            char base=islower(c)?'a':'A';
            plaintext+=char(((keyInverse*((c-base)))%26+26)%26+base);
        }
        else
        {
            plaintext+=c; // Non-alphabetical characters remain unchanged
        }
    }
    return plaintext;
}

// Function to perform cryptanalysis
void cryptanalysis(const string& ciphertext)
{
    cout<< "Attempting to decrypt the ciphertext: "<<ciphertext<<endl;
    cout<<"Possible plaintexts:\n";
    for(int key=1;key<26;key++)
    {
        if(gcd(key,26)==1)
        { // Check if key is coprime to 26
            string decrypted=decrypt(ciphertext,key);
            cout<<"Key "<<key<<": "<<decrypted<<endl;
        }
    }
}
int main()
{
    string ciphertext;
    cout<<"Enter the ciphertext: ";
    getline(cin,ciphertext);
    cout<<ciphertext<<endl;
    cryptanalysis(ciphertext);
    return 0;
}
