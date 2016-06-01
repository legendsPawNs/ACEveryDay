#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <cstring>

#define N 5000+10
using namespace std;

int main()
{
	string str1,str2;
	int s1[N];
	int s2[N];
	memset(s1,0,sizeof(s1));
	memset(s2,0,sizeof(s2));
	while(cin>>str1>>str2)
	{
	    int counts=0;
	    int m=0,n=0;
		int len;
		len=str1.length();
		for(int i=0;i<len;i++)
        {
            if(str1[i]=='+')
                m++;
            if(str2[i]=='+')
                n++;
        }
        if(m!=n)
            cout<<"-1"<<endl;
        else
        {
            int i;
            int j=0;
            int k=0;
            for(i=0;i<len;i++)
            {
                if(str1[i]=='+')
                {
                    s1[j]=i;
                    j++;
                }
                if(str2[i]=='+')
                {
                    s2[k]=i;
                    k++;
                }
            }
            /*for(i=0;i<j;i++)
            {
                cout<<s1[i]<<" ";
            }
            cout<<endl;
            for(i=0;i<j;i++)
            {
                cout<<s2[i]<<" ";
            }*/

            for(j=j-1;j>=0;j--)
               counts+=fabs(s1[j]-s2[j]);

            cout<<counts<<endl;
        }
    }
	return 0;
}









