#include <vector>
#include <string>

/*
 * 水果类
 */
class fruit{
private:
    std::string name;
    int original_Weight;
    int wright_now;
public:
    fruit(std::string theName, int weight){
        this->name = theName;
        this->original_Weight = this->wright_now = weight;
    }
    //脱水函数
    virtual void dehydration(){};
    std::string get_name(){
        return name;
    }
    int get_original_weight(){
        return original_Weight;
    }
    int get_weight_now(){
        return wright_now;
    }
    void change_weight(int number){
        this->wright_now = this->wright_now - number;
    }
};

class Apple : public fruit{
public:
    Apple(std::string theName, int weight) : fruit("Apple", 50) {};
    //重写脱水函数
    void dehydration() override{
        if (this->get_weight_now() >= this->get_original_weight() * 0.6){
            change_weight(4);
        }
    }
};

class Orange : public fruit{
public:
    Orange(std::string theName, int weight) : fruit("Orange", 30){};
    //重写脱水函数
    void dehydration() override{
        if (this->get_weight_now() >= this->get_original_weight() * 0.6){
            change_weight(3);
        }
    }
};

/*
 * 箱子类
 */
class Box{
private:
    int count_of_fruit;
    int total_weight;
    std::vector<fruit> Fruit_list;
public:
    //放置函数
    void put_in_fruit(fruit toput){
        Fruit_list.push_back(toput);
    }
    int get_count(){
        return count_of_fruit;
    }
    //统计苹果个数
    int get_count_of_apple(){
        int count = 0;
        for (auto i :Fruit_list){
            if (i.get_name() == "Apple"){
                count++;
            }
        }
        return count;
    };
    //统计桔子个数
    int get_count_of_orange(){
        int count = 0;
        for (auto i : Fruit_list){
            if (i.get_name() == "Orange"){
                count++;
            }
        }
        return count;
    }
    //返回一天减少的总重量
    int get_lost_oneday(){
        int weight = 0;
        for (auto i : Fruit_list){
            if (i.get_name() == "Apple"){
                weight += 4;
            }
            else if (i.get_name() == "Orange"){
                weight +=3;
            }
        }
        return weight;
    }
    //返回总重量
    int get_total_weight(){
        for (auto i : Fruit_list){
            total_weight += i.get_weight_now();
        }
        return total_weight;
    };
};
