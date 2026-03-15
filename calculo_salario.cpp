#include <iostream>
using namespace std;

int main(){
    string names, lastnames, job_position;
    double hour_salary;
    int hours_worked;

    //discounts
    double rent = 0.075;
    double isss = 0.054;
    double life_insurance = 12;

    //input data
    cout << "Calculo de Sueldo final de empleado" << endl;
    cout << "*****************************************" << endl;
    cout << "Ingrese la siguiente información laboral:" << endl;

    //Form
    cout << "1. Nombres: ";
    getline(cin, names);
    cout << "2. Apellidos: ";
    getline(cin, lastnames);
    cout << "3. Cargo: ";
    getline(cin, job_position);
    cout << "4 Costo hora: ";
    cin >> hour_salary;
    cout << "5. Horas trabajadas: ";
    cin >> hours_worked;

    return 0;
}