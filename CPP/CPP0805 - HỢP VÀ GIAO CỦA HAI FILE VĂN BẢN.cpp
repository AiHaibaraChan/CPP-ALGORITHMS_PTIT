#include<iostream>
#include <fstream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#define ll long long
#define N 10001
#define yes puts("YES");
#define no puts("NO");
#define N INT_MAX
using namespace std;
bool cmp(string a,string b)
{
return a<b;
}
string solve(string s)
{
int n=s.size();
string str="";
for(int i=0;i<n;i++)
if(s[i]>='A'&&s[i]<='Z')
s[i]+=32;
str=s;
return str;
}
main()
{
fstream in1,in2;
in1.open("DATA1.in",ios::in);
in2.open("DATA2.in",ios::in);
vector<string>v1;
vector<string>v2;
set<string>se1;
set<string>se2;
set<string>hop;
string s;
while(in1>>s)
{
s=solve(s);
v1.push_back(s);
}
while(in2>>s)
{
s=solve(s);
v2.push_back(s);
}
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
for(auto x:v1)
{
se1.insert(x);
hop.insert(x);
}
for(auto x:v2)
{
se2.insert(x);
hop.insert(x);
}
for(auto x:hop)
cout<<x<<" ";
cout<<endl;
for(auto x:se1){
if(se2.find(x)!=se2.end())
cout<<x<<" ";
}
}

