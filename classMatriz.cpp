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
	for(int i=0; i<m; i++){
		pont[i] = new T[n];
		}
	}
	~matriz(){
		//poit= new T[0][0]; delete pont;
	}
	T get(int i, int j){return pont[i][j];}
	
	void set(int i, int j, T x){pont[i][j]=x;}
	
	void operator =(matriz<T> mt){
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				pont[i][j] = mt.pont[i][j];
			}
		}
	}
	
	matriz operator + (matriz<T> mt){
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				pont[i][j] += mt.pont[i][j];
			}
		}
		return this;;
	}
	matriz operator - (matriz<T> mt){
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				pont[i][j] -= mt.pont[i][j];
			}
		}
		return this;
	}
	matriz operator * (matriz<T> mt){
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				pont[i][j] *= mt.pont[i][j];
			}
		}
		return this;
	}
	matriz operator * (T x){
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				pont[i][j] *= x;
			}
		}
		return this;
	}
};

int main(){
	matriz<int> m1(2,2);
}
