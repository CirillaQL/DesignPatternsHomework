# DesignPatternsHomework
## 本项目用来记录设计模式作业代码，题目在此更新
### 1-1
一个开宝箱游戏的基本描述为:游戏中有多种类型的人物(Role)，如战士(Solider)、魔法师(Mage)等，主角的类型只能选择其中一种，且游戏中不再更改。
游戏中还有各种宝箱(Box)，如装有不同数目金钱的宝箱、装有毒物的宝箱等。当任一种类型的主角打开装有金钱的宝箱时，宝箱中的金钱会增加给主角，同时
宝箱的金钱数目变成0；当战士打开装有毒物的宝箱时，战士的生命值(HP)会减少10%，但金钱(Money)增加20%；当魔法师打开装有毒物的宝箱时，魔法师
的生命值(HP)会减少30%，但金钱(Money)增加40% 。
请根据上述描述，给出相应类的设计并完整实现，要求你的设计应具有良好的扩展性，如增加新角色类型及箱子种类时，不需要修改已有的设计及实现。

### 1-2
给出适当的类设计和相应的代码:  有一个只能放进不能取出的盒子, 最多可放8个水果, 不一定一天放入。水果只是苹果和桔子两种, 它们放入盒子前的原始重
量分别为50和30, 放入盒子后, 由于丢失水分, 它们的重量减轻, 苹果和桔子每天分别减轻4和3, 直到达到各自原始重量的3/5后, 不再减轻重量。盒子的功能有: 
输出盒子中苹果的数量; 输出盒子中桔子的数量; 输出一天来盒子中水果减轻的总重量; 输出当前水果的总重量。

### 1-3
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
         void f( B& b ) {
            int condition = b.Data( );           
            if(condition == 1) { b.g1( ); }
            else if(condition == 5) { b.g2( ); }
            else if(condition == 9) { b.g3( ); }
         }

当把此程序交给用户试用时, 针对函数f, 用户提出了一项新的要求: 当condition为100时, 依次执行b的成员函数g1( )和g2( )。经过进一步了解, 小王获悉: 以后
可能还要增加处理condition的值是其它数值时的情况, 但这些需要分别处理的不同条件值的个数肯定不多。小王希望他写出的代码既能满足上述要求, 又不用每
次都改写f的代码。请你帮小王重新设计, 使得新设计能够满足小王的愿望。简要说明你的设计思想, 给出实现代码。

### 2
         int main()
         {
           int numa,numb; char oper; double result;
           cin>>numa>>numb;  cin>>oper;
           switch(oper) {
             case '+': result=numa+numb; break;
             case '-': result=numa-numb; break;
             case '*': result=numa*numb; break;
             case '/': result=numa/(double)numb; break;
           }
           cout<<result<<endl;
           return 0;
         }
小王正在编写一个简单的计算器程序，要求输入两个整数和运算符号(加、减、乘、除)，输出计算结果。小王用面向过程方法编写了下面的代码。请采用面向对象方法通过恰当的设计模式对小王的代码进行重构。

