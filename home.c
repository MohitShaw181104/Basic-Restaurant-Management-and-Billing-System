#include <stdio.h>

//THIS FUNCTION SAVES THE ENTERED ORDER AND SAVES THEM IN A FILE DATE AND ORDER NUMBERWISE    
void  Sales_Record(int item[],int qty[], int date, int month, int year,int n, int ordno)
{    
//HERE ARE DIFFERENT VARIABLES LABELLED WITH NAMES OF DIFFERENT FOOD ITEMS OF MENU  

    int ShahiPaneer = 0;

    int DalMakhani = 0; 

    int CholeBhature = 0; 

    int MalaiKofta = 0; 

    int PalakPaneer = 0; 

    int JeeraRice = 0; 

    int MixVeg = 0; 

    int Roti = 0; 

    int MixRaita = 0; 

    int HakkaNoodles =0; 

    int ButterChicken = 0; 

    int ChickenBiryani = 0; 

    int BhapaEilish = 0; 

    int FishCurry = 0; 

    int ChickenLollipop = 0;

    int ChickenSatta = 0;

    int EggCurry = 0;

    int ChilliChicken = 0;

    int MuttonBiryani = 0;

    int Pulaao = 0;


     //THIS LOOP RUNS 'n' TIMES AND STORES COUNT OF FOOD ITEMS ACCORDING TO THEIR FOODCODE INTO THEIR RESPECTIVE VARIABLES

     for( int i = 0; i < n; i++ )
     {
         if( item[i] == 11 )
         { 
            // IF THE NUMBER STORED IN ARRAY EQUALS THE CODE, THE QUANTITY GETS STORED IN THE VARIABLE
             ShahiPaneer = qty [i];
             }

         else if( item[i] == 12 )
         { 
             DalMakhani = qty[i];
         }

         else if( item[i] == 13 )
         { 
             CholeBhature = qty[i];
         }

         else if( item[i] == 14 )
         { 
             MalaiKofta = qty[i];
         }

         else if( item[i] == 15 )
         { 
             PalakPaneer = qty[i];
         }

         else if( item[i] == 16 )
         { 
             JeeraRice = qty[i];
         }

         else if( item[i] == 17 )
         { 
             MixVeg = qty[i];
         }

         else if( item[i] == 18 )
         { 
             Roti = qty[i];
         }

         else if( item[i] == 19 )
         { 
             MixRaita = qty[i];
         }

         else if( item[i] == 20 )
         { 
             HakkaNoodles = qty[i];
         }

         else if( item[i] == 1 )
         { 
             ButterChicken = qty[i];
         }

         else if( item[i] == 2 )
         { 
             ChickenBiryani = qty[i];
         }

         else if( item[i] == 3 )
         { 
             BhapaEilish = qty[i];
         }

         else if( item[i] == 4 )
         { 
             FishCurry = qty[i];
         }

         else if( item[i] == 5 )
         { 
             ChickenLollipop = qty[i];
         }

         else if( item[i] == 6 )
         { 
             ChickenSatta = qty[i];
         }

         else if( item[i] == 7 )
         { 
             EggCurry = qty[i];
         }

         else if( item[i] == 8 )
         { 
             ChilliChicken = qty[i];
         }

         else if( item[i] == 9 )
         { 
             MuttonBiryani = qty[i];
         }

         else if( item[i] == 10 )
         { 
             Pulaao = qty[i];
         }

     }

     // WE CREATE A FILE IN APPEND MODE TO STORE ORDERWISE DATA IN IT

     FILE *quan; 
     quan = fopen("quantity data by date.txt","a+");
         // HERE WE WRITE THE ORDER, DATEWISE AND ORDER NUMBER WISE TO FILES
         fprintf(quan, "\n%2d/%2d/%4d\n" , date, month, year );

         fprintf(quan, "Order Number: %4d\n", ordno );

         fprintf(quan,"Butter Chicken           %d\n",ButterChicken);

         fprintf(quan,"Chicken Biryani          %d\n",ChickenBiryani);

         fprintf(quan,"Bhapa Eilish             %d\n",BhapaEilish);

         fprintf(quan,"Fish curry               %d\n",FishCurry);

         fprintf(quan,"Chicken Lollipop         %d\n",ChickenLollipop);

         fprintf(quan,"Chicken Satta            %d\n",ChickenSatta);

         fprintf(quan,"Egg Curry                %d\n",EggCurry);

         fprintf(quan,"Chilli Chicken           %d\n",ChilliChicken);

         fprintf(quan,"Mutton Biryani           %d\n",MuttonBiryani);

         fprintf(quan,"Pulaao                   %d\n",Pulaao);

         fprintf(quan,"Shahi Paneer             %d\n",ShahiPaneer);

         fprintf(quan,"Dal Makhani              %d\n",DalMakhani);

         fprintf(quan,"Chole Bhature            %d\n",CholeBhature);

         fprintf(quan,"Malai kofta              %d\n",MalaiKofta);

         fprintf(quan,"Palak Paneer             %d\n",PalakPaneer);

         fprintf(quan,"Jeera Rice               %d\n",JeeraRice);

         fprintf(quan,"Mix Veg                  %d\n",MixVeg);

         fprintf(quan,"Roti                     %d\n",Roti);

         fprintf(quan,"Mix Raita                %d\n",MixRaita);

         fprintf(quan,"Hakka Noodles            %d\n",HakkaNoodles);

      //FILE IS CLOSED
     fclose(quan);

}

