/*
                         _______________________________
    /"""""""""""\      ,'                               `.
 _ / ____   ____ \ _  (        WELCOME TO MY CODE         )
| \=( (@ )=( (@ )=/ |  `.  _____________________________,'
\_( ,`--'(_)`--'. )_/    |/
 ( /______I______\ )   _,'
  \\\_|_|_|_|_|_///
   \ `|_|_|_|_|' /
    `---.___,---'
       `=---='
 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
  Amirul Islam IIITBH CSE 2018-2022 || Code-chef || codeforces || Loading.... 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include "bits/stdc++.h"

#define ll                    long long int
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
#define ab(a)                 (a<0)?(-1*a):a
#define MOD                   1000000007
#define MAX                   1e9
#define MIN                   -1e9
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define mid(s,e)              (s+(e-s)/2)
#define sz(c)                 (int)c.size()
#define INF                   (int)1e15

#define testcase()                  int test; scanf("%d",&test); while(test--)
using namespace std;

signed main()
{
	ios_base::sync_with_stdio(0);
	testcase(){
	    int a,b;
	    cin>>a>>b;
	    if(a%b == 0)
	    	cout<<0<<endl;
	    else if(a < b){
	    	cout<<(b-a)<<endl;
		}
		else{
			int c = int(a/b) + 1;
			cout<<((c*b) - a)<<endl;
		}
			
		}
	return 0;
}

