#include <iostream>
using namespace std;
#include <string>

int main()
{
    const double pi = 3.14159;
    int choice;
    double area, radius, length, width, base, height;

    do{
        cout<<"Geometry Calculator"<<endl;
        cout<<"1. Calculate the Area of a Circle"<<endl;
        cout<<"2. Calculate the Area of a Rectangle"<<endl;
        cout<<"3. Calculate the Area of a Triangle"<<endl;
        cout<<"4. Quit"<<endl;
        cout<<"Enter your choice (1-4)"<<endl;
        cin>>choice;

        while(choice < 1 || choice > 4)
        {
            cout<<"Invalid number choose from 1-4"<<endl;
            cout<<"Geometry Calculator"<<endl;
            cout<<"1. Calculate the Area of a Circle"<<endl;
            cout<<"2. Calculate the Area of a Rectangle"<<endl;
            cout<<"3. Calculate the Area of a Triangle"<<endl;
            cout<<"4. Quit"<<endl;
            cout<<"Enter your choice (1-4)"<<endl;
            cin>>choice;
        }
    
    
        switch(choice)
        {
            case 1:
                cout<<"Enter the radius of the circle"<<endl;
                cin>> radius;
                if(radius < 0)
                {
                    cout<<"Invalid: Negative Number"<<endl;
                    break;
                }   
                else
                {
                    area = pi*radius*radius;
                    cout<<"The area of the circle: " << area << endl;
                }
                    break;

            case 2:
                cout<<"Enter the length of the rectangle"<<endl;
                cin>>length;
                if(length < 0)
                {
                    cout<<"Invalid: Negative Number"<<endl;
                    break;
                }

                cout<<"Enter the width of the rectangle"<<endl;
                cin>>width;
                if(width < 0)
                {
                    cout<<"Invalid: Negative Number"<<endl;
                    break;
                }
                else
                {
                    area = length * width;
                    cout<<"The area of the rectangle: "<< area << endl;
                }
                    break;

            case 3:
                cout<<"Enter the base of the triangle"<<endl;
                cin>>base;
                if(base < 0)
                {
                    cout<<"Invalid: Negative Number"<<endl;
                    break;
                }
                cout<<"Enter the height  of the triangle"<<endl;
                cin>>height;
                if(height < 0)
                {
                    cout<<"Invalid: Negative Number"<<endl;
                    break;
                }

                else
                {
                    area = base * height * 0.5;
                    cout<<"The area of the triangle: "<< area << endl;
                }
                    break;

            case 4:
                    break;


        }
    }
    while(choice != 4);

    
    
    
    return 0;  
}