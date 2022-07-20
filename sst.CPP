#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	
	{
	    int a,b,v1,v2;
	    cin>>a>>b;
	    
	    
	    v1=(a*100)/10;
	    v2=(b*100)/20;
	   
	    
	    if(v1==v2)
	    cout<<"ANY"<<endl;
	    else if(v1>v2)
	    cout<<"first"<<endl;
	    else
	    cout<<"second"<<endl;
	    
	    
	}
	return 0;
}
