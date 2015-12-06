#include<bits/stdc++.h>
#include<graphics.h>

class MyEllipse: public object_2d
{
    public : MyEllipse(int xa,int ya,float a,float b)
    {
        float x = 0, y = b;
        float d = b*b + (a*a)/4 - a*a*b;
        putellipse(xa, ya, x, y);
        while ((a*a*y) >= (b*b*x))
        {
            if (d <= 0)
                d += b*b*(2*x + 3);
            else {
                d += b*b*(2*x + 3) - 2*a*a*(y-1); y--;
            }
            x++;
            putellipse(xa, ya, x, y);
        }


        d = d;
        while (y >= 0)
        {
            if (d >= 0)
                d += a*a*(3 - 2*y);
            else {
                d += b*b*(2*x + 2) + a*a*(3 - 2*y); x++;
                }
            y--;
            putellipse(xa, ya, x, y);
        }

    };
    public : void putellipse(int xa,int ya,float x,float y)
    {
        point_2d temp;
        temp.x = xa+x;
        temp.y = ya+y;
        point_list.push_back(temp);
        temp.x = xa-x;
        temp.y = ya+y;
        point_list.push_back(temp);
        temp.x = xa+x;
        temp.y = ya-y;
        point_list.push_back(temp);
        temp.x = xa-x;
        temp.y = ya-y;
        point_list.push_back(temp);
    }
    public: ~MyEllipse()
    {
        deletor();
    }
};
