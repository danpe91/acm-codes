#define PI atan(1)*4;

int compare(const void *a, const void *b) 
{ 
        struct point *ia = (struct point *)a;
        struct point *ib = (struct point *)b;

        int diff = (int)(ia->x - ib->x);
    return diff;
}

size_t structs_len = sizeof(points) / sizeof(struct point);
qsort(points, structs_len, sizeof(struct point), compare);

inline bool comp(data a, data b) {
	if(a.n == b.n)
		return std::lexicographical_compare(b.low, b.low + 3, a.low, a.low + 3);
	return a.n < b.n;
}


#define EPS 1e-7
typedef long long LL;
bool isPrimeSlow (LL x)
{
  if(x<=1) return false;
  if(x<=3) return true;
  if (!(x%2) || !(x%3)) return false;
  LL s=(LL)(sqrt((double)(x))+EPS);
  for(LL i=5;i<=s;i+=6)
  {
    if (!(x%i) || !(x%(i+2))) return false;
  }
  return true;
}


#define LL long long
// fast pow
LL fast_exp(int b, int n){
  LL res = 1, x = b, p;
  
  for(p = n; p; p >>= 1, x *= x)
    if(p & 1) res *= x;
  
  return res;
}

// returns d = gcd(a,b); finds x,y such that d = ax + by
int extended_euclid(int a, int b, int &x, int &y) {  
  int xx = y = 0;
  int yy = x = 1;
  while (b) {
    int q = a/b;
    int t = b; b = a%b; a = t;
    t = xx; xx = x-q*xx; x = t;
    t = yy; yy = y-q*yy; y = t;
  }
  return a;
}

// return a % b (positive value)
int mod(int a, int b) {
  return ((a%b)+b)%b;
}

// converts Gregorian date to integer (Julian day number)
int dateToInt (int m, int d, int y){  
  return 
    1461 * (y + 4800 + (m - 14) / 12) / 4 +
    367 * (m - 2 - (m - 14) / 12 * 12) / 12 - 
    3 * ((y + 4900 + (m - 14) / 12) / 100) / 4 + 
    d - 32075;
}

