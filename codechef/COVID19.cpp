// Ami || Code-chef || HackerEarth || Codeforces ||
//amirul.cse.1804@iiitbh.ac.in

#include <bits/stdc++.h>
 using namespace std;

#define ll                    long long int
#define pos(p)                (p<0)?(-1*p):p
#define MOD                   1000000007
#define MAX                   1e9
#define MIN                   -1e9
#define INF                   (int)1e15
#define Tests()               int T; scanf("%d",&T); while(T--)
#define endl '\n'

signed main(){
	
	Tests()
		{
		long int num,i=0,j=0,b,ones=0,p,temp,itr;
		cin>>num;
		long int queue[num],onesat[num];
		i=0;
		//cout<<num<<endl;
		for(i=0;i<num;i++)
		{
			cin>>queue[i];
			if(queue[i] == 1){
				ones++; onesat[j++] = i - 1;
			}
		}
		//cout<<count1<<endl;
		/*int pos1[count1];
		i=0;
		while(i < count1){
			pos1[i] = pos[i];
			i++;
		}*/
		/*for(i=0;i<N;i++){
			cout<<arr[i]<<endl;
		}
		cout<<"############################"<<endl;
		for(i=0;i<count1;i++){
			cout<<pos1[i]<<endl;
		}*/
		int safeflag=1;
		for(j=0;j<ones-1;j++)
		{
			if((onesat[j+1] - onesat[j]) < 6)
				safeflag = 0;
		}
		if(safeflag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
