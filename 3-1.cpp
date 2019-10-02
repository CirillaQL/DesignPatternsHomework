/*
 * 使用建造者模式，将文件分为三个部分
 */

#include <string>

class File{
protected:
    virtual void FileHead();
    virtual void FileBody();
    virtual void FileTail();
};


//文本文件
class Txt : public File{
private:
    std::string ThisFileHead;
    std::string ThisFileBody;
    std::string ThisFileTail;
    std::string Company;
    std::string Date;
    std::string TableName;
    std::string TableData[10];
    std::string PersonName;
public:
    //生成文本格式的文本头
    void FileHead() override{
        this->ThisFileHead = (this->Company + ',' + this->Date);
    }
    //生成文本格式的文本体
    void FileBody() override{
        this->ThisFileBody = (this->TableName + '\n' + TableData[0] + '\n' + TableData[1]);
    }
    //生成文本格式的文件尾
    void FileTail() override{
        this->ThisFileTail = this->PersonName;
    }
    //生成文件
    std::string getFile(){
        return ThisFileHead + '\n' + ThisFileBody + '\n' + ThisFileTail;
    }
};

//数据库备份文件
class DataBaseFile : public File{
private:
    std::string ThisFileHead;
    std::string ThisFileBody;
    std::string ThisFileTail;
    std::string Company;
    std::string Date;
    std::string TableName;
    std::string TableData[10];
    std::string PersonName;
public:
    //生成数据库备份格式的文本头
    void FileHead() override{
        this->ThisFileHead = (this->Company  + this->Date);
    }
    //生成数据库备份格式的文本体
    void FileBody() override{
        this->ThisFileBody = (this->TableName + TableData[0] + '\n' + TableData[1]);
    }
    //生成数据库备份格式的文件尾
    void FileTail() override{
        this->ThisFileTail = this->PersonName;
    }
    //生成文件
    std::string getFile(){
        return ThisFileHead + '\n' + ThisFileBody + '\n' + ThisFileTail;
    }
};
