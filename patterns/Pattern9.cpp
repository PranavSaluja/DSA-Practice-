#include <iostream>
using namespace std;

int main(){
    
// taking the input from the user
int n;
cin>>n;

int k = n -1;
for(int row =1 ; row <= n ; row++){
    // spaces 
    for(int space = 1 ; space <= k ; space++){
        cout<<" ";
    }
    k--;
    for(int star = 1 ; star <= 2 * row -1 ; star++){
        cout<<"*";
    }
    cout<<endl;
}

int count = 0;
int count2 = n * 2 -1;

for(int row = 1 ; row<=n ; row++){
    // space 
    for(int space = 0 ; space < count ; space++){
        cout<<" ";
    }
    count++;

    // stars 
    for(int star=0 ; star < count2 ; star++){
        cout<<"*";
    }
    count2 = count2 - 2;

    cout<<endl;

}

    
}