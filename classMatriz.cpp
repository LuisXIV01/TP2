#include <bits/stdc++.h>
using namespace std;
template <class T>
class matriz{
private:
	int m, n;
	T** pont;
	
public:
	matriz(){
		n=m=0;
		pont = new T[0][0];
	}
	matriz(int i, int j){
		m=i;
		n=j;
		pont = new T *[m];
	
	// Alocação dinâmica das colunas, a cada LINHA que existe	
	for(int k=0; k<m; k++){
		pont[k] = new T[n];
		}
	}
	~matriz(){
		//poit= new T[0][0]; delete pont;
	}
	T get(int i, int j){return pont[i][j];}
	int size(){
		return m*n;
	}
	void set(int i, int j, T x){pont[i][j]=x;}
	bool operator = (matriz<T> mt){
		if(mt.m != m or mt.n != n) return false;
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				T a;
				a = mt.pont[i][j];
				pont[i][j]=a;
			}
		}
		return true;
	}
	
	friend matriz operator + (matriz<T> mt1, matriz<T> mt2){
		if(mt1.m != mt2.m or mt1.n != mt2.n) return mt1;
		matriz<T> aux(mt1.m, mt1.n);
		for(int i=0; i<mt1.m; i++){
			for(int j=0; j<mt1.n; j++){
				aux.pont[i][j] = mt1.pont[i][j] + mt2.pont[i][j];
			}
		}
		return aux;
	}
	friend matriz operator + (matriz<T> mt, T x){
		matriz<T> aux(mt.m, mt.n);
		for(int i=0; i<mt.m; i++){
			for(int j=0; j<mt.n; j++){
				aux.pont[i][j] = mt.pont[i][j] + x;
			}
		}
		return aux;
	}
	friend matriz operator - (matriz<T> mt1, matriz<T> mt2){
		if(mt1.m != mt2.m or mt1.n != mt2.n) return mt1;
		matriz<T> aux(mt1.m, mt1.n);
		for(int i=0; i<mt1.m; i++){
			for(int j=0; j<mt1.n; j++){
				aux.pont[i][j] = mt1.pont[i][j] - mt2.pont[i][j];
			}
		}
		return aux;
	}
	friend matriz operator - (matriz<T> mt, T x){
		matriz<T> aux(mt.m, mt.n);
		for(int i=0; i<mt.m; i++){
			for(int j=0; j<mt.n; j++){
				aux.pont[i][j] = mt.pont[i][j] - x;
			}
		}
		return aux;
	}
	friend matriz operator * (matriz<T> mt1, matriz<T> mt2){
		if(mt1.m != mt2.m or mt1.n != mt2.n) return mt1;
		matriz<T> aux(mt1.m, mt1.n);
		for(int i=0; i<mt1.m; i++){
			for(int j=0; j<mt1.n; j++){
				aux.pont[i][j] = mt1.pont[i][j] * mt2.pont[i][j];
			}
		}
		return aux;
	}
	friend matriz operator * (matriz<T> mt, T x){
		matriz<T> aux(mt.m, mt.n);
		for(int i=0; i<mt.m; i++){
			for(int j=0; j<mt.n; j++){
				aux.pont[i][j] = mt.pont[i][j] * x;
			}
		}
		return aux;
	}
	friend istream& operator >> (istream& in, matriz<T> kth) {
		for(int i = 0; i < kth.m; i++)
			for(int j = 0; j < kth.n; j++)
				in >> kth.pont[i][j];    
		return in;
	  }
	friend ostream& operator << (ostream& out, matriz<T> kth) {
		for(int i = 0; i < kth.m; i++)
			for(int j = 0; j < kth.n; j++)
				out << kth.pont[i][j] << " \n"[j+1==kth.n];
		return out;
	  }
};

int main(){
	int M, N;
	cout << "Digite o tamanho M*N da matriz 1: ";
	cin >> M >> N;
	matriz<int> m1(M,N);
	cout << "Insira os elementos da matriz 1:\n";
	cin >> m1;
	
	cout << "Digite o tamanho M*N da matriz 2: ";
	cin >> M >> N;
	matriz<int> m2(M,N);
	cout << "Insira os elementos da matriz 2:\n";
	cin >> m2;
	
	matriz<int> m3(M,N);
	m3 = (m1 + m2);
	cout << "Matriz 1 + matriz 2 =\n" << m3 << '\n';
	
	m3 = (m1 - m2);
	cout << "Matriz 1 - matriz 2 =\n" << m3 << '\n';
	
	m3 = (m1 * m2);
	cout << "Matriz 1 * matriz 2 =\n" << m3 << '\n';
	
	m3 = (m1 + 4);
	cout << "Matriz 1 + 4 =\n" << m3 << '\n';
	
	m3 = (m1 - 6);
	cout << "Matriz 1 - 6 =\n" << m3 << '\n';
	
	m3 = (m1 * 3);
	cout << "Matriz 1 * 3 =\n" << m3 << '\n';
}
