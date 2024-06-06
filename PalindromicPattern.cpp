#include<iostream>
using namespace std;
//Below is my solution but you can find other better solution in https://youtu.be/k9OlCJFy5yo?si=UcJRaegwDdyC5qVO this video
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for (int k=i; k>=1;k--)
        {
            /* code */
            cout<<" "<<k;
        }
        
        for (size_t k = 2; k <= i; k++)
        {
            /* code */
            cout<<" "<<k;
        }
        

        cout<<endl;
    }
    return 0;
}