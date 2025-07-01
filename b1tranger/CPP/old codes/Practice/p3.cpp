#include <iostream>
using namespace std;

class Box
{
public:
    int width;
    int height;
    int depth;
    Box(int w, int h,int d)
    {
        width = w,
        height = h;
        depth = d;
        int vol = w*d*h;
        display(vol);
    }
    void display(int vol)
    {
        cout << "volume is = " <<vol<<endl;
    }
    };

    int main()
    {
        Box B1(2,3,4);
        Box B2(5,6,7);
        Box B3(8,9,10);
        Box B4(11,12,13);
        Box B5(14,15,16);

        return 0;
    }
