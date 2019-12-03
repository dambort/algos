#include <iostream>
#include <climits>
#include <vector>
#include <map>
#include <queue>
#include <utility>
#define MAXNODOS 2001
#define MAXCONEXIONES 10001
#define INF 100000
using namespace std;

//El primer elemento del par arco es si tiene aeropuerto el nodo al que llega
//y el segundo elemento es el nodo que llega
vector<pair<int,int>> grafo[MAXNODOS];
//El grafo en el i-esimo elemento contiene un vector de pares, que son
//los arcos salientes del nodo i

int cantNodos, cantConex, cantAero;

//El i-esimo elemento tiene el vector de pesos desde i hasta k pesando caminosDesde[i][k]



void dijkstra(int desde, vector<int> &dist){
	priority_queue <pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> cola;
	
	cola.push(make_pair(0,desde));
	dist[desde]=0;
	
	while(!cola.empty()){
		pair<int, int> par=cola.top();
		cola.pop();
		for(vector<pair<int,int>>::iterator iter=grafo[par.second].begin(); iter!=grafo[par.second].end(); iter++){
			if(dist[par.second]+iter->first < dist[iter->second]){
				
				dist[iter->second] = dist[par.second]+iter->first;
				cola.push(make_pair(dist[iter->second], iter->second));
			}
		}
	}
}	
	
void limpiar_grafo(){
	for(int i=0; i<MAXNODOS; i++){
		grafo[i].clear();
	}
}	
	
int main() {
	
	ios::sync_with_stdio(false);
	
	int cases; cin>>cases;
	map<int, vector<int>> caminosDesde; 
	for(int ntest=1; ntest<=cases; ntest++){
		limpiar_grafo();
		cin>>cantNodos>>cantConex>>cantAero;
		caminosDesde.clear();
		vector<bool> tieneAero(cantNodos+1,false);
		for(int i=0; i<cantAero; i++){
			int k; cin>>k;
			tieneAero[k]=true;
		}
		for(int i=0; i<cantConex; i++){
			int a,b; cin>>a>>b;
			grafo[a].push_back(make_pair(!tieneAero[b], b));
			grafo[b].push_back(make_pair(!tieneAero[a], a));
		}
		int q; cin>>q;
		cout<<"Case "<<ntest<<':'<<endl;
		for(int i=0; i<q; i++){
			int desde, hasta;
			cin>>desde>>hasta;
			if(desde!=hasta){
				int masuno=0;
				if(!tieneAero[desde]) masuno++;
				if(caminosDesde.find(desde)==caminosDesde.end()){
					//Significa que nunca me preguntaron por los caminos desde este nodo
					vector<int> dist(cantNodos+1, INF);
					dijkstra(desde, dist);
					caminosDesde[desde]= dist;
				}
				if(caminosDesde[desde][hasta]<INF){
					cout<<caminosDesde[desde][hasta]+masuno<<endl;
				}
				else{
					cout<<-1<<endl;
				}
			}
			else{
				cout<<0<<endl;
			}
		}
		
		cout<<endl;
		
	}
	
	return 0;
}
