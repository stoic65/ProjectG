#include<bits/stdc++.h>
#include<graphics.h>
//#include<C:\Programming\Graphics\ProjectG\objects.h>
class MyLine: public object_2d
{
    public:MyLine(int x1,int y1,int x2,int y2)
    {

        int xa, ya,xb,yb;
        if(x1<x2)
        {
            xa=x1;ya=y1;
            xb=x2;yb=y2;
        }
        else
        {
            xa=x2;ya=y2;
            xb=x1;yb=y1;
        }

        int dx,dy;
        dx=xb-xa;
        dy=yb-ya;
        int d;
        float x=xa, y=ya;
        point_2d temp;
        temp.x = x;temp.y = y;
        point_list.push_back(temp);
        if(dx == 0)
        {
            y = y1<=y2?y1:y2;
            for(int i = 0;i<=abs(dy);i++)
            {
                y++;
                point_2d temp;
                temp.x = x;temp.y = y;
                point_list.push_back(temp);
            }
           // cout<<"yolo1"<<endl;
            return;
        }
            float m = 1.0*dy/dx;
        if(m>=0 && m<=1)
        {
            d=2*dy-dx;
            while(x<xb)
        {
            if(d<0)
            {d+=2*dy;x++;}
            else
            {d+=2*(dy-dx); x++;y++;}
            point_2d temp;
            temp.x = x;temp.y = y;
            point_list.push_back(temp);
        }
    }
    else if(m>1)
    {
        d=2*dx-dy;
        while(x<xb)
        {
            if(d<0)
            {d+=2*dx; y++;}
            else
            {d+=2*(dx-dy);x++;y++;}
            point_2d temp;
            temp.x = x;temp.y = y;
            point_list.push_back(temp);

        }
    }
    else if(m>=-1 && m<0)
    {
        d=-2*dy-dx;
        while(x<xb)
        {
            if(d<0)
            {d-=2*dy; x++;}
            else
            {d-=2*(dx+dy); y--;x++;}
            point_2d temp;
            temp.x = x;temp.y = y;
            point_list.push_back(temp);
        }
    }
    else if(m<-1)
    {
        d = -2*dx-dy;
        while(x<xb)
        {
            if(d>0)
            {d-= 2*dx; y--;}
            else
            {
                d-= 2*(dx+dy);
                y--;
                x++;
            }
            point_2d temp;
            temp.x = x;temp.y = y;
            point_list.push_back(temp);
        }
    }
};
    public :~MyLine()
    {
        deletor();
    }
};







