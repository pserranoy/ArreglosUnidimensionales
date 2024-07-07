#include <iostream>
using namespace std;
int main(){
	float tmin[10],Ttec,tmax[10],tmed[10],menor=100000000;
	int Tc=0,i,menor2;
	cout<<"--Temperaturas de la semana--"<<endl;
	for(i=1;i<=7;i++){
		cout<<"Ingrese las temperaturas del dia "<<i<<" : "<<endl;
		cout<<"tmin: "; cin>>tmin[i];
		cout<<"tmax: "; cin>>tmax[i];
		tmed[i]=(tmin[i]+tmax[i])/2;
		if(tmin[i]<menor){
			menor=tmin[i];
			menor2=i;
		}
	}
	cout<<"Las temperaturas media de los 7 dias son: "<<endl;
	for(i=1;i<=7;i++){
		cout<<"Temperatura media del "<<i<<" dia: "<<tmed[i]<<endl;
	}
	cout<<"El dia con menor temperatura es: "<<menor2<<endl;
	cout<<"Ingrese una ultima temperatura: "; cin>>Ttec;
	for(i=1;i<=7;i++){
		if(Ttec==tmax[i]){
			cout<<"La temperatura ingresada coincide con la temperatura maxima del dia "<<i<<"."<<endl;
			Tc=Tc+1;
		}
	}
	if(Tc<1){
		cout<<"La temperatura ingresada no coincide con ningun dia."<<endl;
	}
	return 0;
}	
