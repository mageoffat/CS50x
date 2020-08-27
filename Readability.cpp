//Coleman-Liau index.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string one = "PUT YOUR WORDS HERE.";
    float letter = 0;
    float word = 1;
    float sentence = 0;
    double ans = 0;
    for(int i=0; i<one.length(); i++){
        if(isalnum(one[i])){
            letter++;
        }
        if(isspace(one[i])){
            word++;
        }
        
        if(one[i]=='.' || one[i]=='?' || one[i]=='!'){
            sentence++;
        }
        
    }
    //cout << letter << endl;
    //cout << word << endl;
    ans = (0.0588*letter*(100/word)) - (0.296 * sentence*(100/word)) - 15.8;
    ans = ans+.5;
    if(ans > 16){
        cout<<"Grade 16+";
    }    
    else if(ans < 1){
        cout<<"Before Grade 1";
    }
    else{
    cout << "Grade " << (int)ans;
    }
    return 0;
}
