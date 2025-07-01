#include <iostream>
#include <stdio.h>
using namespace std;

void sum(int n)
{
    float sum =0;
    float S[12][12];
    for(int j = 0; j<=11; j++)
    {
        cin >> S[n][j];
    }

    //cout << "entered";
    for(int j = 0; j<=11; j++)
    {
        sum = sum + S[n][j];
    }
    cout << endl << sum << endl;
}

void avg(int n)
{
    float sum =0;
    float M[12][12];
    for(int j = 0; j<=11; j++)
    {
        cin >> M[n][j];
    }

    //cout << "entered";
    for(int j = 0; j<=11; j++)
    {
        sum = sum + M[n][j];
    }
    cout << endl << sum/12.0 << endl;
}

int main()
{
    int n;
    char ch;
    //cout << "Indicate the line for operation\n";
    cin >> n;
g:
    //cout << "Indicate the operation type for n\n(S or M)\n";

    cin >> ch; // S or M


    if(ch == 'S')
    {
        sum(n);
    }
    else if(ch == 'M')
    {
        avg(n);
    }
    else
    {
        goto g;
    }


    return 0;
}
