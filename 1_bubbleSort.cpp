// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int i=0;
    int j=0;
    int temp;
    int a[4]={6,0,3,5};
    int n=4;
    int swapped=1;
    for(i=0;i<n-1&&swapped;i++)
    {
        swapped=0;
        for(j=0;j<(n-1-i);j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=1;
            }
        }
    }
     for (int x : a)
        cout<<x<<" ";

    return 0;
}
