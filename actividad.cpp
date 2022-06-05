# include <iostream>
# include <conio.h>
# include <windows.h>
# include <stdlib.h>

using namespace std;

void MenuUsuario();
int opcion;
void IngresoDatosPersonales();
void IngresoDatosLaborales(); 
void DatosNomina();
void LiquidacionNomina();
void Creditos();
int validar=0;

float salEmpleado;
int HO, HN,HOE,HNE,HOFD,HOFN;
int n;

int main(){
    
	retornar: 
		system("cls");
		
		do {
			MenuUsuario();
			system("cls");
		} while((opcion < 1) || (opcion > 6));
		
		cout<<"\nREALIZACION DE  DATOS PARA USUARIO \n\n "; 
		
		switch(opcion){
		    case 1: cout<<"Ingreso datos personales: "<<endl;
		    IngresoDatosPersonales();
		    validar=1;
			goto retornar;
			
		    case 2: cout<<"Datos laborales: "<<endl;
		    if(validar==1){
		    	IngresoDatosLaborales();
				validar=2;	
			}
			goto retornar;
			
		    case 3: cout<<"Datos nomina: "<<endl; 
		    if(validar==2){
		    	DatosNomina();
				validar=3;
			}	
			goto retornar;
			
		    case 4: cout<<"Liquidacion nomina: " <<endl;
		    if(validar==3){
		    LiquidacionNomina();
				validar=4;
	
			}	
			goto retornar;
				
		    case 5: cout<<"Credito: " <<endl;
		    Creditos();
			goto retornar;
				
		    case 6: cout<<"\n salir "<<endl;
				Sleep(1500);
				break;
		}
		
		
		return 0;
}
void MenuUsuario(){
	
	cout<<"\n--------------------------------------------";
	cout<<"\n------BIENVENIDO AL MENU DE INICIO--------";
	cout<<"\n--------------------------------------------";
	cout<<"\n Elija una de las seguientes opciones (1-6)";
	cout<<"\n\n 1. Ingreso de datos personales";
	cout<<"\n 2. Ingresos de datos laborales";
	cout<<"\n 3. ingresos de datos nomina";
	cout<<"\n 4. liquidacion de nomina";
	cout<<"\n 5. creditos";
	cout<<"\n 6. salir \n\n";
	
	cin>>opcion;

}

void IngresoDatosPersonales(){
	
	int docEmpleado;
	string nomEmpleado,dircEmpleado, teleEmpleado, correoEmpleado;
	char documento[10];
	
	cout<<"\nIngrese sus datos personales: "<<endl;
	
	do {
		cout<<"Ingrese el documento : ";cin>>documento;
		n = atoi(documento);
	}while (n==0);
	
	cin.ignore();
	cout<<"\nIngrese su nombre: ";getline(cin,nomEmpleado);
	cout<<"\nIngrese su telefono: ";cin>>teleEmpleado;
	cin.ignore();
	cout<<"\nIngrese su direccion: ";getline(cin,dircEmpleado);
	cin.ignore();
	cout<<"\nIngrese su correo electronico: ";getline(cin,correoEmpleado);
	
	getch();
	
}

void IngresoDatosLaborales(){
	 
	 string cargoEmpleado, deparEmpleado;
	 
	 
	 cout<<"\nIngrese sus datos Laborales: "<<endl;
	 cout<<"\nIngrese su cargo : ";cin>>cargoEmpleado;
	 cout<<"\nIngrese su departamento : ";cin>>deparEmpleado;
	 cout<<"\nIngrese su salario : ";cin>>salEmpleado;
	getch();
}

