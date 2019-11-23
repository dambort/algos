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

