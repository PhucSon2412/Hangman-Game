#include<stdio.h>
#include<string.h>
#include<windows.h>
#define MAX_SIZE 100
void human(int wrong){ 
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if(wrong==0) for(int i=0;i<18;i++) printf("\n");
    else if(wrong==1){
        for(int i=0;i<17;i++) printf("\n");                          
        for(int i=0;i<35;i++) printf("%c",219);  
        printf("\n"); 
    } else if(wrong==2){
        for(int i=0;i<20;i++) printf("%c",219);                            
        for(int i=0;i<17;i++) printf("%c%c\n",219,219);                          
        for(int i=0;i<35;i++) printf("%c",219); 
        printf("\n");    
    } else if(wrong==3){
        for(int i=0;i<20;i++) printf("%c",219);                              
        printf("\n");                                                              
        printf("%c%c                 %c\n",219,219,219);                         
        printf("%c%c                 %c\n",219,219,219);                             
        for(int i=0;i<14;i++) printf("%c%c\n",219,219);                            
        for(int i=0;i<35;i++) printf("%c",219);   
        printf("\n"); 
    } else if(wrong==4){
        for(int i=0;i<20;i++) printf("%c",219);                              
        printf("\n");                                                              
        printf("%c%c                 %c\n",219,219,219);                           
        printf("%c%c                 %c\n",219,219,219);                             
        for(int i=0;i<2;i++){                                                     
            printf("%c%c               ",219,219);                                  
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("\n");
        }
        for(int i=0;i<12;i++) printf("%c%c\n",219,219);                          
        for(int i=0;i<35;i++) printf("%c",219);  
        printf("\n");  
    } else if(wrong==5){
        for(int i=0;i<20;i++) printf("%c",219);                                
        printf("\n");                                                              
        printf("%c%c                 %c\n",219,219,219);                        
        printf("%c%c                 %c\n",219,219,219);                             
        for(int i=0;i<2;i++){                                                     
            printf("%c%c               ",219,219);                                  
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("\n");
        }
        printf("%c%c                %c%c%c\n",219,219,222,219,221);               
        printf("%c%c               ",219,219);                                             
        for(int i=0;i<5;i++) printf("%c",219);
        printf("\n");
        for(int i=0;i<3;i++){
            printf("%c%c               ",219,219,219,219);           
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("\n");
        }
        for(int i=0;i<1;i++){                                       
            printf("%c%c               ",219,219);                  
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("\n");
        }
        for(int i=0;i<6;i++) printf("%c%c\n",219,219);                          
        for(int i=0;i<35;i++) printf("%c",219); 
        printf("\n");
    } else if(wrong==6){
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_GREEN);
        for(int i=0;i<20;i++) printf("%c",219);                                   
        printf("\n");                                                              
        printf("%c%c                 %c\n",219,219,219);                           
        printf("%c%c                 %c\n",219,219,219);                             
        for(int i=0;i<2;i++){                                                     
            printf("%c%c               ",219,219);                                  
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("\n");
        }
        printf("%c%c                %c%c%c\n",219,219,222,219,221);                
        printf("%c%c           ",219,219);                                                  
        for(int i=0;i<9;i++) printf("%c",219);
        printf("\n");
        for(int i=0;i<3;i++){
            printf("%c%c           %c%c  ",219,219,219,219);           
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("\n");
        }
        for(int i=0;i<1;i++){                                          
            printf("%c%c               ",219,219);                  
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("\n");
        }
        for(int i=0;i<6;i++) printf("%c%c\n",219,219);                            
        for(int i=0;i<35;i++) printf("%c",219);  
        printf("\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
    } else if(wrong==7){
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_GREEN);
        for(int i=0;i<20;i++) printf("%c",219);                            
        printf("\n");                                                              
        printf("%c%c                 %c\n",219,219,219);                            
        printf("%c%c                 %c\n",219,219,219);                             
        for(int i=0;i<2;i++){                                                   
            printf("%c%c               ",219,219);                                  
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("\n");
        }
        printf("%c%c                %c%c%c\n",219,219,222,219,221);        
        printf("%c%c           ",219,219);                                          
        for(int i=0;i<13;i++) printf("%c",219);
        printf("\n");
        for(int i=0;i<3;i++){
            printf("%c%c           %c%c  ",219,219,219,219);           
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("  %c%c",219,219);
            printf("\n");
        }
        for(int i=0;i<1;i++){                                        
            printf("%c%c               ",219,219);                  
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("\n");
        }
        for(int i=0;i<6;i++) printf("%c%c\n",219,219);                       
        for(int i=0;i<35;i++) printf("%c",219);  
        printf("\n"); 
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
    } else if(wrong==8){
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        for(int i=0;i<20;i++) printf("%c",219);                                   
        printf("\n");                                                              
        printf("%c%c                 %c\n",219,219,219);                        
        printf("%c%c                 %c\n",219,219,219);                             
        for(int i=0;i<2;i++){                                                    
            printf("%c%c               ",219,219);                                  
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("\n");
        }
        printf("%c%c                %c%c%c\n",219,219,222,219,221);              
        printf("%c%c           ",219,219);                                                    //7
        for(int i=0;i<13;i++) printf("%c",219);
        printf("\n");
        for(int i=0;i<3;i++){
            printf("%c%c           %c%c  ",219,219,219,219);           
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("  %c%c",219,219);
            printf("\n");
        }                                          
            printf("%c%c               ",219,219);                   
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("\n");
        for(int i=0;i<4;i++){
            printf("%c%c               ",219,219);                    
            for(int j=0;j<2;j++){
                printf("%c",219);
            }
            printf("\n");
        }
        for(int i=0;i<2;i++) printf("%c%c\n",219,219);                   
        for(int i=0;i<35;i++) printf("%c",219); 
        printf("\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
    } else if(wrong==9){
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        for(int i=0;i<20;i++) printf("%c",219);                                 
        printf("\n");                                                              
        printf("%c%c                 %c\n",219,219,219);                           
        printf("%c%c                 %c\n",219,219,219);                             
        for(int i=0;i<2;i++){                                                     
            printf("%c%c               ",219,219);                                  
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("\n");
        }
        printf("%c%c                %c%c%c\n",219,219,222,219,221);               
        printf("%c%c           ",219,219);                                                 
        for(int i=0;i<13;i++) printf("%c",219);
        printf("\n");
        for(int i=0;i<3;i++){
            printf("%c%c           %c%c  ",219,219,219,219);           
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("  %c%c",219,219);
            printf("\n");
        }                                          
            printf("%c%c               ",219,219);                  
            for(int j=0;j<5;j++){
                printf("%c",219);
            }
            printf("\n");
        for(int i=0;i<4;i++){
            printf("%c%c               ",219,219);                   
            for(int j=0;j<2;j++){
                printf("%c",219);
            }
            printf(" ");
            for(int j=0;j<2;j++){
                printf("%c",219);
            }
            printf("\n");
        }
        for(int i=0;i<2;i++) printf("%c%c\n",219,219);               
        for(int i=0;i<35;i++) printf("%c",219); 
        printf("\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
    }
}
int word_checking(char word[MAX_SIZE],char c,int lenght,int hiddenword[MAX_SIZE]){
    int ascii=c,correct=0;
    for(int i=0;i<lenght;i++){
        if(word[i]==ascii){
            hiddenword[i]=1;
            correct=1;
        }
    }
    return(correct);
}
void word_printing(char word[MAX_SIZE],int hiddenword[MAX_SIZE],int lenght){
    for(int i=0;i<lenght;i++){
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        if(hiddenword[i]){ 
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
            printf("%c",word[i]);
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
        }
        else if(hiddenword[i]==0) printf("_");
        else if(hiddenword[i]==2) printf(" ");
    }
}
int win_checking(int hiddenword[MAX_SIZE],int lenght){
    int reveal=0;
    for(int i=0;i<lenght;i++){
        if(hiddenword[i]!=0) reveal++;
    }
    if(reveal==lenght) return 1;
    else return 0;
}
int main(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char word[MAX_SIZE],hint[MAX_SIZE],c;
    int hiddenword[MAX_SIZE],wrong=0,win=0;
    for(int i=0;i<100;i++) hiddenword[i]=0;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("=========================HANGMAN=========================\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_BLUE);
    printf("*HUONG DAN*\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_GREEN);
    printf("+ 1 nguoi cung cap tu khoa va goi y\n+ Nguoi con lai doan cac chu cai trong tu khoa\n+ Neu nhap sai tu khoa nguoi se dan dan treo co\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE|FOREGROUND_GREEN);
    printf("Nhap tu khoa (toi da 100 ky tu): ");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_GREEN);
    fgets(word,100,stdin);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE|FOREGROUND_GREEN);
    printf("Nhap goi y (vi du: Tieng Anh hay Tieng Viet, tu khoa ve chu de gi. Toi da 100 ky tu): ");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_GREEN);
    fgets(hint,100,stdin);
    int lenght=strlen(word)-1;
    for(int i=0;i<lenght;i++) if(word[i]==32) hiddenword[i]=2;
    while (1){
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE|FOREGROUND_GREEN);
        printf("Nhap ky tu (a-z): ");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_GREEN);
        scanf("%c",&c);
        system("cls");
        while ((getchar()) != '\n');
        if(!word_checking(word,c,lenght,hiddenword)) wrong+=1;
        human(wrong);
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE|FOREGROUND_GREEN);
        printf("Hint:");
        puts(hint);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_GREEN);
        if(wrong==9) break;
        if(win_checking(hiddenword,lenght)){
            win=1;
            break;
        }
        word_printing(word,hiddenword,lenght);
        printf("\n");
    }
    if(win){
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf("CHIEN THANG");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_GREEN);
    } else {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("THUA CUOC");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_GREEN);
    }
    getch();
}