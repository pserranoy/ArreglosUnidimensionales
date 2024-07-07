#include <iostream>
using namespace std;

int main(){
	int n,C,a[10],A,i;
	float Pc;
	cout<<"Ingrese la cantidad de numeros a ingresar: "; cin>>n;
	A=0;
	for(i=1;i<=n;i++){
		cout<<"Ingrese el elemento: ";
		cin>>a[i];
		if(a[i]=!0){
			A=A+a[i];
		}
		else{
			C=C+1;
	    }
    }
	Pc=C*100/n;
	cout<<"La sumatoria de todos los elementos es: "<<A<<endl;
	cout<<"El porcentaje de ceros es: "<<Pc<<"%"<<endl;
	return 0;
}
