#include<iostream>
#include<string>
#include<limits>
using namespace std;
// Function to encrypt the text using additive cipher
string encrypt(string text,int shift,int bound)
{
    string result="";
    for(int i=0;i<text.length();i++)
    {
        // Check if character is uppercase
        if(isupper(text[i]))
        {
            result+=char(int(text[i]+shift-65)%bound+65);
        }
        // Check if character is lowercase
        else if(islower(text[i]))
        {
            result+=char(int(text[i]+shift-97)%bound+97);
        }
        // For non-alphabetic characters add them without modification
        else
        {
            result+=text[i];
        }
    }
    return result;
}
// Function to decrypt the text using additive cipher
string decrypt(string text,int shift,int bound)
{
    string result="";
    // Loop through each character in the text
    for(int i=0;i<text.length();i++)
    {
        // Check if character is uppercase
        if(isupper(text[i]))
        {
            result+=char((int(text[i]-shift-65+bound)%bound)+65);
        }
        // Check if character is lowercase
        else if(islower(text[i]))
        {
            result+=char((int(text[i]-shift-97+bound)%bound)+97);
        }
        // For non-alphabetic characters add them without modification
        else
        {
            result+=text[i];
        }
    }
    return result;
}
int main()
{
    string text;
    int shift;
    int choice;
    int bound;
    cout<<"Enter your character bound: ";
    cin>>bound;
    char range='a'+(bound-1);
    char range1='A'+(bound-1);
    cout<<"Enter the text that contain letters from a,A to "<<range<<","<<range1<<" character: ";
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,text);
    cout<<endl<<"Enter the shift (key): ";
    cin>>shift;
    cout << "1. Encrypt\n2. Decrypt\nChoose an option (1/2): ";
    cin >> choice;
    if(choice==1)
    {
        string encrypted=encrypt(text,shift,bound);
        cout<<"Encrypted Text: "<<encrypted<<endl;
    }
    else if(choice==2)
    {
        string decrypted=decrypt(text,shift,bound);
        cout<<"Decrypted Text: "<<decrypted<<endl;
    }
    else
    {
        cout<<"Invalid choice!"<<endl;
    }
    return 0;
}