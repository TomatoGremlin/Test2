#include <stdio.h>
#include <string.h>

char ValuetoChar(char* cha, int len )
{
    for(int i = 0; i < len; i++){
     if (i%2 == 0){
        switch (cha[i]){
        case '0': 
            cha[i] ='A';
            break;
            
        case '1': 
            cha[i] ='B';
            break;
        case '2': 
            cha[i] ='C';
            break;
        case '3': 
            cha[i] ='D';
            break;
        case '4': 
            cha[i] ='E';
            break;
        case '5': 
            cha[i] ='F';
            break;
        case '6': 
            cha[i] ='G';
            break;
         case '7': 
            cha[i] ='H';
            break;
        case '8': 
            cha[i] ='I';
            break;
        case '9': 
            cha[i] ='J';
            break;

        default:
          printf("Error");
            break;
        }

        
     }
     else{
         switch (cha[i]){
        case '0': 
            cha[i] ='!';
            break;
            
        case '1': 
            cha[i] ='#';
            break;
        case '2': 
            cha[i] ='/';
            break;
        case '3': 
            cha[i] ='~';
            break;
        case '4': 
            cha[i] ='=';
            break;
        case '5': 
            cha[i] ='\'';
            break;
        case '6': 
            cha[i] ='\\';
            break;
         case '7': 
            cha[i] ='>';
            break;
        case '8': 
            cha[i] ='.';
            break;
        case '9': 
            cha[i] =',';
            break;

        default:
            printf("Error");
            break;
        }
         
     }
     
    }
     printf("%s", cha);
        
}

int main()
{
    
    char number [500];
    
    scanf("%s", number);
    int len = strlen(number);
    
    ValuetoChar(number,len );

    return 0;
}
