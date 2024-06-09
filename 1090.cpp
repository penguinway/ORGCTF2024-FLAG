#include<cstdio>
#include<queue>
using namespace std;
int pile[10005]={0};
int len=0;
int main()
{
    int n;
    scanf("%d",&n);
    priority_queue<int,vector<int>,greater<int> > q;
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        q.push(x);
    }

    int ans=0;
    while(q.size()!=1)
    {
        int a1=q.top();
        q.pop();
        int a2=q.top();
        q.pop();
        ans+=a1+a2;
        q.push(a1+a2);
    }
    printf("%d\n",ans);
}
