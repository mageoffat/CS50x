//Caesar Scrambled
#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main()
{
    int k = 0; //rotation
    string sentence = "";
    string csentence = "";
    
    cout << "What do you want scrambled ";
    getline(cin,sentence);

    cout << "What do you want the alpha rotated by? ";
    cin >> k;
    //Algorithm (Alpha-A+k)%26+A
    //Algorithm (alpha-a+k)%26+a
    //cout << sentence.size();
    for(int i = 0; i<sentence.size(); i++){

        if(isalpha(sentence[i])){
            if(isupper(sentence[i]))
            {
            csentence.push_back((sentence[i]-'A'+k)%26+'A');
            }
            else{
            csentence.push_back((sentence[i]-'a'+k)%26+'a');    
            }
        }
        else{
            csentence.push_back(sentence[i]);
        }
    }
    cout << csentence;
    return 0;
}
