#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include<iomanip>
#define ll long long
using namespace std;
int cnt=0;
class DN{
public:
string id,ten;
int size;
public:
DN()
{
this->id="";
this->ten="";
this->size=0;
}
friend istream &operator>>(istream &is,DN &a)
{
scanf("\n");
getline(is,a.id);
getline(is,a.ten);
cin>>a.size;
return is;
}
friend ostream &operator<<(ostream &os,DN &a)
{
cout<<a.id<<" "<<a.ten<<" "<<a.size<<endl;
return os;
}
};
bool cmp(DN a,DN b)
{
if(a.size!=b.size) return a.size>b.size;
return a.id<b.id;
}
int main()
{
int n,q;
cin>>n;
DN ds[n];
for(int i=0;i<n;i++) cin>>ds[i];
sort(ds,ds+n,cmp);
for(int i=0;i<n;i++) cout<<ds[i];
}


