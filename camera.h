#ifndef CAMERA_H
#define CAMERA_H

class Camera
{
public:
Camera() {x_pos = 0; y_pos = 0;}
~Camera();
Camera(Camera&);

void setPos(float x, float y) { x_pos = x; y_pos = y; return;}
void getPostion(float& x, float& y) {x = x_pos; y = y_pos; return;}
//move function -- not for now, the camera will encomapss our entire game map (which will be very small)

private:

float x_pos, y_pos;

};


#endif