//THIS FUNCTION GENERATES THE BILL
void billfoodcount(int item[], int qty[], int date, int month, int year, int n,int ordno)
{

      //BILL LAYOUT
      printf("\n\n\n\n--------------------BILL------------------------------");

      printf("\nDATE: %d/%d/%d                    ORDER NUMBER: %d\n",date,month,year,ordno);

      printf("------------------------------------------------------\n");

      printf("Description       Qty       Rate          Amount      \n");

      printf("------------------------------------------------------\n");

      //DECLARING VARIABLES AS PER REQUIREMENTS AND INITIALISING THEM WITH ZERO

           int ShahiPaneer = 0, DalMakhani = 0, CholeBhature = 0, MalaiKofta = 0, PalakPaneer = 0, JeeraRice = 0, MixVeg = 0, Roti = 0, MixRaita = 0, HakkaNoodles =0, ButterChicken = 0, ChickenBiryani = 0, BhapaEilish = 0, FishCurry = 0, ChickenLollipop = 0,ChickenSatta = 0,EggCurry = 0,ChilliChicken = 0,MuttonBiryani = 0,Pulaao = 0;

     //CREATING A VARIABLE TO STORE TOTAL AMOUNT      

     int total =0;


     //THIS LOOP RUNS 'n' TIMES AND STORES COUNT OF FOOD ITEMS ACCORDING TO THEIR FOODCODE INTO THEIR RESPECTIVE VARIABLES

     for( int i = 0; i < n; i++ )
     {
        //THESE CONDITIONS TEST IF THE INTEGER IN ITEM EQUALS CODE OF FOOD AND STORES ITS QUANTITY ACCORDINGLY


         if( item[i] == 11 )
         { 
             ShahiPaneer = qty[i];
             printf("Shahi Paneer       %d       200/-          %d\n", ShahiPaneer, ShahiPaneer*200 );
             total += ShahiPaneer*200 ;
             }

         else if( item[i] == 12 )
         { 
             DalMakhani = qty[i];
             printf("Dal Makhani        %d       100/-          %d\n", DalMakhani, DalMakhani*100 );
             total += DalMakhani*100 ;
             }

         else if( item[i] == 13 )
         { 
             CholeBhature = qty[i];
             printf("Chole Bhature      %d        50/-          %d\n", CholeBhature, CholeBhature*50 );
             total += CholeBhature*50 ;
             }

         else if( item[i] == 14 )
         { 
             MalaiKofta = qty[i];
             printf("Malai Kofta        %d       150/-          %d\n", MalaiKofta, MalaiKofta*150 );
             total += MalaiKofta*150 ;
             }

         else if( item[i] == 15 )
         { 
             PalakPaneer = qty[i];
             printf("Palak Paneer       %d       250/-          %d\n", PalakPaneer, PalakPaneer*250 );
             total += PalakPaneer*250 ;
             }

         else if( item[i] == 16 )
         { 
             JeeraRice = qty[i];
             printf("Jeera Rice         %d        80/-          %d\n", JeeraRice, JeeraRice*80 );
             total += JeeraRice*80 ;
             }

         else if( item[i] == 17 )
         { 
             MixVeg = qty[i];
             printf("Mix Veg            %d       150/-          %d\n", MixVeg, MixVeg*150 );
             total += MixVeg*150 ;
             }

         else if( item[i] == 18 )
         { 
             Roti = qty[i];
             printf("Roti               %d        10/-          %d\n", Roti, Roti*10 );
             total += Roti*10 ;
             }

         else if( item[i] == 19 )
         { 
             MixRaita = qty[i];
             printf("Mix Raita          %d        40/-          %d\n", MixRaita, MixRaita*40 );
             total += MixRaita*40 ;
             }

         else if( item[i] == 20 )
         { 
             HakkaNoodles = qty[i];
             printf("Hakka Noodles      %d        50/-          %d\n", HakkaNoodles, HakkaNoodles*50 );
             total += HakkaNoodles*50 ;
             }

         else if( item[i] == 1 )
         { 
             ButterChicken = qty[i];
             printf("Butter Chicken     %d       400/-          %d\n", ButterChicken, ButterChicken*400 );
             total += ButterChicken*400 ;
             }

         else if( item[i] == 2 )
         { 
             ChickenBiryani = qty[i];
             printf("Chicken Biryani    %d       220/-          %d\n", ChickenBiryani, ChickenBiryani*220 );
             total += ChickenBiryani*220 ;
             }

         else if( item[i] == 3 )
         { 
             BhapaEilish = qty[i];
             printf("Bhapa Eilish       %d       250/-          %d\n", BhapaEilish, BhapaEilish*250 );
             total += BhapaEilish*250 ;
             }

         else if( item[i] == 4 )
         { 
             FishCurry = qty[i];
             printf("Fish Curry         %d       200/-          %d\n", FishCurry, FishCurry*200 );
             total += FishCurry*200 ;
             }

         else if( item[i] == 5 )
         { 
             ChickenLollipop = qty[i];
             printf("Chicken Lollipop   %d        25/-          %d\n", ChickenLollipop, ChickenLollipop*25 );
             total += ChickenLollipop*25 ;
             }

         else if( item[i] == 6 )
         { 
             ChickenSatta = qty[i];
             printf("Chicken Satta      %d        30/-          %d\n", ChickenSatta, ChickenSatta*30 );
             total += ChickenSatta*30 ;
             }

         else if( item[i] == 7 )
         { 
             EggCurry = qty[i];
             printf("Egg Curry          %d       180/-          %d\n", EggCurry, EggCurry*180 );
             total += EggCurry*180 ;
             }

         else if( item[i] == 8 )
         { 
             ChilliChicken = qty[i];
             printf("Chilli Chicken     %d       300/-          %d\n", ChilliChicken, ChilliChicken*300 );
             total += ChilliChicken*300 ;
             }

         else if( item[i] == 9 )
         { 
             MuttonBiryani = qty[i];
             printf("Mutton Biryani     %d       500/-          %d\n", MuttonBiryani, MuttonBiryani*500 );
             total += MuttonBiryani*500 ;
             }

         else if( item[i] == 10 )
         { 
             Pulaao = qty[i];
             printf("Pulaao             %d       100/-          %d\n", Pulaao, Pulaao*100 );
             total += Pulaao*100 ;
             }                                                                                     


     }



     //CONVERTING TOTAL TO FLOAT
     float f = (float)total;

     //REMAINING BILL LAYOUT

     printf("\n------------------------------------------------------");

     printf("\nFood Amount Rs.                           %.2f\n",f);

     printf("CGST @ 5 on    %f                 %.2f\n",f,(f*5)/100);

     printf("SGST @ 5 on    %f                 %.2f\n",f,(f*5)/100);

     printf("Net Food Amount Rs.                       %.2f\n",f+(2*((f*5)/100)));

     printf("CASH                                      %.0f\n",f+(2*((f*5)/100)));

     printf("----------------*THANK YOU*---------------------------\n");

}


