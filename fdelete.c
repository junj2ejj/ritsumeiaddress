#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"


void fdelete(){
	FILE *fp;                      //ファイル傚冱
	char filename[SIZE];//filename
	printf("file to delete:");
	gets(filename);//input filename
	if((fp = fopen(filename, "w")) == NULL) {  //ファイル"filename"を柵び竃し
    printf("ファイルが��つかりません\n");
	} else {
    		fprintf(fp," ");
			printf("ファイル %s を��茅しました.\n",filename);//��茅したことを�鷂�
			fclose(fp);      //ファイルを�]じる
	}    
}
  
  
                 
  



