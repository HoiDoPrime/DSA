#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
class Account{
    private:
    string Username,Password;
    public:
    /*Account(){
        cout<<"Khoi tao mot tai khoan\n";
    }
    ~Account(){
        cout<<"Huy mot tai khoan\n";
    }*/
    void setUsername(string Username){
        this->Username=Username;
    }
    void setPassword(string Password){
        this->Password=Password;
    }
    string getUsername(){
        return Username;
    }
    string getPassword(){
        return Password;
    }
};
class Date{
    private:
    int day,month,year;
    public:
    Date(){
        cout<<"Tao mot ngay\n";
    }
    ~Date(){
        cout<<"Huy mot ngay\n";
    }
    Date(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void setday(int day){
        this->day=day;
    }
    void setmonth(int month){
        this->month=month;
    }
    void setyear(int year){
        this->year=year;
    }
    int getday(){
        return day;
    }
    int getmonth(){
        return month;
    }
    int getyear(){
        return year;
    }
};
class Person{
    private:
    string Name,Address;
    int age;
    Date dayofbirth;
    public:
    Person(string Name,int age, string Addess,Date dayofbirth){
        this->Name=Name;
        this->age=age;
        this->Address=Address;
        this->dayofbirth=dayofbirth;
    }
    string getname(){
        return Name;
    }
    void Information(){
        cout<<Name<<endl;
        cout<<age<<endl;
        cout<<Address<<endl;
        cout<<dayofbirth.getday()<<"/"<<dayofbirth.getmonth()<<"/"<<dayofbirth.getyear()<<endl;
    }
    Date getdate(){
        return dayofbirth;
    }
};
class Student : public Person{
    private:
    string ID,email,emailpassword;
    double gpa;
    Account acc;
    public:
    Student(string ID,string Name,double gpa,int age,Date dayofbirth,string Address): Person(Name,age,Address,dayofbirth){
        this->ID=ID;
        this->gpa=gpa;
    }
    void setemail(){
        string res="";
        string temp=Person::getname();
        string token;
        vector<string> vec;
        stringstream ss(temp);
        while(ss >> token){
            vec.push_back(token);
        }
        for(char x:vec.back()){
            res+=tolower(x);
        }
        for(int i=0;i<vec.size();i++){
            res+=tolower(vec[i][0]);
        }
        res+="@gm.uit.edu.vn";
        email=res;
    }
    void setpasswordemail(){
        string temp=Person::getname();
        string id=ID;
        string res="";
        for(char x: temp){
            if(x!=' '){
                res+=tolower(x);
            }
        }
        for(char x:id){
            res+=tolower(x);
        }
        res+="@";
        res=emailpassword;

    }
    void setaccountdaa(){
        string username="";
        string password="";
        string name1=Person::getname();
        for(char x:name1){
            if(x!=' '){
                username+=toupper(x);
            }
        }
        Date day=Person::getdate();
        password+=to_string(day.getday())+to_string(day.getmonth())+to_string(day.getyear());
        password+="@";
        acc.setUsername(username);
        acc.setPassword(password);

    }
    void Inthongtin(){
        Person::Information();
        cout<<gpa<<endl;
        cout<<ID<<endl;
        cout<<email<<endl;
        cout<<emailpassword<<endl;
        cout<<acc.getUsername()<<endl;
        cout<<acc.getPassword()<<endl;
    }
};
int main()
{
    Date date(22,10,2023);
    Student st("23520550","Do Minh Hoi",3.5,20,date,"PhuYen-AnDan");
    st.setemail();
    st.setpasswordemail();
    st.setaccountdaa();
    st.Inthongtin();
    return 0;
}
