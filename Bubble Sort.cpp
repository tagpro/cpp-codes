#include<iostream>
#include<cmath>
#include<string>

using namespace std;


int main(){
    //Initialising the no. of Elements
    cout<<"Enter the Number of Elements";
    int n,i;
    cin>>n;
    int a[n];
    //taking n no. of elements
    for(i = 0; i < n; i++){
        cout<<"\nEnter number "<<i+1<<"-->";
        cin>>a[i];
    }
    //bubble sort
    for(i = 0; i < n; i++)
    for(int j = 0; j < n-1-i; j++){
        if(a[j]>a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
    //display result
    for(i = 0; i < n; i++){
        cout<<endl<<i+1<<". "<<a[i];
    }

    return 0;
}
