#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>k>>n;
	    if(n==1){
	        cout<<0<<endl;
	        continue;
	    }
	    vector<int>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end());
	    int minw=v[0]; int maxw=v[n-1];
	    for(int i=0;i<n;i++){
	        if(abs(v[i]-minw)>abs(v[i]-maxw)){
	            v[i]-=k;
	        }
	        else{
	            v[i]+=k;
	        }
	        
	    }
	   /* for(int i=0;i<n;i++){
	    	cout<<v[i]<<",";
	    }*/
	    cout<<endl;
	    int min1=v[0];
	    int max1=v[n-1];
	    for(int i=1;i<n-1;i++){
	        if(v[i]<min1){
	            min1=v[i];
	        }
	        if(v[i]>max1){
	            max1=v[i];
	        }
	        
	    }
	    cout<<(max1)-(min1)<<endl;
	    
	}
	return 0;
}
