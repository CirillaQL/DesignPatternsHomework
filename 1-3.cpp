/*
 * 将condition的不同情况作为B的派生类实现
 */

class B {
public:
    B(int n):data(n) { }
    int Data( ) const { return data; }
    void g1( );
    void g2( );
    void g3( );
private:
    const int data;
};

class B1 : public B{
public:
    B1(int n) : B(1){};
    void b1(){
        this->g1();
    }
};

class B5 : public B{
public:
    B5(int n) : B(5){};
    void b5(){
        this->g2();
    }
};

class B9 : public B{
public:
    B9(int n) : B(9){};
    void b9(){
        this->g3();
    }
};

class B100 : public B{
public:
    B100(int n) : B(100){};
    void b100(){
        this->g1();
        this->g2();
    }
};

void f( B& b ) {
    int condition = b.Data( );
    if(condition == 1) {b.g1();}
    else if(condition == 5) { b.g2( ); }
    else if(condition == 9) { b.g3( ); }
}
