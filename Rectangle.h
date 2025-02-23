#pragma once

class Rectangle
{
private:
    double Length;
    double Width;
public:
    double area;
    inline double getlength(){
        return Length;
    }
    inline double getwidth(){
        return Width;
    }
    inline double getarea(){
        area = Length * Width;
        return area;
    }
    inline void setlength(double mylength){
        Length = mylength;
    }
    inline void setwidth(double mywidth){
        Width = mywidth;
    }
};



