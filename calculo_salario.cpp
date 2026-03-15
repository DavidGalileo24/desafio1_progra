#include <iostream>
#include <iomanip>
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
    cout << "4. Costo hora: $";
    cin >> hour_salary;
    cout << "5. Horas trabajadas: ";
    cin >> hours_worked;

    //Calcs
    cout << fixed << setprecision(2);
    double base_salary = hour_salary * hours_worked;

    //Prints
    cout << "*****************************************" << endl;
    cout << "Empleado: " << lastnames << " " << names << endl;
    cout << "Cargo: " << job_position << endl;
    cout << "*****************************************" << endl;

    cout << "Sueldo inicial: $" << base_salary << endl;
    cout << "descuentos de ley" << endl;
    cout << "- Renta: $" << base_salary * rent << endl;
    cout << "- ISSS: $" << base_salary * isss << endl;
    cout << "- Seguro de vida: $" << life_insurance << endl;
    cout << "--------------------------------" << endl;
    cout << "Sueldo a pagar: $" << base_salary - (base_salary * rent) - (base_salary * isss) - life_insurance << endl;

    return 0;
}