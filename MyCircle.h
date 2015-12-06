#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
class MyCircle: public object_2d
{
    public :MyCircle(int xa,int ya,int r)
    {
        int p = 3 - 2*r;
        int x = 0;
        int y = r;
        putcircle(x,y,xa,ya);
        while(y>=x)
        {
            if(p>0)
            {
                p+=4*(x-y)+10;
                x++;
                y--;

            }
            else
            {
                p+=4*x+6;
                x++;

            }
            putcircle(x,y,xa,ya);
        }
    }
    public :~MyCircle()
    {
        deletor();
    }
    public :void putcircle(int x,int y,int xa,int ya)
    {
        point_2d temp;
        temp.x = xa+x;
        temp.y = ya+y;
        point_list.push_back(temp);
        temp.x = xa+y;
        temp.y = ya+x;
        point_list.push_back(temp);
        temp.x = xa+x;
        temp.y = ya-y;
        point_list.push_back(temp);
        temp.x = xa-y;
        temp.y = ya+x;
        point_list.push_back(temp);
        temp.x = xa-x;
        temp.y = ya+y;
        point_list.push_back(temp);
        temp.x = xa-x;
        temp.y = ya-y;
        point_list.push_back(temp);
        temp.x = xa+y;
        temp.y = ya-x;
        point_list.push_back(temp);
        temp.x = xa-y;
        temp.y = ya-x;
        point_list.push_back(temp);
    }
};










