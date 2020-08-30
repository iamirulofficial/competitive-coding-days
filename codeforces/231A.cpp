#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	int a,b,c,count=0;
	while(test--){
			cin>>a>>b>>c;
			if((a+b+c) >= 2)
				count++;
	}
	cout<<count;
	return 0;
}
