#include <iostream>
#include<map>
#include<stack>
#include<vector>
#include<algorithm>
#include <fstream>
#include<cstdlib>
using namespace std;

vector<string> guess;

string getguess()
{
    int ind = rand() % 6;
    return guess[ind];
}
int main()
{
    guess.push_back("Cherries");
    guess.push_back("Oranges");
    guess.push_back("Plums");
    guess.push_back("Bells");
    guess.push_back("7's");
    guess.push_back("Bars");

    cout<<"Enter the amount of money inserted."<<endl;
    int money;
    cin>>money;
    cout<<getguess()<<endl;
    cout<<getguess()<<endl;
    cout<<getguess()<<endl;

    return 0;
}
