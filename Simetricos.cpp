#include<iostream>
int essimetrico(int v[], int inicio, int final);
using namespace std;
int main()
{
	int n,resultado;
	
	cout<<"Defina el tamaño del vector"<<endl;
	cin>>n;
	
	int v[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"Ingrese cualquier numero"<<endl;
		cin>>v[i];
	}
	
	resultado=essimetrico(v,0,n-1);
	
	if(resultado==1)
	{
		cout<<"Es simetrico"<<endl;
	}
	else 
	{
		cout<<"No es simetrico"<<endl;
	}
}

int essimetrico(int v[], int inicio, int fin)
{
	if(inicio<fin)
	{
		if(v[inicio]!=v[fin])
		{
			return 0;
		}
		else
		{
			return essimetrico(v,++inicio,--fin);
		}
	}
	else
	{
		return 1;
	}
		
}
