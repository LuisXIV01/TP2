#include <bits/stdc++.h>
using namespace std;
class fracao
{
public:
	int numerador;
	int denominador;
public:
	fracao(){
		numerador = 0;
		denominador = 0;
	}
	void construir(){
		int num;
		cout << "Digite um numerador diferente de zero\n";
		cin >> num;
		while(!num){
			cout << "Numero invalido. Digite novamente\n";
			cin >> num;
		}
		numerador = num;
		cout << "Digite um denominador diferente de zero\n";
		cin >> num;
		while(!num){
			cout << "Numero invalido. Digite novamente\n";
			cin >> num;
		}
		denominador = num;
	}
	fracao multFracao(fracao frac){
		fracao res;
		res.numerador = numerador * frac.numerador;
		res.denominador = denominador * frac.denominador;
		return res;
	}
	double multEscalar(int num){
		return (num * (float)numerador / denominador);
	}
	void exibir(){
		cout << "Num: " << numerador << "\nDen: " << denominador;
	}
};

int main(){
	int num;
	fracao frac1, frac2, res;
	frac1.construir();
	frac2.construir();
	res = frac1.multFracao(frac2);
	res.exibir();
	
	cin >> num;
	cout << frac1.multEscalar(num);
	
}
