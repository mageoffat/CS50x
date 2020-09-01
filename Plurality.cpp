#include <stdio.h>
#include <iostream>
#include <string>

#define MAX 9

using namespace std;

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate candidates[MAX];

bool vote(string name, int ccount)
{

    for (int i = 0; i < ccount; i++)
    {
        if (candidates[i].name==name)
        {
            candidates[i].votes++;
            return true;
        }
        //cout << candidates[0].votes;
    }

    return false;
}

void print_winner(int ccount)
{
    int maxvotes = 0;

    for (int i = 0; i < ccount; i++)
    {
        if (candidates[i].votes > maxvotes)
        {
            maxvotes = candidates[i].votes;
        }
    }

    for (int i = 0; i < ccount; i++)
    {
        if (candidates[i].votes == maxvotes)
        {
            cout << candidates[i].name << " with " << candidates[i].votes << " votes!";
        }
    }

    return;
}


int main()
{
int ccount=0;
int vcount = 0;
string name;

cout << "How many are going to participate?";
cin >> ccount;
    for (int i = 0; i < ccount; i++)
    {   cin >> name;
        candidates[i].name = name;
        candidates[i].votes = 0;
    }
    cout << "Number of voters: ";
    cin >> vcount;

    for (int i = 0; i < vcount; i++)
    {
        cout << "Vote: ";
        cin >> name;

        if (!vote(name, ccount))
        {
            printf("Invalid vote.\n");
        }
    }

    print_winner(ccount);
return 0;
}


