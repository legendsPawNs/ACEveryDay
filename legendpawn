#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#define N 10+5

using namespace std;

typedef struct
{
    int v;//v表示物品的单位重量价值
    int w;//w表示物品的重量
}backpack;

bool compare(backpack a,backpack b)
{
    if(a.v>b.v)
        return true;
    return false;
}

int main()
{
    backpack greed[N];
    int n;
    cin>>n;
    while(n--)
    {
        memset(greed,0,sizeof(greed));
        int s,m;   //s表示有s个物品,m表示背包能承受的最大重量
        cin>>s>>m;
        for(int j=0;j<s;j++)
        {
            cin>>greed[j].v;
            cin>>greed[j].w;
        }
        sort(greed,greed+s,compare);
        /*for(int j=0;j<s;j++)
        {
            cout<<greed[j].v<<" "<<greed[j].w;
            cout<<endl;
        }*/
        int counts=0;
        for(int j=0;j<s;j++)
        {
            if(m<=greed[j].w)
            {
                counts+=m*greed[j].v;
                break;
            }
            counts+=greed[j].v*greed[j].w;
            m=m-greed[j].w;
        }
        cout<<counts<<endl;
    }
    return 0;
}
