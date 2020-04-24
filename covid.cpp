#include<iostream>

using namespace std;

int main(){
	
	int temp;
	
	cout <<" BIENVENIDO A LA CAMARA DETECTORA DE COVID-19 ";
	
	cout <<"\n digite su temperatura: ";
	cin >>temp;
	
	if(temp>37){
		cout <<"\n Su temperatura da para covid-19...";
	}
	else{
		cout <<"\n Estas libre de el virus... ";
	}
	
	
	
	return 0;
}
