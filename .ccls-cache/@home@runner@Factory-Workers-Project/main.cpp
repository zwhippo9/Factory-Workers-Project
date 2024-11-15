#include <iostream>
#include <string>
using namespace std;

//employee class derived
class Employee {
protected:
    string name;
    int employeeID;
    string department;

public:
    //constructor
Employee(string n = "", int id = 0, string dep = "") 
: name(n), employeeID(id), department(dep) {}

    //accesors
    string getName() const { return name; }
    int getEmployeeID() const { return employeeID; }
    string getDepartment() const { return department; } 

    //mutators
    void setName(const string& n) { name = n; }
    void setEmployeeID(int id) { employeeID = id; }
    void setDepartment(const string& dep) { department = dep; }

    //virtual print function
    virtual void print() const {
      cout << "Name: " << name << endl;
      cout << "Employee ID: " << employeeID << endl;
      cout << "Department: " << department << endl;
    }
};

    //shift supervisor class derived
    class ShiftSupervisor : public Employee {
    private:
        double salary;
        double bonus;

    public:
        //constructor
        ShiftSupervisor(string n = "", int id = 0, string dep = "", double salary = 0.0, double bonus = 0.0)
        : Employee(n, id, dep), salary(salary), bonus(bonus) 
{}

        //accessors
        double getSalary() const { return salary; }
        double getBonus() const { return bonus; }

        //mutators
        void setSalary(double salary) { this->salary = salary; }
        void setBonus(double bonus) { this->bonus = bonus; }

        //print
        virtual void print() const override {
            Employee::print();
            cout << "Annual Salary: $" << salary << endl;
            cout << "Bonus: $" << bonus << endl;
        }
};

int main() {
    //create employee object
    ShiftSupervisor supervisor("Chris Greene", 1234, "G.E Build", 75000.0, 5000.0);

    cout << "Shift Supervisor Information:" << endl;
    supervisor.print();

    return 0;
}
