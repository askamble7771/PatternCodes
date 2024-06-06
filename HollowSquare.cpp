#include<iostream>
using namespace std;

int main()
{
    int rows, colms;
    cout<<"How many rows:";
    cin>>rows;
    cout<<"How many columns:";
    cin>>colms;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colms; j++)
        {
            if (i==0 || i==rows-1 || j==0 || j==colms-1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}