//Substituting a key in to encrypt

#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main()
{
    string substitution = "";
    string upper = "";
    string lower = "";
    string uncrypted = "";
    string encrypted = "";
    cout << "Input the 26 letter key" << endl;
    cin >> substitution;
    if(substitution.size()==26){
    for(int i = 0; i<26; i++){
        upper.push_back(toupper(substitution[i]));
        lower.push_back(tolower(substitution[i]));
    
    }
    cin.ignore(100,'\n');
    getline(cin, uncrypted);
    for(int i = 0; i<uncrypted.size(); i++){
        if(islower(uncrypted[i])){
            encrypted.push_back(lower[uncrypted[i]-'a']);
        }
        else if(isupper(uncrypted[i])){
           encrypted.push_back(upper[uncrypted[i]-'A']);
        }
        else{
            encrypted.push_back(uncrypted[i]);
        }
    }
    cout << encrypted;
    }
    else{
        cout << "Your key needs to be 26 letters" << endl;
    }
    return 0;
}
