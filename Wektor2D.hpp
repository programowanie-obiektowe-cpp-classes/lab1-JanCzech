class Wektor2D
{

private:
    double x;
    double y;

public:
    Wektor2D()
    {
        x = 0.0;
        y = 0.0;
    }

    Wektor2D(double X, double Y)
    {
        x = X;
        y = Y;
    }

    void setX(double X) { x = X; }

    void setY(double Y) { y = Y; }

    double getX() { return x; }
    double getY() { return y; }

    friend Wektor2D operator+(Wektor2D vec_1, Wektor2D vec_2)
    {
        return Wektor2D(vec_1.getX() + vec_2.getX(), vec_1.getY() + vec_2.getY());
    };

    friend double operator*(Wektor2D vec_1, Wektor2D vec_2)
    {
        return vec_1.getX() * vec_2.getX() + vec_1.getY() * vec_2.getY();
    }
};



















/*
class Wektor2D
{
public:
    double wspx;
    double wspy;
    Wektor2D()
    {
        wspx = 0;
        wspy = 0;
         int norm()
        {
            return sqrt(wspx * wspx + wspy * wspy);
        }
        void print()
        {
            std::cout << "Wspó³rzêdne wektora (w ³adnym formacie) to " << wspx << " " << wspy
                      << std::endl; 
        }
    }
    Wektor2D(double a, double b)
    {
        wspx = a;
        wspy = b;
        std::cout << "Nadane wartoœci: " << wspx << " " << wspy << std::endl;
    }
     ~Wektor2D()
    {
        std::cout << "Nadane wartoœci: " << wspx << " " << wspy << " zostan¹ usuniête destruktorem"
                  << std::endl;
        // delete wspx;
        // delete wspy;
    } 

    void     setX(double X) { wspx = X; }
    double   getX() {}
    void     setY(double Y) { wspy = Y; }
    double   getY() {}
    Wektor2D operator+(Wektor2D wec)
    {
        std::cout << "wywo³ano operator +  "
                  << " " << std::endl;
        Wektor2D sum;
        sum.wspx = wspx + wec.wspx;
        sum.wspy = wspy + wec.wspy;
        return sum;
    }
    
    // sum operator+(Wektor2D v1, Wektor2D v2){
    //     std::cout << "wywo³ano operator +  " << wspx << " " << wspy <<std::endl;
    //     return sum =
    // }
};
*/

/*class Informer
{
    public:
    domyslny(){
        std::cout<<"wydruk z konstruktora domyslnego"<<std::endl;
    }
    ~domyslny(){
        std::cout<<"wydruk z destruktora domyslnego"<<std::endl;
    }
} */
