#include <bits/stdc++.h>
using namespace std;

class vetor{
public:
	int *vet;
	int size;
	
public:
	vetor(int n){
		vet = new int[n];
		size = n;
	}
	~vetor(){
		delete vet;
	}
	void exibir(){
		for(int i = 0; i < size; i++)
			cout << '[' << i << "] " << vet[i] << '\n';
	}
	void inserir(){
		for(int i = 0; i < size; i++)
			cin >> vet[i];
	}
	void multVet(vetor a, vetor b){
		for(int i = 0; i < size; i++)
			vet[i] = a.vet[i] * b.vet[i];
	}
	void multEscalar(int x, vetor a){
		for(int i = 0; i < size; i++)
			vet[i] = a.vet[i] * x;
	}
};
int main(){
	int n, num;
	cin >> n;
	vetor vet1(n), vet2(n), vetRes(n), vetRes2(n);
	vet1.inserir();
	vet2.inserir();
	vet1.exibir();
	cout << '\n';
	vet2.exibir();
	cout << '\n';
	vetRes.multVet(vet1, vet2);
	vetRes.exibir();
	cout << '\n';
	cin >> num;
	
	vetRes2.multEscalar(num, vet1);
	vetRes2.exibir();
}
