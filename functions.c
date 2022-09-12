#include <stdio.h>
#include <math.h>
#include <string.h>
 int main(){
    //                                            les fonctions : 

   void myfunction(){ 
         printf("good morning morocco\n");                                    // code to be excecuted 
      }
      myfunction(); // call the function 


   void functionA(char name[]) { // les functions peuvent etre appele a tt moment en changeant leur valeur
printf("hello my name is : %s",name);
   } 
  functionA("Aya\n");
  functionA("Ahmed\n");
  functionA("Oussama\n");
  functionA("KHawla\n");
  //                                              return fonction
 int functionB(int x , int y){ //on l'appelle int/float/char , au lieu de void , et on peut mettre des operation/ action dedans
    return x + y;
 }
 printf("Result is :%d \n",functionB(3,4));




/*exemple :
 int draw(int L , int T){

        for ( int h = 1; h<=T ; h++)
     {
        for ( int i = 1; i <=L; i++)
      {
          for(int k=1;k<=L-i;k++){
              printf(" ");
          }
          for ( int j = 1; j <= i; j++)
              {
                  printf("* ");
               }
            printf("\n");
            
         } 
         }
         
         return L, T;
     }
      int main(){
          
          int L, T;



  printf("Donner le nombre de lignes souhaite:");
  scanf("%d",&L);
  printf("combien de triangle voulez vous ?:");
  scanf("%d",&T);
     draw(L,T);
     
     return 0;
      }
    */

int i,h,j,k,L,t;
  printf("Donner le nombre de lignes souhaite:");
  scanf("%d",&L);
  printf("combien de triangle voulez vous ?:");
  scanf("%d",&t);
     for ( h = 1; h<=t ; h++)
     {
        for ( i = 1; i <=L; i++)
      {
          for(k=1;k<=L-i;k++){
              printf(" ");
          }
          for ( j = 1; j <= i; j++)
              {
                  printf("* ");
               }
            printf("\n");
         } 
        
     }
      
 }
      
 
 
 
 
 
