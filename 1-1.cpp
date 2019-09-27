//角色基类
class Role{
private:
    int HP;
    int Money;
public:
    Role(int HP, int Money){
        this->HP = HP;
        this->Money = Money;
    }
    virtual void Poison(){};
    void get_money(int money){
        this->Money += money;
    };
    void down_HP(int hurt){
        HP -= hurt;
    }
    int get_HP_now(){
        return this->HP;
    }
    int get_Money_now(){
        return this->Money;
    }
};

//战士类
class Solider : public Role{
public:
    Solider(int HP, int Money) : Role(HP,Money){};
    void Poison() override{
        int this_HP = get_HP_now();
        int this_Money = get_Money_now();
        this->down_HP(0.1 * this_HP);
        this->get_money(this_Money * 0.2);
    }
};

//法师类
class Mage : public Role{
public:
    Mage(int HP, int Money) : Role(HP,Money){};
    void Poison() override{
        int this_HP = get_HP_now();
        int this_Money = get_Money_now();
        this->down_HP(0.3 * this_HP);
        this->get_money(this_Money * 0.4);
    }
};


//宝箱基类
class Box{
private:
    int Money;
public:
    Box(int money){
        this->Money = money;
    }
    int get_money(){
        return this->Money;
    }
    void be_opened(){};
};


//有毒宝箱类
class Poison_Box : public Box{
public:
    Poison_Box(int money) : Box(money){};
    void be_opened(Role person) {
        person.Poison();
    }
};


//金币宝箱类
class Money_Box : public Box{
public:
    Money_Box(int money) : Box(money){};
    void be_opened(Role person){
        person.get_money(get_money());
    }
};
