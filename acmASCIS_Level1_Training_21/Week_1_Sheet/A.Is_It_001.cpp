#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
   int n,m;
   char s;
   cin>>n>>s>>m;

  if((n==m && s=='=') || (n>m && s=='>') || (n<m && s=='<') ){
    cout<<"Right"<<endl;
  }
  else{
        cout<<"Wrong"<<endl;

  }

    return 0;
}

