#include <iostream>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <queue>
using namespace std;

struct Grafo{
	vector<vector<int>> arcos;
	int cantNodos;
}grafo;

vector<bool> descubiertos;

void bfs(int start){
	queue<int> fila; //Fila de procesamiento
	
	fila.push(start); //Meto el primer nodo a procesar
	descubiertos[start]=true;
	
	while(!fila.empty()){ //Mientras haya cosas que procesar
		int nodo = fila.front(); //El primer elemento de la cola
		fila.pop(); //Lo sacamos y ahora lo procesamos
		
		for(unsigned i=0; i<grafo.arcos[nodo].size(); i++){ //Desde 0 hasta la cantidad de arcos salientes de nodo
			if(!descubiertos[grafo.arcos[nodo][i]]){ //Si no se descubrio este nodo todavia
				fila.push(grafo.arcos[nodo][i]); //Agrego el nodo hijo de nodo a la lista de procesamiento
				descubiertos[grafo.arcos[nodo][i]]=true; //Agrego el nodo hijo de nodo como descubierto
			}
		}
	}
	
}
	

int main() {
	ios::sync_with_stdio(false);
	int N;
	while(cin>>N){
		int cantFilas=(N*2)-1;
		int cantColumnas=N;
		vector<int> ph;
		grafo.cantNodos=(2*N)*((2*N)+1);
		grafo.arcos.resize(grafo.cantNodos, ph);
		descubiertos.resize(grafo.cantNodos, false);
		
		
		for(int i=1; i<=cantFilas; i++){
			for(int j=1; j<=cantColumnas; j++){
				char input;
				cin>>input;
				int xBarra, yBarra;
				if(i%2==1){
					yBarra=i;
					xBarra=(j*2)-1;
				}
				else{
					yBarra=i;
					xBarra=j*2;
				}
				int nodoAct = ((yBarra-1)*((2*N)+1)) + xBarra-1,
					nodoDer = nodoAct+1,
					nodoAb = nodoAct+((2*N)+1),
					nodoAbder = nodoDer+((2*N)+1);
				
				switch(input){
				case 'H':
					grafo.arcos[nodoAct].push_back(nodoDer);
					grafo.arcos[nodoDer].push_back(nodoAct);
					grafo.arcos[nodoAb].push_back(nodoAbder);
					grafo.arcos[nodoAbder].push_back(nodoAb);
					break;
				case 'V':
					grafo.arcos[nodoAct].push_back(nodoAb);
					grafo.arcos[nodoAb].push_back(nodoAct);
					grafo.arcos[nodoDer].push_back(nodoAbder);
					grafo.arcos[nodoAbder].push_back(nodoDer);
					break;
				};
				
			}
		}
		//cout<<"Conectando superiores e inferiores..."<<endl;
		for(int i=1; i<(N*2); i+=2){
			//Conecto los nodos superiores e inferiores que faltan
			//cout<<"Conecte "<<i<<" con "<<i+1<<" ... "<<endl;
			grafo.arcos[i].push_back(i+1);
			grafo.arcos[i+1].push_back(i);
			//cout<<"Conecte "<<((N*2)-1)*((N*2)+1)+i<<" con "<<((N*2)-1)*((N*2)+1)+1+i<<" ... "<<endl;
			grafo.arcos[((N*2)-1)*((N*2)+1)+i].push_back(((N*2)-1)*((N*2)+1)+1+i); //Los de la ultima fila
			grafo.arcos[((N*2)-1)*((N*2)+1)+1+i].push_back(((N*2)-1)*((N*2)+1)+i);
		}
		//cout<<"----------- FIN CONECT SUP E INF..."<<endl;
		//cout<<"Conectando primer y ultima columna..."<<endl;
		for(int i=0; i<(N*2)-1; i++){ //Avanzo de a dos filas
			//Conecto los de la primera y ultima columna
			if(i%2==0){
				//Conecto los nodos de la ultima columna
				//cout<<"Conecte "<<(((N*2)+1)*(i+1))-1<<" con "<<(((N*2)+1)*(i+2))-1<<" ... "<<endl;
				grafo.arcos[(((N*2)+1)*(i+1))-1].push_back((((N*2)+1)*(i+2))-1);
				grafo.arcos[(((N*2)+1)*(i+2))-1].push_back((((N*2)+1)*(i+1))-1);
			}
			else{
				//Conecto los nodos de la primera columna
				//cout<<"Conecte "<<((N*2)+1)*i<<" con "<<(((N*2)+1)*(i+1))<<" ... "<<endl;
				grafo.arcos[((N*2)+1)*i].push_back((((N*2)+1)*(i+1)));
				grafo.arcos[(((N*2)+1)*(i+1))].push_back(((N*2)+1)*i);
			}
		}
		//cout<<"---------- FIN CONECT PRI Y ULT COLUMNA..."<<endl;
		
		bfs(0);
		int cantCerrados=0;
		for(int i=1; i<grafo.cantNodos; i++){
			if(!descubiertos[i]){
				bfs(i);
				cantCerrados++;
			}
		}
		cout<<cantCerrados<<endl;
		
		grafo.arcos.clear();
		descubiertos.clear();
	}
	
	return 0;
}

 
