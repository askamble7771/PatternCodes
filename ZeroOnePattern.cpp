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
        for (int j = 1; j <= i; j++)
        {
            cout<<k;
            if (k==1)
            {
                k=0;
            }
            else{
                k=1;
            }
            
        }
        cout<<endl;
    }
    return 0;
}