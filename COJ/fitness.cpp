#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct estr{
	string adn;
	int fitness;
};
typedef vector<estr> vec;
bool function(estr a, estr b){
	return a.fitness<b.fitness;
}
int cfitness(string a){
	int i , j, cont =0;
	for(i=0;i<a.size();i++)
		for(j=(i+1);j<a.size();j++)
		if(a[i]>a[j])	cont++;
	return cont;
	}
	
int main()
{
	int n, m, i;
	vec v;
	estr e;
	cin>>n>>m;
	for (i =0;i<m;i++){
	cin>>e.adn;
	e.fitness = cfitness(e.adn);
	v.push_back(e);
	}
	sort(v.begin(), v.end(), function);
	for(i=0;i<m	;i++){
	cout<<v[i].adn<<endl;
	}
	return 0;
}
