int weatherAccess(int num);

int weatherAccessMaster(void){
}




int weatherAccess(int num)
{
	FILE *fp;	/* (1)ファイルポインタの宣言 */
	char textNumber[48][256] = {0};
	int gyo = 0;
	char weather[64] = {"https://weather.yahoo.co.jp/weather/jp/"};
  char str[128];
  //strcpy(weather, "https://weather.yahoo.co.jp/weather/jp/");
  //char amari = '/';
	/* (2)ファイルのオープン */
	/*  ここで、ファイルポインタを取得する */
	if ((fp = fopen("weather.Date", "r")) == NULL) {
		printf("file open error!!\n");
		exit(EXIT_FAILURE);	/* (3)エラーの場合は通常、異常終了する */
	}

	for (int i=1;fgets(textNumber[i], 256, fp) != NULL;i++){
	}


	num = ((int)textNumber[gyo][15] - '0')*10 + ((int)textNumber[gyo][16] - '0');
  if(gyo == 1){
		ShellExecute(NULL, "open","https://weather.yahoo.co.jp/weather/jp/1.html?day=1", NULL, NULL, SW_SHOW);
		return 0;
	}
  sprintf(str,"https://weather.yahoo.co.jp/weather/jp/%d/",num);
	fclose(fp);	/* (5)ファイルのクローズ */
	ShellExecute(NULL, "open", str , NULL, NULL, SW_SHOW);
	//strcat(weather, (char)num);
	//strcat(weather, amari);
  //printf("%s\n",weather);


	return 0;
}
