#include<stdio.h>
#include<stdlib.h>
void merge(long long int a[], long long int n){
	int b[n];
	int k=0;
	int i=0,j=n/2;
	for(;i<n/2 && j<n;){
		if(a[i]<=a[j]){
			b[k]=a[i];
			k++;i++;
		}
		else{
			b[k]=a[j];
			k++;j++;
		}
	}
	if(j>=n){
	while(i<=n/2){
		b[k]=a[i];
		k++;i++;
	}
	}
	if(i>=n/2){
	while(j<=n){
		b[k]=a[j];
		k++;j++;
	}
	}
	for(i=0;i<n;i++){
		a[i]=b[i];
	}
}



void sort(long long int* a, long long int n){
	if(n==1){
		return;
	}
	sort(&(*a),n/2);
	sort(&(*(a+n/2)),n-n/2);
	merge(a,n);
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    long long int n;
    long long int k;
  	scanf("%lld %lld",&n,&k);
    long long int a[n];
  	long long int i;
  	for (i=0;i<n;i++){
  	scanf("%lld", &a[i]);
  	}
    sort(a,n);
    long long int j=n-1;
    i=0;
    for(;i<j;){
      if(a[i]+a[j]==k){
        //printf("%lld %lld",a[i],a[j]);
        printf("Yes\n");
        goto here;
      }
      if(a[i]+a[j]<k){
        i++;
      }
      else{
      j--;
      }
    }
    printf("No\n");
    here: ;
  }
}
