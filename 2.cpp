/*
 * 简单工厂模式进行代码重构，根据传入运行符号的不同创建不同的类
 */

#include <iostream>

using namespace std;

class work{
protected:
    int numa;
    int numb;
public:

    virtual void answer()=0;
};

class add : public work{
public:
    add(int a,int b){
        this->numa = a;
        this->numb = b;
    }
    void answer() override{
        cout << (numa + numb) << endl;
    }
};

class sub : public work{
public:
    sub(int a, int b){
        this->numa = a;
        this->numb = b;
    }
    void answer() override{
        cout << (numa - numb) << endl;
    }
};

class Plus : public work{
public:
    Plus(int a, int b){
        this->numa = a;
        this->numb = b;
    }
    void answer() override{
        cout << (numa * numb) << endl;
    }
};

class Div : public work{
public:
    Div(int a, int b){
        this->numa = a;
        this->numb = b;
    }
    void answer() override{
        cout << (numa/(double)numb) << endl;
    }
};

int main()
{
    int numa,numb; char oper; double result;
    cin>>numa>>numb;  cin>>oper;
    switch(oper) {
        case '+': {
            work *ans1 = new add(numa, numb);
            ans1->answer();
            break;
        }
        case '-': {
            work *ans2 = new sub(numa, numb);
            ans2->answer();
            break;
        }
        case '*': {
            work *ans3 = new Plus(numa, numb);
            ans3->answer();
            break;
        }
        case '/': {
            work *ans4 = new Div(numa, numb);
            ans4->answer();
            break;
        }
    }
    return 0;
}

