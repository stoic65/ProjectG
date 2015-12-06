
#include"libraries.h"
using namespace std;
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");

    //Sample program to move a cube in an ellipticle path , hiddn faces of cube wont be visible

    //Declare the path around which to be moved
    //Resolution kept low since animation
    MyEllipsePath *path1 = new MyEllipsePath(20,30,50,100,0.05);
    path1->draw_object(BLUE,0);
    //Loop for animation
    for(int i=0;i<path1->point_list.size();i++)
    {
        //path1->draw_object(BLUE,0);
        //Declare new cuboid object
        cuboid *c1 = new cuboid(50);
        //Rotate to demo rotation
        c1->rotatey(i*2);
        c1->translate(path1->point_list[i].x,path1->point_list[i].y,0);
        //Plot c1 --  remember for 2d use show_object function but for 3d object in this case use view_z or view_z_color
        c1->view_z(RED);
        delay(20);
        delete c1;
    }

    getch();
    closegraph();
    return 0;

}
