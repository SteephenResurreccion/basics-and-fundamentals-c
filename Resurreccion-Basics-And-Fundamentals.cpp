#include <iostream>


using namespace std;


int main()
{
	int array1[10], array2[10], mergedarray[20];
	int a, b, c=0, i, temp, temp1, j;
	
	
	
	cout<<"Enter how many numbers you want to input for the first array (limit is 10): ";
	cin>>a;
	
	//first array for loop
	for(i=0; i<a; i++){
		cout<<"Enter "<<i+1<<". Number: ";
		cin>>array1[i];	
	}
	
	
	cout<<"Enter how many numbers you want to input for the second array (limit is 10): ";
	cin>>b;
	
	//second array for loop
	for(i=0; i<b; i++){
		cout<<"Enter "<<i+1<<". Number: ";
		cin>>array2[i];	
	}
	//merger for arrays
	for(i=0; c<a; i++){
		mergedarray[i]=array1[i];
		c=c+1;	
	}
	
	temp = b+c;
	for(i=c; i<temp; i++){
		mergedarray[i]=array2[i-c];
	}
	
	c=a+b;
	
	for(i=0; i<c; i++){
		cout<<"value inside the "<<i+1<<". place: "<<mergedarray[i]<<endl;
	}
	
	//bubble sort
	//number of iterations
	temp1=c;
	for(j=0; j<temp1-1; j++){
		for(i=0; i<c; i++){
			if(mergedarray[i] < mergedarray[i+1]){
				temp=mergedarray[i];
				mergedarray[i]=mergedarray[i+1];
				mergedarray[i+1]=temp;
			}
		}
	}
	
	for(i=0; i<c; i++){
		cout<<"\nvalue inside the SORTED "<<i+1<<". place: "<<mergedarray[i]<<endl;
	}
	
	return 0;
}