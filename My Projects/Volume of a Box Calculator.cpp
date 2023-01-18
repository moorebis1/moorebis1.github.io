//-----------------------//
//      Isaac Moore      //
//    Volume Calculator  //
//-----------------------//

#include <iostream>

using namespace std;

int main()
{
    int width = 15; //defines the value of the width variable
    int depth = 10; //defines the value of the depth variable
    double height = 5.5; //defines the value of the height variable

    cout << "width of box = " << width << " cm" << endl; //states the box width
    cout << "depth of box = " << depth << " cm" << endl; //states the box depth
    cout << "height of box = " << height << " cm" << endl; //states the box height
    cout << "volume of box = " << width*depth*height << " cm^3" << endl; //computes for the boxes volume

    return 0; //confirms success

}
