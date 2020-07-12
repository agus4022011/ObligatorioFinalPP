#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int cantJugadores = 1; 


struct Jugador {
	
	
				
				char AliasJug[5];
				int CedulaJug,EdadJug;
				
				char NombreJug[20];
				char ApellidoJug[20];
				
				int cantPartidas = 0 ;
				
				bool  ActivoJug = false;
				
				int MontoJug = 0 ;
				
	
	
};


struct Jugador Players[10];



bool eliminarJugador(){
	
	char AliasModi[5];
	char Caux;
	int p = 0;
	bool check = false ;
	
	printf("\nIngrese el alias que quiere modificar :");
	scanf("%i",Caux);
	
	while(Caux !='\n'){
		
		AliasModi[p] = Caux;
		p++;
		Caux = getchar();
		
	}
	
	
	for(int t = 1 ; t<cantJugadores;t++){
		
		for(int x;x<=5;x++){
				
				if(Players[t].AliasJug[x]==AliasModi[x]){
					
					check = true ;

				
				}else{
					
					
					check = false ;
					break;
					
				}
				 	
				
		}
		
		if(check  == true){
		
			Players[t].ActivoJug == false  ;
		
			
			printf("El jugador se elimino correctamente  \n");
		
		}else {
			
			printf("No se encontro ningun jugador con ese alias");
			
		}
	
		
		
		
	
	}
	

}





void MostrarAlias(char *aliasAux){

				for(int j=0;j<=5;j++){
					
						
						printf("%c",aliasAux[j]);
						
					
				}



}



void Mostrar(char *nombre){
			
				for(int h=0;h<=20;h++){
					
						if(int(nombre[h]) >='a' && int(nombre[h]) <='z' || int(nombre[h]) >='A' && int(nombre[h]) <='Z' ){
								printf("%c",nombre[h]);
							
						}
					
						
					
				}
	

}


bool MostrarDatos(){
	
	char AliasModi[5];
	char Caux;
	int p = 0;
	bool check = false ;
	
	printf("\nIngrese el alias que quiere mostrar sus datos :");
	scanf("%i",Caux);
	
	while(Caux !='\n'){
		
		AliasModi[p] = Caux;
		p++;
		Caux = getchar();
		
	}
	
	
	for(int t = 1 ; t<cantJugadores;t++){
		
		for(int x;x<=5;x++){
				
				if(Players[t].AliasJug[x]==AliasModi[x]){
					
					check = true ;

				
				}else{
					
					
					check = false ;
					break;
					
				}
				 	
				
		}
		if(check==true){
				
			printf("\n/************/");
			printf("\nJugador %i",t);
			
			printf("\nAlias:");
			MostrarAlias(Players[t].AliasJug);
			
			printf("\nNombre:");
			Mostrar(Players[t].NombreJug);
			
			printf("\nApelldio:");
			Mostrar(Players[t].ApellidoJug);
			
			printf("\nEdad:%i",Players[t].EdadJug);
				
			printf("\nMonto:%i",Players[t].MontoJug);
			
		
			printf("\n/************/\n");
			
			break;
			
		}
	
	}
	
	
	return check;
	
}

int pedirEdad (int num){
	 		
	 	int edadAux = num ;

		while(edadAux < 18){
	 		
	 		printf("\nIngrese una edad correcto \n");
	 		
	 		scanf("%i",&edadAux);
	 	
		 }
	 		
		return edadAux ; 		
	 			
	 		
}

int pedirMonto (int num){
	 		
	 	int montoAux = num ;


		while(montoAux > 1000 || montoAux < 0){
	 		
	 		printf("\nIngrese un Monto  correcto \n");
	 		
	 		scanf("%i",&montoAux);
	 	
		 }
	 		
		return montoAux ; 		
	 			
	 		
}



