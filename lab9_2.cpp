#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int M,int N){
	if(M <= 0 or N <= 0){
		cout << "Invalid input"<< "\n";
	}
	for(int x = 0;x<M;x++){
		for(int p = 0;p<N;p++){
			cout<<"O";
		}
		cout<<"\n";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}