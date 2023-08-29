template <class trem>
class matriz{
private:
	int m, n;
	trem** pont;
	
public:
	matriz(){
		n=m=0;
		pont = new trem[0][0];
	}
	matriz(int i, int j){
		m=i;
		n=j;
		pont=new trem *[m];
	
	/* Alocação dinâmica das colunas, a cada LINHA que existe */	
	for(int i=0; i<m; i++){
		pont[i] = new trem[n];
		}
	}
	~matriz(){
		//poit= new trem[0][0]; delete pont;
	}
	trem get(int i, int j){return pont[i][j];};
	void set(int i, int j, trem x){pont[i][j]=x;};
	
	bool operator ==(matriz<trem> mt){
		bool ok=true;
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				if(pont[i][j]!=mt.pont[i][j]){
					ok=false;
				}
			}
		}
	}
	
	matriz operator+ (matriz<trem> mt){
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				pont[i][j] += mt.pont[i][j];
			}
		}
		return mt;
	}
};

int main(){
	matriz<int> m1(2,2);
}
