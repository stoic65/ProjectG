
#include<bits/stdc++.h>
#include<graphics.h>
#define PI 3.14159
using namespace std;
struct point_2d
{
    float x,y;
};

class object_2d
{


    public : std::vector <point_2d> point_list;
    public:void putpoint(int x,int y,int colour)
    {
        putpixel(x+320,240-y,colour);
    }
    public : void draw_object(int colour,float del)
    {
        int sz = point_list.size();
        for(int i=0;i<sz;i++)
        {
            delay(del);
            putpoint(point_list[i].x,point_list[i].y,colour);
        }
    }
    public: void show_points()
    {
        int sz = point_list.size();
        for(int i=0;i<sz;i++)
        {
            cout<<point_list[i].x<<" "<<point_list[i].y<<endl;
        }
    }
    public: void translate(int xa,int ya)
    {
        int sz = point_list.size();
        for(int i=0;i<sz;i++)
        {
            point_list[i].x +=xa;
            point_list[i].y +=ya;
        }
    }
    public: void scale(float xs,float ys)
    {
        int sz = point_list.size();
        for(int i=0;i<sz;i++)
        {
            point_list[i].x *=xs;
            point_list[i].y *=ys;
        }
    }
    public:void rotatez(float angle)
    {
        float radians = (PI/180)*angle;
        int sz = point_list.size();
        for(int i=0;i<sz;i++)
        {
            float xold = point_list[i].x;
            float yold = point_list[i].y;
            point_list[i].x = xold*cos(radians) - yold*sin(radians);
            point_list[i].y = yold*cos(radians) + xold*sin(radians);
        }
    }
    public:void rotatex(float angle)
    {
        float radians = (PI/180)*angle;
        int sz = point_list.size();
        for(int i=0;i<sz;i++)
        {
            float yold = point_list[i].y;
            point_list[i].y = yold*cos(radians);
        }
    }
    public:void rotatey(float angle)
    {
        float radians = (PI/180)*angle;
        int sz = point_list.size();
        for(int i=0;i<sz;i++)
        {
            float xold = point_list[i].x;
            point_list[i].x = xold*cos(radians);
        }
    }
    public: void deletor()
    {
        int sz = point_list.size();
        for(int i=0;i<sz;i++)
        {
            putpoint(point_list[i].x,point_list[i].y,BLACK);
        }
    }
};

