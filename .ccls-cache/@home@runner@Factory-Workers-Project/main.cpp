//this program gives information of an employee who works at a company. That employee just so happens to be me, but the numbers are made up because i dont have an id number.


#include <iostream>
#include <string>

class Employee {
private:
    std::string name;  //name of employee
    int idNumber;      //employee ID number
    std::string hireDate;  //date of hire

public:

    Employee() : name(""), idNumber(0), hireDate("") {}


    Employee(const std::string& empName, int empidNumber, const std::string& empHireDate)
        : name(empName), idNumber(empidNumber), hireDate(empHireDate) {}


    // Accessor functions
    // for name
    std::string getName() const {
        return name;
    }

    //mutator for name
    void setName(const std::string& empName) {
        name = empName;
    }

    //for idNumber
    int getidNumber() const {
        return idNumber;
    }

    //mutator for idNumber
    void setidNumber(int empidNumber) {
        idNumber = empidNumber;
    }

    //for hireDate
    std::string gethireDate() const {
        return hireDate;
    }

    //mutator for hireDate
    void sethireDate(const std::string& empHireDate) {
        hireDate = empHireDate;
    }

    //Print 
    void print() const {
        std::cout << "Employee Report" << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "ID Number: " << idNumber << "\n";
        std::cout << "Date of Hire: " << hireDate << "\n";
    }
};

//main function
int main() {
    Employee emp1("Zachary Whippo", 12345, "2023-10-31");
    emp1.print();
    return 0;
}