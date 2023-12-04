#include <iostream>

class GemetricFigure
{
public:
    virtual void verification_func() = 0;
    virtual void print_info() = 0;
};

class Triangle : public GemetricFigure
{
protected:
    int a = 10, b = 20, c = 30;
    int n = 3; // количество сторон
    double A = 50, B = 60, C = 70;
public:
    Triangle() {};
    Triangle(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void print_info() override {
        std::cout << "Стороны: " << a << ", " << b << ", " << c << '\n' << "Углы: " << A << ", " << B << ", " << C << std::endl;
    }
    void verification_func() override {
        if (n = 3 && ((A + B + C) == 180)) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
    }
};

class RightTriangle : public Triangle
{
public:
    RightTriangle() {
        a = 10;
        b = 20;
        c = 30;
        A = 50;
        B = 60;
        C = 90;
    }
    RightTriangle(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void verification_func() override {
        if (n = 3 && (A == 90 || B == 90 || C == 90)) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
    }
};

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle() {
        a = 10;
        b = 30;
        c = 10;
        A = 50;
        B = 60;
        C = 50;
    }
    IsoscelesTriangle(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void verification_func() override {
        if (n = 3 && (a == c && A == C)) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
    }
};

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle() {
        a = 30;
        b = 30;
        c = 30;
        A = 60;
        B = 60;
        C = 60;
    }
    EquilateralTriangle(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void verification_func() override {
        if (n = 3 && (a == b == c && A == B == C == 60)) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
    }
};

class Quadrilateral : public GemetricFigure
{
protected:
    int a = 10, b = 20, c = 30, d = 40;
    int n = 4; //Количество сторон
    double A = 50, B = 60, C = 70, D = 80;
public:
    Quadrilateral() {};
    Quadrilateral(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void print_info() override {
        std::cout << "Стороны: " << a << ", " << b << ", " << c << ", " << d << '\n' << "Углы: " << A << ", " << B << ", " << C << ", " << D << std::endl;
    }
    void verification_func() override {
        if (n = 4 && (a == c == b == d && (A + C + B + D) == 360)) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
    }
};

class Rectangle : public Quadrilateral
{
public:
    Rectangle() {
        a = 10;
        b = 20;
        c = 10;
        d = 20;
        A = 90;
        B = 90;
        C = 90;
        D = 90;
    }
    Rectangle(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void verification_func() override {
        if (n = 4 && (a == c && b == d && A == C == B == D == 90)) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
    }
};

class Square : public Quadrilateral
{
public:
    Square() {
        a = 20;
        b = 20;
        c = 20;
        d = 20;
        A = 90;
        B = 90;
        C = 90;
        D = 90;
    }
    Square(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void verification_func() override {
        if (n = 4 && (a == c == b == d && A == C == B == D == 90)) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
    }
};

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram() {
        a = 20;
        b = 30;
        c = 20;
        d = 30;
        A = 30;
        B = 40;
        C = 30;
        D = 40;
    }
    Parallelogram(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void verification_func() override {
        if (n = 4 && (a == c && b == d && A == C && B == D)) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
    }
};

class Rhomb : public Quadrilateral
{
public:
    Rhomb() {
        a = 30;
        b = 30;
        c = 30;
        d = 30;
        A = 30;
        B = 40;
        C = 30;
        D = 40;
    }
    Rhomb(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void verification_func() override {
        if (n = 4 && (a == b == c == d && A == C && B == D)) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "rus");
    Triangle t_triangle;
    std::cout << "Треугольник: " << std::endl;
    Triangle* t_ptr = &t_triangle;
    t_ptr->verification_func();
    t_ptr->print_info();
    //t_triangle.verification_func();
    //t_triangle.print_info();

    RightTriangle r_triangle;
    std::cout << "\nПрямоугольный треугольник: " << std::endl;
    RightTriangle* r_ptr = &r_triangle;
    r_ptr->verification_func();
    r_ptr->print_info();
    //r_triangle.verification_func();
     //r_triangle.print_info();

    IsoscelesTriangle i_triangle;
    std::cout << "\nРавнобедренный треугольник: " << std::endl;
    IsoscelesTriangle* i_ptr = &i_triangle;
    i_ptr->verification_func();
    i_ptr->print_info();
    //i_triangle.verification_func();
    //i_triangle.print_info();

    EquilateralTriangle e_triangle;
    std::cout << "\nРавносторонний треугольник: " << std::endl;
    EquilateralTriangle* e_ptr = &e_triangle;
    e_ptr->verification_func();
    e_ptr->print_info();
    //e_triangle.verification_func();
    //e_triangle.print_info();

    Quadrilateral q_quadr;
    std::cout << "\nЧетырехугольник: " << std::endl;
    Quadrilateral* qq_ptr = &q_quadr;
    qq_ptr->verification_func();
    qq_ptr->print_info();
    //q_quadr.verification_func();
    //q_quadr.print_info();

    Rectangle r_quadr;
    std::cout << "\nПрямоугольник: " << std::endl;
    Rectangle* rq_ptr = &r_quadr;
    rq_ptr->verification_func();
    rq_ptr->print_info();
    //r_quadr.verification_func();
    //r_quadr.print_info();

    Square s_quadr;
    std::cout << "\nКвадрат: " << std::endl;
    Square* sq_ptr = &s_quadr;
    sq_ptr->verification_func();
    sq_ptr->print_info();
    //s_quadr.verification_func();
    //s_quadr.print_info();

    Parallelogram p_quadr;
    std::cout << "\nПараллелограмь: " << std::endl;
    Parallelogram* pq_ptr = &p_quadr;
    pq_ptr->verification_func();
    pq_ptr->print_info();
    //p_quadr.verification_func();
    //p_quadr.print_info();

    Rhomb rb_quadr;
    std::cout << "\nРомб: " << std::endl;
    Rhomb* rbq_ptr = &rb_quadr;
    rbq_ptr->verification_func();
    rbq_ptr->print_info();
    //rb_quadr.verification_func();
    //rb_quadr.print_info();

    return 0;
}
