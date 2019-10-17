/*
 * 使用代理模式(Proxy Pattern)，设置一个代理类，使得客户可以在不同时间不同地点获取到不同菜单
 */

#include <string>
#include <vector>

using namespace std;

//基础菜单类，提供整个酒店的菜品管理
class Basicmenu{
protected:
    vector<string> menu;
    vector<string> getDish(string location){};
public:
    Basicmenu() = default;
    ~Basicmenu() = default;
};

class RoomOfPancake : public Basicmenu{
private:
    vector<string> PancakeMenu;
public:
    RoomOfPancake()= default;;
    ~RoomOfPancake()= default;;
};

class Restaurant : public Basicmenu{
private:
    vector<string> RestaurantMenu;
public:
    Restaurant()= default;;
    ~Restaurant()= default;;
};

class CoffeeRoom :public Basicmenu{
private:
    vector<string> FoffeeMenu;
public:
    CoffeeRoom()= default;
    ~CoffeeRoom()= default;
};

class Proxy{
private:
    Basicmenu MainMenu;
public:
    Proxy(Basicmenu TheMenu){
        this->MainMenu = TheMenu;
    }
    Basicmenu getMenu(string Location){
        if (Location == "Room of Pancake"){
            RoomOfPancake menu;
            return menu;
        }
        else if (Location == "Restaurant"){
            Restaurant menu;
            return menu;
        }
        else if (Location == "Coffee Room"){
            CoffeeRoom menu;
            return menu;
        }
    }
};

