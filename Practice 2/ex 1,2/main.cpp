#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    private: 
        double a, b, c;
        float radius, x_center, y_center;
    public:
        bool exst_tr (){
            return ((a+b>c) && (b+c > a)&& (a+c>b));
        }
        void set (double a1, double b1, double c1){
            a = a1;
            b = b1;
            c = c1;
        }
        void show() {
            cout << "1 сторона: "  << a << endl;
            cout << "2 сторона: "  << b << endl;
            cout << "3 сторона: "  << c << endl;
            
        }
        double perimetr () {
            double p = a + b + c;
            return p;
        }
        double square (){
            double p = (a+b+c)/2;
            double s = sqrt(p * (p-a) * (p-b) * (p-c));
            return s;
        }
};

class Circle {
    private:
        float radius, x_center, y_center;
    public:
        void set_circle (float r, float x, float y){
            radius = r;
            x_center = x;
            y_center = y;
            
        }
        float square () {
            return 3.14 * radius * radius;
        }
        
        bool triangle_around (float a, float b, float c){
            float p = (a+b+c)/2;
            float s = sqrt(p * (p-a) * (p-b) * (p-c));
            return ((a*b*c/(4*s)) == radius);
            
        }
        bool triangle_in (float a, float b, float c){
            return ((a+b-c)/2 == radius);
            
        }
        bool check_circle (float r, float x_cntr, float y_cntr){
            float rast = sqrt((x_cntr - x_center) * (x_cntr - x_center) + (y_cntr - y_center) * (y_cntr - y_center));
            return rast < (r + radius);
            
        }
        
};

int main()
{
    Triangle mas[3];
    double a,b,c;
    float radius, x_center, y_center;
    
    for (int i = 0; i < 3; i ++){
        cin >> a >> b >> c;
        mas[i].set(a,b,c);
        if (!(mas[i].exst_tr())) {
            cout << "Введите стороны еще раз";
            i -- ;
        }
    }
    for (int i = 0; i < 3; i++){
        mas[i].show();
        cout << "Периметр треугольника: "<< mas[i].perimetr() << endl;
        cout << "Площадь треугольника: "<< mas[i].square() << endl;
    }
    Circle circle;
    cin >>radius >> x_center >> y_center;
    circle.set_circle(radius, x_center, y_center);
    if (circle.triangle_around(10,6,8) == true){
        cout << "True" << endl;
    }
    else {
        cout << "No" << endl;
    }
    if (circle.triangle_in(10,6,8) == true){
        cout << "True" << endl;
    }
    else {
        cout << "No" << endl;
    }
    if (circle.check_circle(10,6,8) == true){
        cout << "True" << endl;
    }
    else {
        cout << "No" << endl;
    }
    

}