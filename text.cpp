#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
void parseCSV()
{
    ifstream data("Promedio.csv"); 		//abre y lee los archivos del book1.csv
    string line;       					// crea una variable que almacena datos
    vector<vector<string>> parsedCsv;   //crea un vector el cual almacena los datos de la variable anterior
    int rowcount=0; 
    int colcount=0; 
    while (getline(data,line))			//ciclo while que raliza la funcion de el archivo data("Book1.csv") y ingresa esos datos de la avariable anterior
    {
        stringstream lineStream(line);
        string cell; 
        vector<string> parsedRow;
        colcount=0; 
        while (getline(lineStream,cell,','))//ciclo while que raliza la funcion de revisar cada renglon y edintificar cada ',' y guarda esa informacion
        {
            parsedRow.push_back(cell); 
            colcount++; 					
        }
        rowcount++;							
        parsedCsv.push_back(parsedRow);


    }
    float sumatoria=0;
    for(int i=0; i<rowcount; i++){					
        for(int j=0; j<colcount;j++){
        float suma=std::stof(parsedCsv[i][j=2]);	//Cambio de variable
        sumatoria=(suma+sumatoria);
        }
        cout << '\n';


    }float promedio=0;
    promedio=sumatoria/rowcount;			//saca el promedio de la sumatoria del total de total de datos
    cout<<promedio;
}
int main()
{
    parseCSV();
    return 0;
}