// THE MAIN FUNCTION, PROGRAMME GETS EXECUTED FROM HERE

int main(){

   //DECLARING SOME VARIABLES AS PER REQUIREMENT
   int countorder,date,month,year,ordno;

   //OPENING REQUIRED FILES
   FILE *veg;

   FILE *nonveg;

   // THESE STEPS ARE TO PRINT THE VEG AND NONVEG MENU
   veg = fopen("vegmenu.txt","r");
   nonveg = fopen("NonVegmenu.txt","r");

   char vg,nvg;
   vg = fgetc(veg);
   nvg = fgetc(nonveg);

   printf("VEG MENU\n");

   // FETCHING CHARACTERS FROM THE FILE TILL THE END OF FILE(EOF)
   while(vg!=EOF)
   {
     printf( "%c", vg );
     vg = fgetc( veg );
   }


   printf( "\n\nNON VEG MENU\n" );


   while(nvg!=EOF)
   {
     printf( "%c", nvg );
     nvg = fgetc(nonveg);
   }


   // GETTING INPUT FROM THE USER


   printf("\n\n------------------------------------------------------");

   printf("\n\n\n\nEnter date, month and year (dd mm yyyy); ");

   scanf("%d %d %d",&date,&month,&year);

   printf("\nEnter Order No.: ");

   scanf("%d",&ordno);

   printf("\nHow Many Food Items? "); // INPUT NUMBER OF FOOD ITEMS TO KNOW THE NUMBER OF TIMES LOOP MUST RUN

   scanf("%d",&countorder);


   // CREATING ARRAYS TO STORE INPUT DATA
   int item[countorder]; 
   int qty[countorder];


   //INPUT BY USER
   for(int i = 0; i < countorder; i++)
   {    
       printf( "\nenter food item code: " ) ;

       scanf( "%d" , &item[i] );

       printf( "\n" ) ;

       printf( "enter quantity for item %d: " , item[i] );

       scanf( "%d", &qty[i] );

       printf( "\n" ) ;

   }

      //CALLING FUNCTIONS AS PER REQUIREMENTS 
      Sales_Record( item, qty, date, month, year, countorder,ordno );
      billfoodcount(item, qty,date, month, year, countorder,ordno);


   // CLOSING FILES AT THE END

   fclose(veg);    

   fclose(nonveg);

   return 0;
}