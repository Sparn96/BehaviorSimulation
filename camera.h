#ifndef CAMERA_H
#define CAMERA_H

class Camera
{
public:
Camera();
~Camera();
Camera(Camera&);

void setPos(float x, float y) { x_pos = x; y_pos = y; return;}
void getPostion(float& x, float& y) {x = x_pos; y = y_pos; return;}
//move function?  NICK?

private:

float x_pos, y_pos;

};


#endif
