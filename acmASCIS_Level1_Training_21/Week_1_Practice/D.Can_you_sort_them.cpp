#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
   int a, b, c;
   cin>>a>>b>>c;
   int arr[3] = {a, b, c};
   sort(arr,arr+3);
   cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

/*
int x,y,z;
   if(a<b && a<c){
        x=a;
    if(b<c){
        y=b;
        z=c;
    }else{
        y=c;
        z=b;
    }
   }
   else if(b<a && b<c){
        x=b;
    if(a<c){
        y=a;
        z=c;
    }else{
        y=c;
        z=a;
    }
   }
   else{

     x=c;
    if(b<a){
        y=b;
        z=a;
    }else{
        y=a;
        z=b;
    }
   }
   cout<<x<<" "<<y<<" "<<z<<endl;
   */
    return 0;
}

