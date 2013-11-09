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

// converts integer (Julian day number) to day of week
string intToDay (int jd){
  return dayOfWeek[jd % 7];
}

long long gcd(long long a, long long b) {
	return ((b)? (gcd(b, a%b)) : (a));
}
int mcm(int a, int b) {
	return ((!b || !a)? (0) : ((a / mcd(a,b)) * b));
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
