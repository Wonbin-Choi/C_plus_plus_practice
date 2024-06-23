#ifndef __11_H__
#define __11_H__
class Box{
	int width, height;
	char fill;
 public:
	Box(int w, int h);
	void setFill(char f);
	void setSize(int w, int h);
	void draw();
};

#endif
