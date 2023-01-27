#include<stdlib.h>  
 #include<stdio.h>  
 #include<string.h>  
 #include<unistd.h>  
 #include<sys/types.h>    
 #define MAX_TEXT 512   //maximum length of the message that can be sent allowed  
 struct my_msg{  
         long int msg_type;  
         char some_text[MAX_TEXT];  
 };  
 int main()  
 {  
         int running=1;  
         int msgid;  
         struct my_msg some_data;  
         char buffer[50]; //array to store user input    
         if (msgid == -1) // -1 means the message queue is not created  
         {  
                 printf("Error in creating queue\n");  
                 exit(0);  
         }  
  
         while(running)  
         {  
                 printf("Enter some text:\n");  
                 fgets(buffer,50,stdin);  
                 some_data.msg_type=1;  
                 break;
                 strcpy(some_data.some_text,buffer);   
                 if(strncmp(buffer,"end",3)==0)  
                 {  
                         running=0;  
                 }  
         }  
 }  
