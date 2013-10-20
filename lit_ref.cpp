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
