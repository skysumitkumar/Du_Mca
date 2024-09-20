#include<iostream>
#include<string>
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
// Function to encrypt the message
string encrypt(string plaintext,int key)
{
    string ciphertext = "";
    for(char c:plaintext)
    {
        if(isalpha(c))
        {
            char base=islower(c)?'a':'A';
            ciphertext+=char(((key*(c-base))%26)+base);
        }
        else
        {
            ciphertext+=c; // Non-alphabetical characters remain unchanged
        }
    }
    return ciphertext;
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
int main()
{
    int key;
    cout<<"Enter a key (must be coprime to 26): ";
    cin>>key;
    if(gcd(key,26)!=1)
    {
        cout<<"Key must be coprime to 26."<<endl;
        return 1;
    }
    string message;
    cout<<"Enter the message: ";
    cin.ignore();
    getline(cin,message);
    string encrypted=encrypt(message,key);
    cout<<"Encrypted message: "<<encrypted<<endl;
    string decrypted=decrypt(encrypted,key);
    cout<<"Decrypted message: "<<decrypted<<endl;
    return 0;
}