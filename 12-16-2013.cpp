//Daily Challenge 17-12-2013
//To create a christmas tree in console based on input
//GF want's me to add ornamants to the tree havn't decided if I want to or not
#include <iostream>

using namespace std;
void spaces(int size);


int main()
{
	int k,i,j,size;
	char wood,leaves;

	//read everything in
	cin>>size>>leaves>>wood;
	
	//loop through everything until we've drawn the tree
	for(i=1; i <size; i+=2){
		//print spaces here
		spaces((size - i) / 2);
		//draws the leaves here
		for(j=0; j < i; j++){
			cout<<leaves;
		}
		cout<<"\n";
	}
	//spaces for wood base
	spaces((size - 2) / 2);
	cout<<wood<<wood<<wood<<endl;

	return 0;
};

//prints the spaces based on how many we need
void spaces(int size)
{
	int k;
	for(k=0; k < size; k++){
		cout<<" ";
	}
}