#include<bits/stdc++.h>
#include<graphics.h>

class cuboid : public polygon_3d
{
    //unit cube created
    public: cuboid(int sz)
    {
        no_sides = 6;
        vector<point_3d> temp;
        point_3d temp_point;
        temp_point.x = 0;
        temp_point.y = 0;
        temp_point.z = 0;
        temp.push_back(temp_point);

        temp_point.x = 0;
        temp_point.y = sz;
        temp_point.z = 0;
        temp.push_back(temp_point);

        temp_point.x = sz;
        temp_point.y = sz;
        temp_point.z = 0;
        temp.push_back(temp_point);

        temp_point.x = sz;
        temp_point.y = 0;
        temp_point.z = 0;
        temp.push_back(temp_point);
        corner_list.push_back(temp);
        temp.clear();
        temp.resize(0);
        temp_point.x = sz;
        temp_point.y = 0;
        temp_point.z = 0;
        temp.push_back(temp_point);
        temp_point.x = sz;
        temp_point.y = 0;
        temp_point.z = sz;
        temp.push_back(temp_point);
        temp_point.x = sz;
        temp_point.y = sz;
        temp_point.z = sz;
        temp.push_back(temp_point);
        temp_point.x = sz;
        temp_point.y = sz;
        temp_point.z = 0;
        temp.push_back(temp_point);
        corner_list.push_back(temp);
        temp.clear();
        temp.resize(0);
        temp_point.x = 0;
        temp_point.y = 0;
        temp_point.z = sz;
        temp.push_back(temp_point);
        temp_point.x = 0;
        temp_point.y = sz;
        temp_point.z = sz;
        temp.push_back(temp_point);
        temp_point.x = sz;
        temp_point.y = sz;
        temp_point.z = sz;
        temp.push_back(temp_point);
        temp_point.x = sz;
        temp_point.y = 0;
        temp_point.z = sz;
        temp.push_back(temp_point);
        corner_list.push_back(temp);
        temp.clear();
        temp.resize(0);
        temp_point.x = 0;
        temp_point.y = 0;
        temp_point.z = 0;
        temp.push_back(temp_point);
        temp_point.x = 0;
        temp_point.y = 0;
        temp_point.z = sz;
        temp.push_back(temp_point);
        temp_point.x = 0;
        temp_point.y = sz;
        temp_point.z = sz;
        temp.push_back(temp_point);
        temp_point.x = 0;
        temp_point.y = sz;
        temp_point.z = 0;
        temp.push_back(temp_point);
        corner_list.push_back(temp);
        temp.clear();
        temp.resize(0);
        temp_point.x = 0;
        temp_point.y = 0;
        temp_point.z = 0;
        temp.push_back(temp_point);
        temp_point.x = sz;
        temp_point.y = 0;
        temp_point.z = 0;
        temp.push_back(temp_point);
        temp_point.x = sz;
        temp_point.y = 0;
        temp_point.z = sz;
        temp.push_back(temp_point);
        temp_point.x = 0;
        temp_point.y = 0;
        temp_point.z = sz;
        temp.push_back(temp_point);
        corner_list.push_back(temp);
        temp.clear();
        temp.resize(0);
        temp_point.x = 0;
        temp_point.y = sz;
        temp_point.z = 0;
        temp.push_back(temp_point);
        temp_point.x = sz;
        temp_point.y = sz;
        temp_point.z = 0;
        temp.push_back(temp_point);
        temp_point.x = sz;
        temp_point.y = sz;
        temp_point.z = sz;
        temp.push_back(temp_point);
        temp_point.x = 0;
        temp_point.y = sz;
        temp_point.z = sz;
        temp.push_back(temp_point);
        corner_list.push_back(temp);
        temp.clear();
        temp.resize(0);



        temp_point.x = 0;
        temp_point.y = 0;
        temp_point.z = -1;
        normal_list.push_back(temp_point);
        temp_point.x = 1;
        temp_point.y = 0;
        temp_point.z = 0;
        normal_list.push_back(temp_point);
        temp_point.x = 0;
        temp_point.y = 0;
        temp_point.z = 1;
        normal_list.push_back(temp_point);
        temp_point.x = -1;
        temp_point.y = 0;
        temp_point.z = 0;
        normal_list.push_back(temp_point);
        temp_point.x = 0;
        temp_point.y = -1;
        temp_point.z = 0;
        normal_list.push_back(temp_point);
        temp_point.x = 0;
        temp_point.y = 1;
        temp_point.z = 0;
        normal_list.push_back(temp_point);
        visible_list.push_back(false);
        visible_list.push_back(false);
        visible_list.push_back(true);
        visible_list.push_back(false);
        visible_list.push_back(false);
        visible_list.push_back(false);
    };
    public : void setcolors(int c1,int c2,int c3,int c4,int c5,int c6)
    {
        color_list.push_back(c1);
        color_list.push_back(c2);
        color_list.push_back(c3);
        color_list.push_back(c4);
        color_list.push_back(c5);
        color_list.push_back(c6);
    }

    public :~cuboid()
    {
        deletor();
    }

};
