#include <bits/stdc++.h>

using namespace std;

class horario{

private:
	int hora, min, seg;

public:
	horario(int hh,int mm, int ss){
		 hora = hh;
		 min = mm;
		 seg = ss;
	}
	horario operator+ (horario &p1) {
		this->seg = p1.seg + seg;
		if(seg >= 60) {
			min += seg/60;
			seg = seg%60;
		}
		this->min = p1.min + min;
		if(min >= 60) {
			hora +=min/60;
			min = min%60;
		}
		this->hora = p1.hora + hora;
		if(hora >= 24) hora = hora%24;
		return p1;
	}
	void exibir() {
		cout << hora << ' ' << min << ' ' << seg << '\n';
	}
};

int main() {
	int hora1, minutos1 , segundos1; 
	cin >> hora1 >> minutos1 >> segundos1;
	int hora2 ,minutos2, segundos2;
	cin >> hora2 >> minutos2 >> segundos2;
	horario h1(hora1, minutos1, segundos1), h2(hora2, minutos2, segundos2);
	h1+h2;
	h1.exibir();
	return 0;
}
