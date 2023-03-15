
#include<iostream>

using namespace std; 
  
void find_dublicate(int arr[], int size) 
{ 
    int i, j, max=0;
    for(i=0 ; i<size; i++){
    	if(arr[i]>max)
    		max=arr[i];
	}
    int dup[max+1];
    for(i=0 ; i<max+1; i++){
    	dup[i]=0;
	}	    
    cout<<" the dublicated numbers are: "; 
    for(i = 0; i < size; i++) 
        for(j = i + 1; j < size; j++){
	        if(arr[i] == arr[j]){
	        	dup[arr[i]]=arr[i];
			}
		} 
    for(i=0 ; i<max+1; i++){
    	if(dup[i]!=0)
	    	cout<<dup[i]<<" ";
	}	
}  
 
int main() 
{ 
    int n, k;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
      cout<<"Enter Value "<<(i+1)<<": ";
      cin>>arr[i];
   }
    find_dublicate(arr, n); 
} 
