#include<iostream>
using namespace std;

int main(){

    int i, j, n, key;

    cout<<"Enter the length of the list to be sorted with insertion sort : ";
    cin>>n;             //no. of elements in the list

    int a[n];           //declare the array
    cout<<"Enter the list of "<<n<<" integers";
    for(i = 0; i < n; i++){
        cin>>a[i];
    }

    for( j = 1; j < n; j++){
        i = j-1;
        key = a[j];
        while( i >= 0 && a[i] > key){       //conditions - not the starting of the list and its greater than the one at the pointer
            a[i + 1] = a[i];                //copy the number to the right
            i--;
        }

        a[i + 1] = key;                     //

    }

    for(i = 0; i < n; i++){
        cout<<a[i];
    }

    return 0;
}
