#include<bits/stdc++.h>
#include<graphics.h>
class MyEllipsePath :public object_2d
{
    public:MyEllipsePath(float a,float b,int xa,int ya,float resolution)
    {
        for(float i=0;i<=6.283;i+=resolution)
        {
            point_2d temp;
            temp.x = xa + a*cos(i);
            temp.y = ya + b*sin(i);
            point_list.push_back(temp);
        }
    };
    public: ~MyEllipsePath()
    {
        deletor();
    }
};