void DatosNomina(){
	
	int horasFaltantes = 240;
	
	cout<<"Ingrese su nomina salarial (maximo 240): \n";
	
	// Aca ingreso horas diurnas
	do {	
    	cout<<"\nIngrese Horas diurnas: ";cin>>HO;
	    n = HO;	
	    if (n>240){
	    	cout<<"Ingresa un numero correcto de horas, maximo 240 \n";
	    	n = 0;
		}
	} while (n==0);
	// Aca finalizo el ingreso de horas diurnas
		
	horasFaltantes = horasFaltantes - n;
	
	// Aca ingrso horas nocturnas	
	do {
		if (horasFaltantes > 0){
		 	cout<<"\nIngrese Horas nocturnas: ";cin>>HN;
			n = HN;
			if (n>horasFaltantes){
	    		cout<<"Ingresa un numero correcto de horas, maximo: "<<horasFaltantes;
	    		n = 0;
			}
		} else {	
			cout<<" Ya ingreso el numero maximo de horas \n ";
			n = 1;
		}
		
	} while (n==0);	
	// Aca finalizo ingreso de horas nocturnas
	
	
	horasFaltantes = horasFaltantes - n;
		
	do{
		if(horasFaltantes > 0){
			
			cout<<"\nIngrese Horas diurnas extras: ";cin>>HOE;
		    n = HOE;
			if (n>horasFaltantes){
	    		cout<<"Ingresa un numero correcto de horas, maximo: "<<horasFaltantes;
	    		n = 0;
			}
		 } else {
			cout<<" Ya ingreso el numero maximo de horas \n";
			n = 1;
		}
		
	}while  (n==0);
		
	horasFaltantes = horasFaltantes - n;
	
	do{
		if(horasFaltantes > 0){
	    	cout<<"\nIngrese Horas nocturnas extras: ";cin>>HNE;
	       	n = HNE;
			if (n>horasFaltantes){
	    		cout<<"Ingresa un numero correcto de horas, maximo: "<<horasFaltantes;
	    		n = 0;
			}
		 } else {
			cout<<" Ya ingreso el numero maximo de horas \n ";
			n = 1;
		}
	    	
	}while (n==0);
	
	
	horasFaltantes = horasFaltantes - n;
	
	do{
		if(horasFaltantes > 0){
			cout<<"\nIngrese Horas en diurna festivo: ";cin>>HOFD;
		    n = HOFD;
			if (n>horasFaltantes){
	    		cout<<"Ingresa un numero correcto de horas, maximo: "<<horasFaltantes;
	    		n = 0;
			}
		 } else {
			
			cout<<" Ya ingreso el numero maximo de horas \n ";
			n = 1;
			
		}
		
	}while (n==0);
	
	horasFaltantes = horasFaltantes - n;
	
	do{
			if(horasFaltantes > 0){
			 cout<<"\nIngrese Horas en nocturna festivo: ";cin>>HOFN;
		     n = HOFN;
		     if (n>horasFaltantes){
	    		cout<<"Ingresa un numero correcto de horas, maximo: "<<horasFaltantes;
	    		n = 0;
			}
		 } else {
			cout<<" Ya ingreso el numero maximo de horas \n ";
			n = 1;	
		}
	    
	}while (n==0);
	

	getch();	
}

void LiquidacionNomina(){

	float  HO_total, HN_total,HOE_total,HNE_total,HOFD_total,HOFN_total;
	
	float aporte_pension,aporte_salud,salario_hora;
	aporte_pension= salEmpleado*0.04;
	aporte_salud= salEmpleado*0.04;
	salario_hora= salEmpleado/240;  
	
	cout<<"\nEl numero de horas diurnas son: "<<HO;
	HO_total = (salario_hora * HO);
	cout<<"\nEl valor de las horas diurnas es: "<<HO_total;
	
	cout<<"\nEl numero de horas nocturnas son: "<<HN;
	HN_total = (salario_hora *HN)*1.35;
	cout<<"\nEl valor de las horas nocturnas es: "<<HN_total;
	
	cout<<"\nEl numero de horas diurnas extras son: "<<HOE;
	HOE_total =(salario_hora*HOE)*1.25;
	cout<<"\nEl valor de las horas diurnas extras es: "<<HOE_total;
	
	cout<<"\nEl numero de las horas nocturas extras son "<<HNE;
	HNE_total = (salario_hora*HNE)*1.75;
	cout<<"\nEl valor de las horas nocturnas extras es: "<<HNE_total;
	
	cout<<"\nEl numero de las horas diurnas festivas "<<HOFD;
	HOFD_total = (salario_hora*HOFD)*2.0;
	cout<<"\nEl valor de las horas diurnas festivas "<<HOFD_total;
	
	cout<<"\nEl numero de las horas nocturnas festivo "<<HOFN;
	HOFN_total = (salario_hora*HOFN)*2.5;
	cout<<"\nEl valor de las horas nocturnas festivo "<<HOFN_total;

	
	getch();

}

void Creditos(){
		cout<<"\n\n------------------------------------------------------";
		cout<<"\n----------BIENVENIDO AL MENU PRINCIPAL----------";
		cout<<"\n----------------------------------------------------\n\n";
		cout<<"\n\n -----------Nombre de mi Ficha_2449516-------------";
		cout<<"\n\n -----------Desarrollo de software-----------";
		cout<<"\n\n -----------Valentina Pulgarin Pulgarin-------------- ";
		cout<<"\n\n -----------1000549029-----------------";
		cout<<"\n\n ------------vpulgarin920@misena.edu.co-----------";
		getch();
		
	
}






