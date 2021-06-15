#include<iostream>
#include<sstream>
#include<string>
#include<list>
using namespace std;

int SUM = 0;

int letter_ascii();
char ascii_letter();
void getletter();
void getwords();
void sets();

char ascii_letter(int a) //get letter from ascii
{
    char c = char(a);
    return c;
}

int letter_ascii(char c) //get ascii
{
    int a = int(c);
    return a;
}

void getletters(string str) // get alphabets
{
    char ch;
    int l = str.length();
    for (int i = 0; i < l; i++) 
    {
        ch = str.at(i);
        SUM = SUM + letter_ascii(ch); //sum of ascii
    }
    sets(SUM);
    //cout << SUM << endl;  //to check if function works
    SUM = 0;
}

void getwords(string str) //get words from sentence
{
    string word;
    stringstream iss(str);
    while (iss >> word)
        getletters(word);
        //cout << word << endl; //to check if fuction works
}

void sets(int s)
{

}

int main()
{
    string sen;
    getline(cin, sen);
    
    getwords(sen);

    return 0;
}