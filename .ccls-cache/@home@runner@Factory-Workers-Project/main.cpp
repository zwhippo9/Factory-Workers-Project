// this program gives information of a team lead (or an owner) who just so happens to be the owner of the company that I work for. Of course, the numbers in this program are also made up




#include <iostream>
#include <string>
using namespace std;

class TeamLeader {
private:
    string name;
    int employeeNumber;
    string hireDate;
    string shift;
    double hourlyPayRate;
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    //CONSTRUCTOR
    TeamLeader(string n = "", int num = 0, string hire = "", string s = "", double payRate = 0.0, 
           double bonus = 0.0, int reqHours = 0, int attHours = 0)
    : name(n), employeeNumber(num), hireDate(hire), shift(s), hourlyPayRate(payRate),
      monthlyBonus(bonus), requiredTrainingHours(reqHours), attendedTrainingHours(attHours) {}

    //ACCESSORS
    string getName() const { return name; }
    int getEmployeeNumber() const { return employeeNumber; }
    string getHireDate() const { return hireDate; }
    string getShift() const { return shift; }
    double getHourlyPayRate() const { return hourlyPayRate; }
    double getMonthlyBonus() const { return monthlyBonus; }
    int getRequiredTrainingHours() const { return requiredTrainingHours; }
    int getAttendedTrainingHours() const { return attendedTrainingHours; }

    //mutators
    void setName(const string& n) { name = n; }
    void setEmployeeNumber(int num) { employeeNumber = num; }
    void setHireDate(const string& hire) { hireDate = hire; }
    void setShift(const string& s) { shift = s; }
    void setHourlyPayRate(double payRate) { hourlyPayRate = payRate; }
    void setMonthlyBonus(double bonus) { monthlyBonus = bonus; }
    void setRequiredTrainingHours(int reqHours) { requiredTrainingHours = reqHours; }
    void setAttendedTrainingHours(int attHours) { attendedTrainingHours = attHours; }

//print

void print() const{
  cout << "Name: " << name << endl;
  cout << "Emploee Number: " << employeeNumber << endl;
  cout << "Hire Date: " << hireDate << endl;
  cout << "Shift: " << shift << endl;
  cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
  cout << "Monthly Bonus: $" << monthlyBonus << endl;
          cout << "Required Training Hours: " << requiredTrainingHours << endl;
          cout << "Attended Training Hours: " << attendedTrainingHours << endl;
      }
  };

int main() {
  // Create TeamLeader object
  TeamLeader teamLeader("Bob Kurpasser", 64327, "2/7/2024", "Night", 105.50, 150.00, 20, 10);

  // Print TeamLeader information
  cout << "Team Lead Information:" << endl;
  teamLeader.print();

  return 0;
}