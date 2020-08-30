#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int list1[a],list2[b],list3[c],com[50000];
	int p,i=0,j=0,k=0;
	while(cin>>p && i<a){
		list1[i++] = p;
	}
	while(cin>>p && j<b){
		list2[j++] = p;
	}
	while(cin>>p && k<c){
		list3[k++] = p;
	}
	sort(list1,list1+a);
	sort(list2,list2+b);
	sort(list3,list3+c);
	
	i=0,j=0,k=0;
	int l=0;
 
   while(a > i && b > j && c > k){
   	
   		if(list1[i] == list2[j] && list2[j] == list3[k]){
		   		com[l++] = list1[i];
		   }
 		else if (list1[i] < list2[j]) { 
          i++;
 
       }else if(list2[j] < list1[i]){
         j++;
 
       } else if(list1[i] == list2[j]){
 		com[l++] = list1[i];
        i++;
        j++;
      }
      else if(list1[i] == list3[k]){
      	com[l++] = list1[i];
      	i++;
      	k++;
	  }
	  else if(list2[j] == list3[k]){
	  	com[l++] = list2[i];
	  	j++;
	  	k++;
	  }
   }
   i=0;
   while(com[i++]){
   	cout<<com[i]<<endl;
   }
}
