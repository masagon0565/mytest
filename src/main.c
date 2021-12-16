#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 問題の要求する1行のサイズが大きい場合はこの値を変更してください。
// If the problem requires more large line size, please modify following.

#define LINE_BUF_SIZE  1024

int step;
int N;
int Ai[2000];



int main(void) {
  // このコードは標準入力と標準出力を用いたサンプルコードです。
  // このコードは好きなように編集・削除してもらって構いません。
  // ---
  // This is a sample code to use stdin and stdout.
  // Edit and remove this code as you like.

char b[]=" ";
char *p;
int i,j;


static char line[LINE_BUF_SIZE];

  int index = 1;
  while (fgets(line, sizeof(line), stdin) != NULL) {
	  printf("line[]: %s\n",  line);

	  if(index==1){
		 step=atoi(line);
		 printf("step1:%d\n",step);
          }else if(index==2){
		 N=atoi(line);
		 printf("N:%d\n",N);
          }else if(index==3){
		i=0;
	
		p = strtok(line,b);

  
         while(p != NULL ){
	         printf("p: %s\n",p);
                 p=strtok(NULL,b);


         if(p!=NULL){
             printf("Ai[%d]=%s\n",i,p);
             Ai[i]=atoi(p);
                
	  j=[N/2][N/2];

	 @[[
		[] 

        
		
	  }
i++;
		}
	  }
  	  index++;
  }
  return 0;
}
