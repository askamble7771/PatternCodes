#include<iostream>
using namespace std;
//Below is my solution but you can find other better solution in https://youtu.be/k9OlCJFy5yo?si=UcJRaegwDdyC5qVO this video
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int k =1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }

        for (size_t j = 1; j <= n; j++)
        {
            /* code */
            cout<<"*";
        }
        

        cout<<endl;
    }
    return 0;
}