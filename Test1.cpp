#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


struct Jugador {
	
	
				
				char AliasJug[5];
				int CedulaJug,EdadJug;
				
				char NombreJug[20];
				char ApellidoJug[20];
				
				bool  ActivoJug=NULL;
				
				int MontoJug = 0 ;
				
	
	
};


struct Jugador Play1;
struct Jugador Play2;
struct Jugador Play3;
struct Jugador Play4;
struct Jugador Play5;
struct Jugador Play6;
struct Jugador Play7;
struct Jugador Play8;
struct Jugador Play9;
struct Jugador Play10;

char peop[5];






Jugador RegistrarJugador(){
	
	struct Jugador Player;
	
	
	char AliasParticipante[5],NombreParticipante[20],ApellidoParticipante[20];
	char AliAux,NomAux,ApeAux;
	int ciParticipante,EdadParticipante;
	int MontoParticipante = 0;
	
	int i = 0;
	int x = 0;
	int z = 0;
	
	
	
	
    printf("Enter name: ");
    scanf("%i",&AliAux);
   
	
	while(AliAux!='\n'){
	 	
	       
	      Player.AliasJug[i]=AliAux;	 
	 	  i++;
	 	 
	 	  
	 	  AliAux=getchar();
	 	
	 	
	 }
	 
	
	 
	 

	 for (int j ; j<i;j++){
	 	
	 
	 	
	 }


	

	
	printf("\nRegistre su nombre : \n");
	scanf("%i",&NomAux);
	
	while(NomAux!='\n'){
	 	
	       
	      NombreParticipante[x]=NomAux;	 
	 	  x++;
	 	  
	 	  NomAux=getchar();
	 	
	 	
	 }
	 
	 

	 for (int j ; j<x;j++){
	 	
	 
	 	
	 }
	
	
	Player.NombreJug[20] =  NombreParticipante[x];
	
	
		
	printf("\nRegistre su apellido : \n");
	scanf("%i",ApeAux);
	
	while(ApeAux!='\n'){
	 	
	       
	      ApellidoParticipante[z]=ApeAux;	 
	 	  z++;
	 	  
	 	  ApeAux=getchar();
	 	
	 	
	 }
	 
	 

	 for (int j ; j<z;j++){
	 	
	 
	 	
	 }
	
	Player.ApellidoJug[20] =  ApellidoParticipante[z];
	
	
	
	
	
	printf("\nRegistre su cedula : \n");
	scanf("%i",&ciParticipante);
	Player.CedulaJug = ciParticipante; 
	
	
	printf("\nRegistre su edad : \n");
	scanf("%i",&EdadParticipante);
	Player.EdadJug = EdadParticipante; 
	
	
	printf("\nRegistre su monto : \n");
	scanf("%i",&MontoParticipante);
	Player.MontoJug = MontoParticipante; 
	
	
	
	

	printf("El jugador fue registrado con exito gracias ");
	
    Player.ActivoJug = true ;
	
	return Player;
	
	
	
}



void EliminarJugador(char *qJug){
		char com[5];
	
	   printf("VA A ELIMINAR A  : %s",qJug);
		
	   scanf("%s",&com);
	   
	   if(com == qJug){
	   		
	   		printf("Mi vencinita **********");
	   	
	   }
	
	   	
	   Play2.ActivoJug = NULL;
	   		  
	
	  

	
	
	
}







