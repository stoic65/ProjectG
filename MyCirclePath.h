#include<graphics.h>
#include<bits/stdc++.h>
class MyCirclePath :public object_2d
{
    public:MyCirclePath(int xa,int ya,int r,float resolution)
    {
        for(float i=0;i<=6.283;i+=resolution)
        {
            point_2d temp;
            temp.x = r*cos(i)+xa;
            temp.y = r*sin(i)+ya;
            point_list.push_back(temp);
        }
    }
    public :~MyCirclePath()
    {
        deletor();
    }
};
