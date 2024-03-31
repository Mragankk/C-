#include <stdio.h>
#include <iostream>

using namespace std;

void merging(int arr1[], int total, int arr2[],int merged[] ){
    for(int i =0 ; i < total; i++){
        merged[i] = arr1[i];
    }
    for (int i = 0 ; i< total ; i++){
        merged[total+i] = arr2[i];
    }
}

int main(){
    int total; 
    cout<<"Enter Number of Elements for arr : ";
    cin>>total;
    int arr1[total];
    int arr2[total];
    
    cout<<endl;
    cout<< "Enter elements for arr: ";
    for (int i =0 ; i< total ; i++){
        cout<<"arr["<<i<<"]";
        cin>>arr1[i];
        cout<<endl;
    }
        
	cout<<endl;
	cout<<"Enter Elements for arr2\n";
	for (int i = 0 ; i < total ; i++){
	       cout<<"arr["<<i<<"] =";
           cin>>arr2[i];
           cout<<endl;
	}
	    int merged[total*2];
    merging(arr1,total,arr2,merged);
    cout<<"AFTER MERGING : "<<endl;
    for (int i = 0 ; i < (total*2) ; i++){
	    cout<<merged[i]<<endl; 
    }

    return 0;
};