void listarJugador(){
	
		if(Play1.ActivoJug == true){
				
				printf("Alias jugador 1:"); 
	
				
				for(int h=0;h<=5;h++){
				
						printf("%c",Play1.AliasJug[h]);
				
	
					
				}
				printf(",El monto es:%i",Play1.MontoJug);
				
				
		}else{
			
				printf("\nel jugador 1:NO REGISTRADO");
		}
		
		
		if(Play2.ActivoJug == true){
				
				printf("\nAlias jugador 2:"); 
	
				
				for(int h=0;h<=5;h++){
				
						printf("%c",Play2.AliasJug[h]);
				
	
					
				}
				printf(",el monto es:%i\n",Play2.MontoJug);
				
				
		}else{
			
				printf("\nEl jugador 2:NO REGISTRADO");
		}
		
		if(Play3.ActivoJug == true){
				
				printf("Alias jugador 3:"); 
	
				
				for(int h=0;h<=5;h++){
				
						printf("%c",Play3.AliasJug[h]);
				
	
					
				}
				printf("\n,el monto es:%i",Play3.MontoJug);
				
				
		}else{
			
				printf("\nEl jugador 3:NO REGISTRADO");
		}
		
		if(Play4.ActivoJug == true){
				
				printf("Alias jugador 1:"); 
	
				
				for(int h=0;h<=5;h++){
				
						printf("%c",Play4.AliasJug[h]);
				
	
					
				}
				printf("\n,el monto es:%i",Play4.MontoJug);
				
				
		}else{
			
				printf("\nEl jugador 4:NO REGISTRADO");
		}
		
		if(Play5.ActivoJug == true){
				
				printf("Alias jugador 5:"); 
	
				
				for(int h=0;h<=5;h++){
				
						printf("%c",Play5.AliasJug[h]);
				
	
					
				}
				printf("\n,el monto es:%i",Play5.MontoJug);
				
				
		}else{
			
				printf("\nEl jugador 5:NO REGISTRADO");
		}
		
		if(Play6.ActivoJug == true){
				
				printf("Alias jugador 6:"); 
	
				
				for(int h=0;h<=5;h++){
				
						printf("%c",Play6.AliasJug[h]);
				
	
					
				}
				printf("\n,el monto es:%i",Play6.MontoJug);
				
				
		}else{
			
				printf("\nEl jugador 6:NO REGISTRADO");
		}
		
		
		if(Play7.ActivoJug == true){
				
				printf("Alias jugador 7:"); 
	
				
				for(int h=0;h<=5;h++){
				
						printf("%c",Play7.AliasJug[h]);
				
	
					
				}
				printf("\n,el monto es:%i",Play7.MontoJug);
				
				
		}else{
			
				printf("\nEl jugador 7:NO REGISTRADO");
		}
			
		if(Play8.ActivoJug == true){
				
				printf("Alias jugador 8:"); 
	
				
				for(int h=0;h<=5;h++){
				
						printf("%c",Play8.AliasJug[h]);
				
	
					
				}
				printf("\n,el monto es:%i",Play8.MontoJug);
				
				
		}else{
			
				printf("\nEl jugador 8:NO REGISTRADO");
		}
		
		if(Play9.ActivoJug == true){
				
				printf("Alias jugador 9:"); 
	
				
				for(int h=0;h<=5;h++){
				
						printf("%c",Play9.AliasJug[h]);
				
	
					
				}
				printf("\n,el monto es:%i",Play9.MontoJug);
				
				
		}else{
			
				printf("\nEl jugador 9:NO REGISTRADO");
		}
		
	    if(Play10.ActivoJug == true){
				
				printf("Alias jugador 10:"); 
	
				
				for(int h=0;h<=5;h++){
				
						printf("%c",Play10.AliasJug[h]);
				
	
					
				}
				printf("\n,el monto es:%i",Play10.MontoJug);
				
				
		}else{
			
				printf("\nEl jugador 10:NO REGISTRADO\n");
		}
		
	
	
	
	
};




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
				
					listarJugador();
					
					
					Menu();
					
		    break;
					
					
					
			case 'r':
			case 'R':
				    
				   
				    
					if(Play1.ActivoJug==NULL){
						
						  Play1=RegistrarJugador();
						  
					
					}else if(Play2.ActivoJug==NULL){
					
							Play2=RegistrarJugador();
							
							
							for(int f=0;f<5;f++){
								
								if(Play2.AliasJug[f]==Play1.AliasJug[f]){
									
								printf("%c",Play2.AliasJug[f]);
								printf("%c",Play1.AliasJug[f]);
								
								Play2.ActivoJug = NULL; 
								
								}else{
									
								Play2.ActivoJug=true;
									
								}
								
								
							}
							
							
							
					}
				  
					
					Menu();
			break;	
			
			
			case 'j':
			case 'J':
					printf("Ustede selecciono la opcion J perra ");
					
					
					Menu();
					
		    break;
		    
				
				
			case 'd':
			case 'D':
					printf("Ustede selecciono la opcion D perra ");
					
					
					Menu();
					
		    break;
		    
		    
		    
		    case 'm':
			case 'M':
					printf("Ustede selec M");
					
					
					Menu();
					
		    break;
			
			
			case 'e':
			case 'E':
					printf("\nUsted seleciono la opcion e \n");
					printf("\nEscriba el nombre de quien quiera eliminar: \n");
					scanf("%s",&peop);
					EliminarJugador(peop);
					
					Menu();
					
		    break;
				
		    
		    
		    
		    
		    
				
					
			case 's':
			case 'S':
				
					printf("Usted quiso salir del programa gracias por eleginso jajaj  \n");
					
				
				
				
			break;
			
			
			default:
				
				printf("\n****** Usted selecciono una opcion que no esta disponible ***** \n");
				Menu();
		
			break;
			
			
			
		}
		

	
}



int main()
{
	

 

	
    Menu();


	
	
	
	
	
	return 0;

}

