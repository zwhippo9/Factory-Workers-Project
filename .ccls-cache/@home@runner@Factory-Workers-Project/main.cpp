//this program gives information about two employees in a production work environment who happen to also be employees (and friends) at the same company that I work at. Although, the numbers are also made up



#include <iostream>
#include <string>
#include <iomanip>

//employee class
class Employee {
private:
    std::string name; //name
    int number;   //number

    std::string hireDate;  //hire date

public:
    //constructor
    Employee() : name (""), number(0), hireDate("") {}  

    Employee(const std::string& empName, int empNumber, const std::string& empHireDate)
        : name(empName), number(empNumber), hireDate(empHireDate) {}

    //for name
    std::string getName() const {
        return name;
    }

    //mutator 
    void setName(const std::string& empName) {
        name = empName;
    }

    //for number
    int getNumber() const {
        return number;
    }

    //mutator
    void setNumber(int empNumber) {
        number = empNumber;
    }

    //for hire date
    std::string getHireDate() const {
        return hireDate;
    }

    //mutator
    void setHireDate(const std::string& empHireDate) {
        hireDate = empHireDate;
    }

  //print for employee details
  virtual void print () const {
    std::cout << "Employee Report:\n";
    std::cout << "Name:\n " << name;
    std::cout << "Number:\n " << number;
    std::cout << "Hire Date: " << hireDate << "\n";
  }
};

//production worker class
class ProductionWorker : public Employee {
private:
    int shift; //shift 1
    double hourlyPayRate; //hourly pay rate

public:
    //constructor
    ProductionWorker() : shift(0), hourlyPayRate(0.0) {}

    ProductionWorker(const std::string& empName, int empNumber, const std::string& empHireDate, int empShift, double empHourlyPayRate)
        : Employee(empName, empNumber, empHireDate), shift(empShift), hourlyPayRate(empHourlyPayRate) {}

    //for shift
    int getShift() const {
        return shift;
    }

    //mutator
    void setShift(int empShift) {
        shift = empShift;
    }

    //for hourly pay rate
    double getHourlyPayRate() const {
        return hourlyPayRate;
    }

    //mutator
    void setHourlyPayRate(double empHourlyPayRate) {
        hourlyPayRate = empHourlyPayRate;
    }

    //print for production worker details
    void print() const override {
        Employee::print();
        std::cout << "Shift:" << (shift == 1 ? "Day" : "Night");
        std::cout << "Hourly Pay Rate: $" << std::fixed << std::setprecision(2) << hourlyPayRate << "\n";
    }
};

int main() {
    ProductionWorker worker1("Nickie Nolte", 12345, "08/20/2023", 1, 30.00);
    ProductionWorker worker2("Logan Dietrich", 54321, "01/20/24", 2, 35.00);

    //display for both workers
 std::cout << "Production Worker 1 Report:\n";
    worker1.print();
    std::cout << "\n";

    std::cout << "Production Worker 2 Report:\n";
    worker2.print();
    std::cout << "\n";

    return 0;
}