void registrarJugador(){
		
		int x = 0;
		int z = 0;
		int q = 0;
		int edadAux , MontoAux ;
		char AliAux,NomAux,apeAux;
		char peo[20];
		
		Players[cantJugadores].ActivoJug = true;
		
		printf("\nRegistre un alias:");
		scanf("%i",&AliAux);
		while(AliAux!='\n'){
			
			Players[cantJugadores].AliasJug[q] = AliAux ;
			q++;
			AliAux = getchar();
			
			
			
			
		}

		
		
		printf("\nRegistre su nombre : ");
		scanf("%i",&NomAux);
	
		while(NomAux!='\n'){
	 	
	       
	      Players[cantJugadores].NombreJug[x]=NomAux;	 
	 	  x++;
	 	  
	 	  NomAux=getchar();
	 	
	 	
		 }
		 
		printf("\nRegistre su apellido : ");
		scanf("%i",&apeAux);
	
		while(apeAux!='\n'){
	 	
	       
	      Players[cantJugadores].ApellidoJug[z]=apeAux;	 
	 	  z++;
	 	  
	 	  apeAux=getchar();
	 	
	 	
		 }
		
		printf("\nIngrese la edad del jugador :");
		
		scanf("%i",&edadAux);
		if(edadAux  >= 18 ){
			
				Players[cantJugadores].EdadJug  = edadAux ;
	
		}else{
		
			
		 		Players[cantJugadores].EdadJug = pedirEdad(edadAux);
			
		}
	
		
		printf("\nIngrese el MONTO  que quiere :");
		
		scanf("%i",&MontoAux);
		if(MontoAux < 1000 ){
				
				Players[cantJugadores].MontoJug = MontoAux ;
	
		}else{
		
			
		 		Players[cantJugadores].MontoJug = pedirMonto(MontoAux);
			
		}
	
	
		
		cantJugadores++;
	
	
}





void ListarJugadores(){
	
	for(int i = 1 ; i<cantJugadores;i++){
		
		printf("\n/************/");
		printf("\nJugador %i",i);
		
		printf("\nAlias:");
		MostrarAlias(Players[i].AliasJug);
		
		printf("\nMonto:%i",Players[i].MontoJug);
		
	
		printf("\n/************/\n");
		
	}
	
	
	
}



void Menu(){
	
		char  valMenu ;
		
	
	
		//Menu opcion
		printf("\n(L)ista de Jugadores \n");
		printf("(R)egistrar Jugadores \n");
		printf("(J)ugar \n");
		printf("(D)atos de Jugador \n");
		printf("(M)odificar Jugdaor \n");
		printf("(E)liminar Jugador \n");
		printf("(S)alir\n");
		
		printf("\nSeleccione la opcion que desea ingresar :  \n");
		scanf("%i",&valMenu);
		valMenu = getchar();
		
		printf("Usted selecciono al opcion  la siguiente : %c \n",valMenu);
		
		
		switch(valMenu){
			
			
			case 'l':
			case 'L':
				
					ListarJugadores();
					
					Menu();
					
		    break;
					
					
					
			case 'r':
			case 'R':
				   
				    
				   	registrarJugador();
				    
					
					Menu();
			break;	
			
			
			case 'j':
			case 'J':
					
					
					
					Menu();
					
		    break;
		    
				
				
			case 'd':
			case 'D':
				
					bool Verifica;
					Verifica = MostrarDatos();
					if(Verifica==false){
						
						printf("\nNo se encontraron nigun caso con ese alias gracias");
						
					}
					
					Menu();
					
		    break;
		    
		    
		    
		    case 'm':
			case 'M':
					printf("Ustede selec M\n");
					
					
					Menu();
					
		    break;
			
			
			case 'e':
			case 'E':
					bool encontro ;
					printf("Usted selec E ");
					
					encontro =	eliminarJugador();
					
				
					
					
					Menu();
					
		    break;
				
		    
		    
		    
		    
		    
				
					
			case 's':
			case 'S':
				
					printf("Usted quiso salir del programa gracias  \n");
					
				
				
				
			break;
			
			
			default:
				
				printf("\n****** Usted selecciono una opcion que no esta disponible ***** \n");
				Menu();
		
			break;
			
			
			
		}
		

	
}



int  main(){
	
	
	
	Menu();
	
	return  0  ;
	
}
