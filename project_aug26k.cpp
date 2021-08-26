#include<bits/stdc++.h>
using namespace std;
main()
{
    int ax,ay,bx,by,cx,cy,dx,dy,i,t;
    long long int area, sum;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx = (ax+cx) - bx;
        dy = (ay+cy) - by;
        area =((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));
        sum = area * 0.5;
        if(sum<0){
            sum=sum*(-1);
        }
        printf("Case %d: %d %d %lld\n",i,dx,dy,sum);
    }
    return 0;
}