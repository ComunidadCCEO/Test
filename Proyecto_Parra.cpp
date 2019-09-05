#include <bits/stdc++.h>
#include <conio.h>
#include <unistd.h>
#include <windows.h> 
using namespace std;
int main(){
	int dificultad, opcion, tope=9;
	string receta[15],nombre;
	char c;
	srand(time(NULL));
	do{
		cout<<"Bienvenido a: "<<endl<<"Selecciona tu dificultad "<<endl<<"1.- Facil"<<endl<<"2.- Medio"<<endl<<"3.- Dificil"<<endl;	
		cout <<"holi";
		cout<<"de neuvo";
		cout<<"nueva rama Colores ";
		cout<< "se crea la rama TEXT";
		cout<<"nueva linea para github"
		cin>>dificultad;
		for(int k = 0; k<dificultad;k++ ){
			int rece = rand() % 8;
			switch(rece){
				case 0:{
					nombre="\t\t\t\tPizza";
					tope=9;
					string ingredientes[]={"queso mozzarella","agua","sal","harina de trigo","pure de tomate","pepperoni","primienta"};
					for(int g=0; g<tope ;g++){
						receta[g]=ingredientes[g];
					}
				
				break;}
				
				case 1:{
					nombre="\t\t\t\tGelatina flotantede fresas con crema";
					tope=15;
					string ingredientes[]={"mantequilla","azucar","huevo","harina","polvo para hornear","bicarbonato","sal","leche","esencia de fresa",
					"colorante vegetal","gelatina de vainilla","leche light","leche","fresa"};
				
		
					for(int g=0; g<tope ;g++){
					
						receta[g]=ingredientes[g];
					}
				break;}
				case 2:{
					nombre="\t\t\t\tPastel imposible";
					tope=10;
					string ingredientes[]={"queso crema","leche evaporada","lechera","huevo","harina para hot cakes","aceite de maiz","chocolate abuelita",
					"cajeta","esencia de vainilla","polvo para hornear"};
				

				for(int g=0; g<tope ;g++){
				
					receta[g]=ingredientes[g];
				}				
				break;}
				case 3:{
					nombre="\t\t\t\tCrema de chile poblano";
					tope=7;
					string ingredientes[]={"leche evaporada","chile poblano","mantequilla","cebolla","agua","cilantro","consome de pollo en polvo"};
					for(int g=0; g<tope ;g++){
					
						receta[g]=ingredientes[g];
					}			
				break;}
				case 4:{
					nombre="\t\t\t\tPastel de zanahoria";
					tope=9;
				string ingredientes[]={"harina cernida","bicarbonato","polvo para hornear","aceite","azucar","zanahoria","nueces","pasas","huevos"};
				
				for(int g=0; g<tope ;g++){
				
					receta[g]=ingredientes[g];
				}
						
				break;}
				case 5:{
					nombre="\t\t\t\tCarlota royal de chocolate";
					tope=12;
					string ingredientes[]={"clara de huevo","azucar","yema de huevo","harina cernida","fecula de maiz","mermelada de fresa","leche",
					"vainilla","grenetina hidratada","crema batida","fresa","crema batida"};

				for(int g=0; g<tope ;g++){
				
				receta[g]=ingredientes[g];
				
				}
				break;}
				case 6:{
					nombre="\t\t\t\tSandwich de helado";
					tope=8;
					string ingredientes[]={"mantequilla","azucar","huevo","extracto de vainilla","harina","cocoa en polvo","sal","helado de chocolate"};
	
					for(int g=0; g<tope ;g++){
					
						receta[g]=ingredientes[g];
					}
				break;}
				case 7:{
					nombre="\t\t\t\tPastel de chocolate 3 leches";
					tope=15;
					string ingredientes[]={"huevo","azucar","sal","vainilla","harina","cocoa","leche","leche condensada","leche evaporada","crema de avellanas",
					"brandy","canela","crema batida","azucar glass","chocolate amargo"};
	
					for(int g=0; g<tope ;g++){
					
						receta[g]=ingredientes[g];
					}
				break;
				}
			}
			system("PAUSE");
			system("cls");
			cout<<nombre<<endl<<endl<<endl<<endl;
			for(int i=0; i<tope;i++){
				cout<<"\t\t\t\t"<<receta[i]<<endl<<"\t\t\t\t";
					for (int j=0;j<receta[i].length();j++){
						
						c= _getch();
						cout<<c;
						Sleep(200);
						if(receta[i].at(j)==c){
							
						}
						else{
							j=receta[i].length();
							i--;
							system("CLS");
							break;
							}
						}
						system("cls");
						cout<<nombre<<endl<<endl<<endl<<endl;
					}

		}
		system("cls");
		cout<<"Haz ganado"<<endl<<"Volver a jugar? 1=si 2=no"<<endl;
		cin>>opcion;
	}while(opcion!=2);
	cout<<"Gracias por jugar :)";
	return 0;
}
