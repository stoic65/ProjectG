# ProjectG
Extended API for drawing and transforming 2d,3d objects and curves in WinBGI

>include only libraries.h using "" , dont use <>

#2D Objects

##1. Line
For creating line do

`MyLine *l1 = new MyLine(x1,y1,x2,y2);`

> Here x1,y1 and x2,y2 are staring ending points

####Functions include

* ` l1->draw_object(colour,delay); `

> displaying object on screen, colour of line, delay in millisecond for draw speed

  
*	`l1->rotatez(angle);`

> rotate along z axis

  
* `l1->scale(xscale,yscale);`

> scaling 

  
* `delete l1`

> Removes object from screen 
  
  
*	`l1->rotatex(angle);`
	
> rotate along x axis(Not recommed to use for 2d other than for special cases)
  
  
*	`l1->rotatey(angle);`

> rotate along y axis(Not recommed to use for 2d other than for special cases)


##2. Circle
For creating circle  do

	`MyCircle *c1 = new MyCircle(xa,ya,r);`
> xa,ya position of center and r is radius

####Functions include

* ` c1->draw_object(colour,delay); `

> displaying object on screen, colour of line, delay in millisecond for draw speed

  
*	`c1->rotatez(angle);`

> rotate along z axis

  
* `c1->scale(xscale,yscale);`

> scaling 

  
* `delete c1`

> Removes object from screen 
  
  
*	`c1->rotatex(angle);`
	
> rotate along x axis(Not recommed to use for 2d other than for special cases)
  
  
*	`c1->rotatey(angle);`

> rotate along y axis(Not recommed to use for 2d other than for special cases)

##3. Hermite Curve
For creating curve  do

	`HermiteCurve *h1 = new HermiteCurve(x1,y1,x2,y2,x12,y12,x12,y12,resolution);`
  > x1,y1 and x2,y2 starting ending points x12,y12 and x22,y22 are tangent cood; resolution is between 0 and 1, ideally 0.001 best but   > 0.01 might do too

####Functions include

* ` h1->draw_object(colour,delay); `

> displaying object on screen, colour of line, delay in millisecond for draw speed

  
*	`h1->rotatez(angle);`

> rotate along z axis

  
* `h1->scale(xscale,yscale);`

> scaling 

  
* `delete h1`

> Removes object from screen 
  
  
*	`h1->rotatex(angle);`
	
> rotate along x axis(Not recommed to use for 2d other than for special cases)
  
  
*	`h1->rotatey(angle);`

> rotate along y axis(Not recommed to use for 2d other than for special cases)





####Instructions for path objects
suitable for animating and moving objects around the path 
To do this create path, access the point_list of the path object and translate the object to be moved to that position, repeat for all points in the point list(See example in main for more clarity)

##4.  CirclePath

	MyCirclePath *cp1 = new MyCirclePath(xa,ya,radius,resolution);
> xa,ya center point of circle path, resolution ideally ~0.01
####Functions include

* ` cp1->draw_object(colour,delay); `

> displaying object on screen, colour of line, delay in millisecond for draw speed

  
*	`cp1->rotatez(angle);`

> rotate along z axis

  
* `cp1->scale(xscale,yscale);`

> scaling 

  
* `delete cp1`

> Removes object from screen 
  
  
*	`cp1->rotatex(angle);`
	
> rotate along x axis(Not recommed to use for 2d other than for special cases)
  
  
*	`cp1->rotatey(angle);`

> rotate along y axis(Not recommed to use for 2d other than for special cases)

##5. Ellipse Path

	MyEllipsePath *ep1 = new MyEllipsePath(xa,ya,a,b,resolution);
>xa,ya center points a,b major minor axis, resoltion intervals of sampling ~0.01 (if pixelated decrease resolution) 
####Functions include

* ` ep1->draw_object(colour,delay); `

> displaying object on screen, colour of line, delay in millisecond for draw speed

  
*	`ep1->rotatez(angle);`

> rotate along z axis

  
* `ep1->scale(xscale,yscale);`

> scaling 

  
* `delete ep1`

> Removes object from screen 
  
  
*	`ep1->rotatex(angle);`
	
> rotate along x axis(Not recommed to use for 2d other than for special cases)
  
  
*	`ep1->rotatey(angle);`

> rotate along y axis(Not recommed to use for 2d other than for special cases)

##6. Parabola Path

	MyParabolaPath *p1 = new MyParabolaPath(xa,ya,a,tmax,resolution);
> xa,ya start point of parabola , a coefficient of parabola , tmax maximum starting point of parameter t
> Adjust a and tmax accordingly so parabola fits sceen
####Functions include

* ` p1->draw_object(colour,delay); `

> displaying object on screen, colour of line, delay in millisecond for draw speed

  
*	`p1->rotatez(angle);`

> rotate along z axis

  
* `p1->scale(xscale,yscale);`

> scaling 

  
* `delete p1`

> Removes object from screen 
  
  
*	`p1->rotatex(angle);`
	
> rotate along x axis(Not recommed to use for 2d other than for special cases)
  
  
*	`p1->rotatey(angle);`

> rotate along y axis(Not recommed to use for 2d other than for special cases)


# 3D object

* Cuboid 
  'cuboid *cub1 = new cuboid(size);`
> size gives the size of a side of a cube, use scaling and rotation for further positioning
> Hidden face elimination is included in the working

*	`cub1->setcolors(color1,color2,color3,color4,color5,color6);`

> Set the colors for the faces of cube

*	`cub1->view_z_color(color);`

> View the figure with faces filled with corresponding color, here color parameter is the color of edges

*	`cub1->view_z(color);`

> View the figure without filled colors, here color parameter is for edge color

*	`cub1->rotatez(angle);`

> rotate along z axis
  
* `cub1->scale(xscale,yscale,zscale);`

> scaling 

  
* `delete cub1`

> Removes object from screen 
  
  
*	`cub1->rotatex(angle);`
	
> rotate along x axis
  
  
*	`cub1->rotatey(angle);`

> rotate along y axis

