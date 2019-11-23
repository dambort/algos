#include <iostream>
#include <vector>
#include <climits>
#include <set>
#include <map>
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define forall(it,v) for(auto it=v.begin(); it!=v.end(); it++)
#include <algorithm>
using namespace std;

typedef long long ll;

struct UnionFind{
	vector<int> f,setSize; //the array f contains the parent of each node
	int cantSets;
	void init(int n)
	{
		f.clear(); setSize.clear();
		cantSets=n;
		f.resize(n,-1);
		setSize.resize(n,1);
	}
	int comp(int x){return (f[x]==-1?x:f[x]=comp(f[x]));}//O(1)
	bool join(int i,int j) //devuelve true si ya estaban juntos
	{
		bool con=comp(i)==comp(j);
		if(!con)
		{
			cantSets--;
			setSize[comp(j)]+=setSize[comp(i)];
			setSize[comp(i)]=setSize[comp(j)]; //no suma, solo asigna
			f[comp(i)]=comp(j);
		}
		return con;
	}
}uf;

struct Ar{int a,b,w;};
bool operator<(const Ar& a, const Ar &b){return a.w<b.w;}
vector<Ar> E;
int n;
// Minimun Spanning Tree in O(e log e)
long long kruskal(){
	ll cost=0;
	sort(E.begin(), E.end());//ordenar aristas de menor a mayor
	uf.init(n);
	forall(it, E){
		if(uf.comp(it->a)!=uf.comp(it->b)){//si no estan conectados
			uf.join(it->a, it->b);//conectar
			cost+=it->w;
		}
	}
		return cost;
}

//map<int, vector<Arco>> arcosPorPeso;
/*void kruskal(unsigned long &ahorro){
	
	
	while(!arcosPorPeso.empty()){
		
		vector<Arco> arquitos=(*(arcosPorPeso.begin())).second; //Tomo los arcos con el menor peso (pueden ser varios arcos del mismo peso)
		while(!arquitos.empty()){ //Los proceso a todos
			
			Arco procesar= arquitos.back(); //Tomo el ultimo
			arquitos.pop_back(); //y lo borro
			bool origenEncontrado=false, endEncontrado=false;
			set<set<int>>::iterator bosqueOrigen, bosqueEnd;
			for(set<set<int>>::iterator iter=bosques.begin(); iter!=bosques.end() && (!origenEncontrado || !endEncontrado); iter++){ //Recorro todos los bosques hasta que haya encontrado a los dos
				
				if((!origenEncontrado) && ((*iter).find(procesar.origen)!=(*iter).end())){ //Si este bosque tiene al origen del arco
					//Unir bosques
					
					bosqueOrigen=iter;
					origenEncontrado=true;
					
				}
				if((!endEncontrado) && ((*iter).find(procesar.end)!=(*iter).end())){ //Si este bosque tiene al end del arco
					bosqueEnd=iter;
					endEncontrado=true;
					
				}
			}
			//Ya encontre los bosques en los que estan el origen y fin del arco procesar
			
			if(*bosqueOrigen!=*bosqueEnd){ //Si los nodos no estan en el mismo bosque
				//Es un arco importante que va a estar en el bosque final
				//Asi que sumo su peso
				
				ahorro+=procesar.peso;
				//Unir los bosques
				set<int> aux;
				aux.insert((*bosqueOrigen).begin(), (*bosqueOrigen).end());
				aux.insert((*bosqueEnd).begin(), (*bosqueEnd).end());
				bosques.erase(bosqueOrigen);
				bosques.erase(bosqueEnd);
				bosques.insert(aux);
				
			}
			
		}
		
		arcosPorPeso.erase(arcosPorPeso.begin());
		
		
	}
	
	
}*/	
	

int main() {
	
	ios::sync_with_stdio(false);
	
	//Carga de datos
	unsigned cantidadEsquinas, cantidadCalles;
	cin>>cantidadEsquinas>>cantidadCalles;
	unsigned long total=0;
	
	while(cantidadEsquinas != 0 && cantidadCalles != 0){
		total=0;
		n=cantidadEsquinas;
		E.clear();
		for(unsigned i=0; i<cantidadCalles; i++){
			int x,y,z;
			cin>>x>>y>>z;
			Ar arqui;
			arqui.a=x; arqui.b=y; arqui.w=z;
			E.push_back(arqui);
			total+=z;
		}
		
		
		
		long long ahorrado;
		ahorrado=kruskal();
		cout<<total-ahorrado<<endl;
		
		cin>>cantidadEsquinas>>cantidadCalles;
	}
	
	

	return 0;
}

