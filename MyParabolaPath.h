#include<graphics.h>
#include<bits/stdc++.h>
class MyParabolaPath:public object_2d
{
    public:MyParabolaPath(int xa,int ya,float a,float tmax,float resolution)
    {
        for(float i = -tmax;i<=tmax;i+=resolution)
        {
            point_2d temp;
            temp.x = 2*a*i+xa;
            temp.y = a*i*i+ya;
            point_list.push_back(temp);
        }
    };
    public:~MyParabolaPath()
    {
        deletor();
    }
};
