/* Two speed camera types: fixed and mobile 

a) fixed:
    i) if the speed is less than or equal to 100km/h, the margin of error is +-5km/h
    ii) othersiwise it will be of 5%
b) mobile:
    i) if the speed is lees than or equal to 100km/h, the margin of error is +-7km/h
    ii) otherwise, the margin of error will be of 7%
*/

#include <iostream>

using namespace std;

int main() {

    char radar_type;
    // bool is_radar_type_correct; I won't be using this variable for now
    int speed;

    // Input

    cout << "Introduce radar type (Fixed = f and Mobile = m (f/m)): ";
    cin >> radar_type;

    // It checks that the input is right 

    if ( radar_type != 'm' && radar_type != 'M' && radar_type != 'f' && radar_type != 'F') {

        cout << "FATAL ERROR: Self-destruction in 3...2...1" << endl;
        cout << "Well let's skip this part for now";

    } 

    else {

       cout << "Introduce ";

    }

    
}