// converts integer (Julian day number) to Gregorian date: month/day/year
void intToDate (int jd, int &m, int &d, int &y){
  int x, n, i, j;
  
  x = jd + 68569;
  n = 4 * x / 146097;
  x -= (146097 * n + 3) / 4;
  i = (4000 * (x + 1)) / 1461001;
  x -= 1461 * i / 4 - 31;
  j = 80 * x / 2447;
  d = x - 2447 * j / 80;
  x = j / 11;
  m = j + 2 - 12 * x;
  y = 100 * (n - 49) + i + x;
}
string dayOfWeek[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
// converts integer (Julian day number) to day of week
string intToDay (int jd){
  return dayOfWeek[jd % 7];
}

long long gcd(long long a, long long b) {
	return ((b)? (gcd(b, a%b)) : (a));
}
int mcm(int a, int b) {
	return ((!b || !a)? (0) : ((a / gcd(a,b)) * b));
}
bool is_prime(int n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    if (n < 25) return true;

    int s = static_cast<int>(sqrt(static_cast<double>(n)));
    for (int i = 5; i <= s; i += 6) {
        if (n % i == 0) return false;
        if (n % (i + 2) == 0) return false;
    }

    return true;
}


priority_queue <int> pq;					// normal priority_queue
priority_queue <int, vector<int>, greater<int> > pq;	// asc priority_queue
priority_queue <Height> pq;					// modified priority_queue

class Height{
  public:
    Height() {};
    Height(int _x, int _y) { feet = _x; inches = _y; }
    bool operator<(const Height&) const;		//overloaded < operator
    int get_x() const { return x; }				//accessor methods
    int get_y() const { return y; }
  private:
    int x, y;
};
bool Height::operator<(const Height& right) const	{	return x + y < right.x + right.y;	}

#define Node pair<int, int>

struct cmp {
  
  bool operator() (const Node &a, const Node &b) {

    return a.second > b.second;
  }
};
priority_queue<Node, vector<Node>, cmp> p_queue;

string line;
getline(cin, line)
char line[12];
cin.getline(line, 12)

char str[] = "sample string";
char * tok;
tok = strtok(str, " ");
while (tok != NULL) {/* do stuff */	tok = strtok(NULL, " ");}


// algorithm lib
next_permutation(array, array + (array_size))
prev_permutation(array, array + (array_size))
lexicographical_compare(a,a+a_size, b,b+b_size);
lexicographical_compare(a,a+a_size, b,b+b_size, comp_func);

bool comp_func(char c1, char c2){ return std::tolower(c1)<std::tolower(c2); }
bool myfunctiona (int i, int j) { return i<j; }
bool myfunctionb (numbers i, numbers j) { return i.a<j.a; }
bool function (int i, int j)	{return i == j;}

// includes checks if all element in continent are contained in container
includes(container,container+(container_size),continent,continent+(continent_size))
includes(container,container+(container_size),continent,continent+(continent_size),myfunctionx)

reverse(myvector.begin(),myvector.end())							std::vector
reverse(myvector + (myvector_size))									standard vector

myvector.resize(myints_size); 
reverse_copy (myints, myints+(myints_size), myvector.begin());		creates a copy instead of modifying the original

rotate(myvector.begin(),myvector.begin()+3,myvector.end());			rotates in the vector 3 elements to the left

In binary_search v must be sorted previously
binary_search (v.begin(), v.end(), 3)								looks for a 3 in v
binary_search (v.begin(), v.end(), 6, myfunctionx)					looks for a 6 in v using myfunctionx as compare element

v.resize(first_size + second_size);											first and second are standard vectors
merge (first,first+(first_size),second,second+(second_size),v.begin());		merges first and second into v	

equal (myvector.begin(), myvector.end(), myints)					myints is standard array_size
equal (myvector.begin(), myvector.end(), myints, function)


// first and second must be previously ordered
// guarda en v los elementos que se ecuentran en first y no en second + los
// elementos que se encuentran en second y no en first
v.resize(first_size + second_size);
vector<int>::iterator it;
it=set_symmetric_difference (first, first+(first_size), second, second+(second_size), v.begin());
v.resize(it-v.begin());

// first and second must be previously ordered
// copia en v los elementos de first y second sin repetir los elemntos, a diferencia de merge
v.resize(first_size + second_size);
vector<int>::iterator it;
it=set_union (first, first+(first_size), second, second+(second_size), v.begin());
v.resize(it-v.begin());  

// first and second must be previously ordered
// copia en v los elementos que se encuetran tanto en first como en second
v.resize(first_size + second_size);
vector<int>::iterator it;
it=set_intersection (first, first+(first_size), second, second+(second_size), v.begin());
v.resize(it-v.begin());  

// first and second must be previously ordered
// copia en v los elementos que se encuetran en first menos los que se encuentran en second
v.resize(first_size + second_size);
vector<int>::iterator it;
it=set_difference (first, first+(first_size), second, second+(second_size), v.begin());
v.resize(it-v.begin());
// en las ultimas 4 funciones tambien se encuentra la variacion mandandole un ultimo parametro
// este parametro contiene una funcion de la misma manera que en qsort para comparar i < j

// iterar en vector usando iterator
for (vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
    cout << *it;

// numeric lib
int val[] = {1,2,3,4,5};
int result[5];
partial_sum (val, val+5, result);
for (int i=0; i<5; i++) cout << result[i];

// bitset
bitset<size> var;	// ej: bitset<15> bs;
bitset vas(3);		// 3 in binary
bitset var("10010")
var.size()			// returns var size
var.count()			// count number of ones
var.any()			// returns if any bit is set
var.all()
var.set()			// sets all bitset
var.set(n)			// set bit in n position (0-indexed starting from right)
var.set(n, 0)		// place 0 in position n (0-indexed starting from right)
var.reset()			// resets all bits
var.reset(n)		// reset bit in position n(0-indexed starting from right)
var.flip()
var.flip(n)
var.test(n) == var[n]	// gets value in position n( 0-indexed starting from right)
var.to_ulong()
string mystring = var.to_string<char,std::string::traits_type,std::string::allocator_type>();


// dijkstra
#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

#define MAX 10005
#define Node pair<int, int>
#define INF 1 << 30

struct cmp {
  
  bool operator() (const Node &a, const Node &b) {

    return a.second > b.second;
  }
};

vector<Node> adjArr[MAX];
int distances[MAX];
bool visited[MAX];
priority_queue<Node, vector<Node>, cmp> p_queue;
int vertices_num;
int previous[MAX];

void init() {

  for (int i = 0; i <= vertices_num; ++i) {

    distances[i] = INF;
    visited[i] = false;
    previous[i] = -1;
  }
}

void relaxation(int current, int adjacent, int weight) {

  if(distances[current] + weight < distances[adjacent]) {

    distances[adjacent] = distances[current] + weight;
    previous[adjacent] = current;
    p_queue.push(Node(adjacent, distances[adjacent]));
  }
}

void print_path(int destiny) {

  if (previous[destiny] != -1) {
    print_path(previous[destiny]);
  }

  printf("%d ", destiny);
}

void dijkstra(int initial) {

  init();
  p_queue.push(Node(initial, 0));
  distances[initial] = 0;
  int current, adjacent, weight;

  while(!p_queue.empty()) {

    current = p_queue.top().first;
    p_queue.pop();

    if(visited[current])  continue;
    visited[current] = true;

    for (int i = 0; i < adjArr[current].size(); ++i) {

      adjacent = adjArr[current][i].first;
      weight = adjArr[current][i].second;

      if (!visited[adjacent]) {

        relaxation(current, adjacent, weight);
      }
    }
  }

  printf( "Distancias mas cortas iniciando en vertice %d\n" , initial );
    for( int i = 1 ; i <= vertices_num ; ++i ){
        printf("Vertice %d , distancia mas corta = %d\n" , i , distances[ i ] );
    }

    puts("\n**************Impresion de camino mas corto**************");
    printf("Ingrese vertice destino: ");
    int destiny;
    scanf("%d" , &destiny );
    print_path( destiny );
    printf("\n");
}

int main() {

  int edges, origin, destiny, weight, initial;
  scanf("%d %d", &vertices_num, &edges);

  while(edges--) {

    scanf("%d %d %d", &origin, &destiny, &weight);
    adjArr[origin].push_back(Node(destiny, weight));
    //adjArr[destiny].push_back(Node(origin, weight));    // uncomment this if it is a non-directed graph
  }

  printf("Ingrese el vertice inicial: ");
    scanf("%d" , &initial );
    dijkstra( initial );
  
}
