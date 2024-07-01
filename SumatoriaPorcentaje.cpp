#include <iostream>
using namespace std;

int main(){
	int n, A=0, i=0;
	int array[i],par[i],impar[i];
	cout<<"Ingrese la cantidad de numeros a ingresar: "; cin>>n;
	for(i=0;i<=n-1;i++){
		cout<<"Ingrese el elemento: "; cin>>array[i];
		if(array[i]==0){
			A=A+array[i];
		}else{
			C=C+1;
		}
	}
	Pc=C*100/n;
	cout<<"La sumatoria de todos los elementos es: "<<A<<endl;
	cout<<"El porcentaje de ceros es: "<<C<<"%"<<endl;
	return 0;
}