#include<stdio.h>


int main(){
	
// *************************************Conditions challange 1*************************************
//   int revenu , credit , pret;
//        
//     printf("entre la revenu en euros :");
//     scanf("%d",&revenu);
//     printf("entre la credit sur 1000 :");
//     scanf("%d",&credit);
//     printf("entre la pret en annees :");
//     scanf("%d",&pret);
//
//
//     if(revenu >= 30000 && credit >= 700 && pret <= 10 ){
//   	     printf("Eligible");
//     }else if(revenu >= 30000 && credit >=650 && pret <= 10 ){
//   	     printf("�ligible avec conditions");
//     }else if(revenu < 30000 && credit <  650 && pret >  10 ){
//   	     printf("Non �ligible");
//     }else{
//     	printf("aucun resulta ");
//	 }
	 
	 
// *************************************Conditions challange 2*************************************	 


     int annee, type, NbAc , result;
     float Prix,PrixBA;

     printf("Entrez le prix de la voiture : ");
     scanf("%f", &Prix);
     printf("Entrez le prix de la voiture : ");
     scanf("%f", &PrixBA);

     printf("Entrez l'ann�e de la voiture : ");
     scanf("%d", &annee);
     if(annee < 25 ){
		 result = PrixBA * 1.5; 
     }else if(annee >= 25 && annee <= 65 ){
		 result = PrixBA ; 
	 }else if(annee  > 65 ){
		 result = PrixBA * 1.2; 
	 }
	 printf("\n l'assurance = %d \n\n",result);
	
	
     printf("1 pour sportive, 2 pour utilitaire, 3 pour familiale\n");
     printf("Entrez le type de voiture : ");
     scanf("%d", &type);
     
	 result=0;
     if(type == 'Sportive' ){
    	 type == 1;
	 }else if(type == 'Utilitaire'){
		 type == 2;
	 }else if(type == 'Utilitaire'){
		 type == 2;
	 }else{
		 printf("entre si  Sportive ou Utilitaire ou Familiale ");
	 }

	
	
     if(type == 1 ){
		 result = Prix * 2; 
	 }else if(type == 2 ){
		 result = Prix * 1.2; 
	 }else if(type == 3 ){
		 result = Prix * 1.2; 
	 }
	 printf("\n l'assurance = %d \n\n",result);

     result =0;

     printf("Nombre d'accidents au cours des 5 derni�res ann�es : ");
     printf("Entrez le nombre d'accidents : ");
     scanf("%d", &NbAc);
     if(NbAc > 1){
		 result = Prix + (Prix * 0.3); 
	 }else{
		 printf("aucun axidante");
	 }
     printf("l'assurance = %d \n\n",result );
    




// *************************************Conditions challange 3*************************************
// *************************************Conditions challange 4*************************************

}
