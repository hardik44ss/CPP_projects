#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

//Function to create password
string getPassword(int length){
    string password = "";
    //characters : a-z, A-Z, 0-9
    string characters = "aquickbrownfoxjumpsoverthelazydogAQUICKBROWNFOXJUMPSOVERTHELAZYDOG0123456789";
    int charLen = characters.length();

    //Seed for random function to generate random number as a function of time
    srand(time(0)); 
    int randomNum;
    for(int i=0 ; i<charLen ; i++){
        //Generate random number
        randomNum = rand() % charLen; 
        password += characters[randomNum];
    }
    return password;

}

int main () 
{
    int length;
    cout<<"\n\nEnter length of your Password : ";
    cin>>length;
    string password = getPassword(length);
    cout<<"\nYour password is : "<<password;

    return 0;
}