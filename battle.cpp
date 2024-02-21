#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
#define MAX 100
int find(string s,char x)
{
    for(int i=0;i<s.length();++i)
    {
        if(s[i]==x) return i;

    }
    return 0;
}

int main()
{
    int n;cin>>n;
    scanf("\n");
    map<string,vector<string>> mp;
    for(int i=0;i<n;++i)
    {
        string s;
        getline(cin,s);
        int pos=find(s,'-');
        string t1 = s.substr(0,pos-1);
        string t2 = s.substr(pos+1);
        mp[t1].push_back(t2);
        mp[t2].push_back(t1);
        cout<<t1<<" "<<t2;
    }
    for(auto it:mp)
    {
        vector<string>tmp=it.second;
        sort(tmp.begin(),tmp.end());
        cout<<it.first<<" : ";;
        for(int i=0;i<tmp.size();++i)
        {
            cout<<tmp[i];
            if(i<tmp.size()-1) cout<<", ";

        }
        cout<<endl;
    }
}
