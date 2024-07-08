#include <iostream>
using namespace std;
int main(){
	int n,i,A,a[10],par[10],impar[10];
	A=0;
	cout<<"Ingrese el numero de elementos: ";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"Ingrese el elemento: ";
		cin>>a[i];
		if(a[i]%2==0){
			par[i]=a[i];
		}
		if(a[i]%2!=0){
			impar[i]=a[i];
		}
	}
	return 0;
}
