

int weatherAccess(void)
{
	FILE *fp;	/* (1)�t�@�C���|�C���^�̐錾 */
	char textNumber[48][256] = {0};
	int gyo = 0;
	int num;
	char weather[64] = {"https://weather.yahoo.co.jp/weather/jp/"};
  char str[128];
  //strcpy(weather, "https://weather.yahoo.co.jp/weather/jp/");
  //char amari = '/';
	/* (2)�t�@�C���̃I�[�v�� */
	/*  �����ŁA�t�@�C���|�C���^���擾���� */
	if ((fp = fopen("weather.Date", "r")) == NULL) {
		printf("file open error!!\n");
		exit(EXIT_FAILURE);	/* (3)�G���[�̏ꍇ�͒ʏ�A�ُ�I������ */
	}

	for (int i=1;fgets(textNumber[i], 256, fp) != NULL;i++){
	}


	printf("�s���{���ԍ�����͂��Ă�������\n");
	scanf("%d",&gyo);
	printf("%s\n",textNumber[gyo]);
	num = ((int)textNumber[gyo][15] - '0')*10 + ((int)textNumber[gyo][16] - '0');
  printf("%d\n",num );
	printf("%s%d/\n",weather,num);
	if(gyo == 1){
		ShellExecute(NULL, "open","https://weather.yahoo.co.jp/weather/jp/1.html?day=1", NULL, NULL, SW_SHOW);
		return 0;
	}
  sprintf(str,"https://weather.yahoo.co.jp/weather/jp/%d/",num);
	printf("%s\n",str);
	fclose(fp);	/* (5)�t�@�C���̃N���[�Y */
	ShellExecute(NULL, "open", str , NULL, NULL, SW_SHOW);
	//strcat(weather, (char)num);
	//strcat(weather, amari);
  //printf("%s\n",weather);


	return 0;
}
