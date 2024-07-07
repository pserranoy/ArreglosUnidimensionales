#include <iostream>
using namespace std;

int main(){
	int n,M[10],i;
	float N;
	cout<<"Ingrese el limite del multiplo: "; cin>>n;
	cout<<"Ingrese el multiplo: "; cin>>N;
	for(i=1;i<=n;i++){
		M[i]=N*i;
	}
	cout<<"Los multiplos de "<<N<<" son: ";
	for(i=1;i<=n;i++){
		cout<<M[i]<<" ";
	}
	return 0;
}
