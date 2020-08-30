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
 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
  Amirul Islam IIITBH CSE 2018-2022 || Code-chef || Loading.... 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include "bits/stdc++.h"

#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define INF                   (int)1e15
using namespace std;

signed main()
{
	ios_base::sync_with_stdio(0);
	int te;
	cin>>te;
	while(te--){
		int n;
		cin>>n;
		int ch = INF;
	loop(i,0,n){
		int t;
		cin>>t;
		ch = min(ch,t);
	}
	cout<<ch<<endl;
	}
	
	return 0;
}

