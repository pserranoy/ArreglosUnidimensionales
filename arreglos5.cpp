#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int n1,n2,i;
	string N1[20],N2[20];
	N1[0]="numero";
	N2[0]="numero";
	cout<<"Ingrese el numero de nombres de PG a ingresar: "; cin>>n1;	
	for(i=1;i<=n1;i++){
		cout<<"Ingrese el "<<i<<" nombre: "; cin>>N1[i];
	}
	cout<<"Ingrese el numero de nombres de FP a ingresar: "; cin>>n2;	
	for(i=1;i<=n2;i++){
		cout<<"Ingrese el "<<i<<" nombre: "; cin>>N2[i];
	}
	cout<<"Los estudiantes de FP son: "<<endl;
	for(i=1;i<=n2;i++){
		cout<<N2[i]<<", ";
	}
	cout<<endl;
	cout<<"Los estudiantes de PG son: "<<endl;
	for(i=1;i<=n1;i++){
		cout<<N1[i]<<", ";
	}
	return 0;
}
