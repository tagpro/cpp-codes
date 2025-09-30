#include<iostream>
using namespace std;

void merg(int A[], int p, int q, int r){
    int i, n1 = q - p + 1;
    int n2 = r - q;
    int L[n1 + 1], R[n2 + 1];
    //cout<<endl<<"4  \n"<<n1<<endl<<n2<<endl;

    for(i = 0; i < n1; i++){
        L[i] = A[p+i];
        // cout<<endl<<"1asdasd  "<<L[i];


    }

    for(i = 0; i < n2; i++){
        R[i] = A[q+i+1];
        //cout<<endl<<"2  "<<R[i];

   // cout<<endl<<"asdasdasddasdasd  "<<R[i];

    }


    L[n1] = 222222222;     // Setting the upper limit for merging
    R[n2] = 222222222;

   /* for(i = 0; i < n1+1; i++){
        cout<<endl<<"Left "<<i<<" "<<L[i];
    }
    for(i = 0; i < n2 + 1; i++){
        cout<<endl<<"Right "<<i<<" "<<R[i];
    }*/

    int j = 0, k = 0, temp;
    for(i = p; i <= r; i++){
        if(L[j] <= R[k]){
            A[i] = L[j];
            j++;
        }
        else if(L[j] > R[k]){
            A[i] = R[k];
            k++;
        }
    }

}

void mergesort(int A[], int p, int r){
    if(p < r){
        int q = (p + r)/2;
        //cout<<endl<<"1 \n "<<p<<endl<<q<<endl<<r<<endl;
        mergesort(A, p, q);
        //cout<<endl<<"2  \n"<<p<<endl<<q<<endl<<r<<endl;
        mergesort(A, q + 1, r);
        //cout<<endl<<"3  \n"<<p<<endl<<q<<endl<<r<<endl;
        merg(A, p, q, r);
    }
}

int main(){

    int n, i;
    cout<<"Enter the number of integers";
    cin>>n;
    int A[n];
    cout<<"Enter the list";
    for(i = 0; i < n; i++){
        cin>>A[i];
    }
    mergesort(A, 0, n-1);

    for(i = 0; i < n; i++){
        cout<<endl<<A[i];
    }

    return 0;
}
