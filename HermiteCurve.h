#include<bits/stdc++.h>
#include<graphics.h>
class HermiteCurve : public object_2d
{
    public : HermiteCurve(int x1,int y1,int x2,int y2,int x12,int y12,int x22,int y22,float resolution)
    {
        int coeffx1 = 2*(x1-x2) +x12+x22;
        int coeffx2 = -3*(x1-x2)-2*x12-x22;
        int coeffx3 = x12;
        int coeffx4 = x1;
        int coeffy1 = 2*(y1-y2) +y12+y22;
        int coeffy2 = -3*(y1-y2)-2*y12-y22;
        int coeffy3 = y12;
        int coeffy4 = y1;
        for (float u = 0;u<=1;u+=resolution)
        {
            point_2d temp;
            temp.x = u*u*u*coeffx1+u*u*coeffx2+u*coeffx3+coeffx4;
            temp.y = u*u*u*coeffy1+u*u*coeffy2+u*coeffy3+coeffy4;
            point_list.push_back(temp);
        }
    }
    public : ~HermiteCurve()
    {
        deletor();
    }
};
