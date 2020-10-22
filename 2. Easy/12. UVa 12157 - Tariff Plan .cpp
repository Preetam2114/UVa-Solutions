/*
 * Chef        : preetam rane
 * Chef-Id     : pvr2114
 * Dish        : 12. UVa 12157 - Tariff Plan 
 * Created on  : Thursday, 22nd October 2020 8:58:41 pm
 */


#include <bits/stdc++.h>
#define F first
#define S second 
#define PB push_back 
#define MP make_pair
#define rep(i,a,b) for(int i = a; i <= b; i++)
#define inputarr(arr,n) for(int i = 0; i < n; i++) cin>>arr[i];
#define inputmat(arr,a,b) for(int i=0; i < a; i++)for(int j=0; j < b; j++)cin>>arr[i][j];
#define print(arr) for(auto a:arr) cout<<a<<" "; cout<<"\n";
#define endl '\n'

template<typename KeyType, typename ValueType> 
std::pair<KeyType,ValueType> get_max( const std::map<KeyType,ValueType>& x ) {
  using pairtype=std::pair<KeyType,ValueType>; 
  return *std::max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) {
        return p1.second < p2.second;
  }); 
}

template <class Container>
void split(const std::string& str, Container& cont){
    std::istringstream iss(str);
    std::copy(std::istream_iterator<std::string>(iss),
         std::istream_iterator<std::string>(),
         std::back_inserter(cont));
}

constexpr unsigned int shash(const char *s, int off = 0) {                        
    return !s[off] ? 5381 : (shash(s, off+1)*33) ^ s[off];                           
}

using namespace std;
typedef long long ll;
const ll mod = 1e9;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t=1;
	cin >> t;
  int cs=t;
	while(t--){
    int n;
    cin >> n;
    int x;
    int mile = 0;
    int juice = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        mile += ((x / 30) + 1) * 10;
        juice += ((x / 60) + 1) * 15;
    }
    cout << "Case " << cs-t << ": ";
    if(mile < juice){
        cout << "Mile " << mile << endl;
    }
    else if(mile > juice){
        cout << "Juice " << juice << endl;
    }
    else{
        cout << "Mile Juice " << mile << endl;
    }
	}
	return 0;
}