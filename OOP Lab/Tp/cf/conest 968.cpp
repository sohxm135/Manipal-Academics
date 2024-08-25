#include <iostream>
#include <algorithm>
#include <climits>
 
using namespace std; 
 
int solve(int n,int a[]){
    int e[n],j=0,k=0,max=INT_MIN,op=0;
    for(int i=0;i<n;i++){
      if(a[i]%2==0){
        e[j]=a[i];
        j++;
      }
      else {
        if(max<a[i])
            max=a[i];
            k++;
      }
    }
    if(j==0||k==0) return 0;
    int s = sizeof(e) / sizeof(e[0]);
 
    std::sort(e, e + s);
 
    for(int i=0;i<j;i++){
        if(e[i]<max){
            op++;
        }
        else {
            max += e[i];
            op++;
            i--;
        }
       
    }
    return op;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
       
       for(int i=0;i<n;i++)
           cin>>a[i];
        cout<<"\n"<<solve(n,a);
    }
    return 0;
}