#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Alumno {
private:
    string nombre;
    float nota1;
    float nota2;
    float nota3;
public:
    Alumno(string nombre, float nota1, float nota2, float nota3)
        : nombre(nombre), nota1(nota1), nota2(nota2), nota3(nota3) {}

    string getNombre() const { return nombre; }
    float getNota1() const { return nota1; }
    float getNota2() const { return nota2; }
    float getNota3() const { return nota3; }
};

int main() {
    vector<Alumno> alumnos;

    string nombre;
    float nota1, nota2, nota3;

    int numAlumnos;
    cout<<"Ingrese el numero de alumnos: ";
    cin>>numAlumnos;

    for(int i = 0; i < numAlumnos; i++) {
        cout<<"Ingrese el nombre del alumno: ";
        cin>>nombre;
        cout<<"Ingrese la nota 1 del alumno: ";
        cin>>nota1;
        cout<<"Ingrese la nota 2 del alumno: ";
        cin>>nota2;
        cout<<"Ingrese la nota 3 del alumno: ";
        cin>>nota3;
        alumnos.push_back(Alumno(nombre, nota1, nota2, nota3));
    }

    cout<<"\nDatos de los alumnos:\n";
    for (size_t i = 0; i < alumnos.size(); ++i) {
        const Alumno& a = alumnos[i];
        cout<<"Nombre: "<<a.getNombre()<<endl;
        cout<<"Nota 1: "<<a.getNota1()<<endl;
        cout<<"Nota 2: "<<a.getNota2()<<endl;
        cout<<"Nota 3: "<<a.getNota3()<<endl<<endl;
    }

    return 0;
}

