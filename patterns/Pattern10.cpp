#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    int count = 1;

    for(int row=1 ; row<= 2*n-1 ; row++ ){
        //star
        if(count <= n){
        for(int star=1 ; star<=count ; star++){
            cout<<"*";
        }
        count++;
    }// space 
    else{
        
        for(int star=1 ; star<= 2 * n - row ; star++){
            cout<<"*";
        }
        
    }
    

        cout<<endl;
    }
}