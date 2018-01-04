#include<iostream>
void concatenar(char c1[], char c2[]);
using namespace std;
int main ()
{
	char cadena1[50];
	char cadena2[50];
	
	cout<<"Ingrese la primer cadena"<<endl;
	cin.getline(cadena1,50);
	
	cout<<"Ingrese la segunda cadena"<<endl;
	cin.getline(cadena2,50);
	
	concatenar(cadena1,cadena2);
	
	cout<<"La cadena concatenada es:"<<cadena1<<endl;
}

void concatenar(char c1[], char c2[])
{
	int i=0;
	int j=0;
	
	while(c1[i])
	
	i++;
	
	while(c2[j])
	{
		c1[i]=c2[j];
		i++;
		j++;
	}
	
}
