//** Jai Mahakal **//**// हर हर महादेव**//
// github --> https://github.com/iamprofessor1
#include <bits/stdc++.h>
using namespace std;
#define ln            "\n"
#define ll            long long int
#define fast_cin()    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

bool isprime(int n)
{
	if (n == 1 || n == 0){
		return false;}

	
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0){
            return false;
        }

	return true;
    // order of complexity 
    // space -- O(1)
    // time -- O(sqrt(n))
}

void solve()
{

   ll a =  0 , b = 1 , c =0;
   ll N ;
   cin>>N;
   ll i = 1;
   while (i<=N)
   {    c= a+b;
        a = b;
        b = c;
       if( a % 5 == 0 || isprime(a)){
           cout<<0<<" ";
       }
       else{
           cout<<a<<" ";
       }
        i++;
   }
   cout<<ln;
   // O(N)
}


int main(){
    fast_cin();
    ll T =1;
//     cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
 //** Har Har Mahadev **//
