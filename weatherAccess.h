int weatherAccess(int num);

int weatherAccessMaster(void){
	readWordIn= "どの地方の天気を見ますか？";
	SPEAK_MASTER;
		cout << endl << "0.戻る" << endl;
		cout << "1.北海道・東北" <<endl;
		cout << "2.関東" <<endl;
		cout << "3.中部" <<endl;
		cout << "4.近畿" <<endl;
		cout << "5.中国" <<endl;
		cout << "6.四国" <<endl;
		cout << "7.九州・沖縄" <<endl;
	SELECT_NUNBER;

	switch (selectNunber) {
		case 0:
			return 0;
		case 1:
			readWordIn= "都道府県の天気を見ますか？";
			SPEAK_MASTER;
				cout << endl << "0.戻る" << endl;
				cout << "1.北海道" <<endl;
				cout << "2.青森" <<endl;
				cout << "3.岩手" <<endl;
				cout << "4.宮城" <<endl;
				cout << "5.秋田" <<endl;
				cout << "6.山形" <<endl;
				cout << "7.福島" <<endl;
			SELECT_NUNBER;

			switch (selectNunber) {
				case 0:
					break;
				case 1:
					weatherAccess();
					break;
				case 2:
					weatherAccess();
					break;
				case 3:
					weatherAccess();
					break;
				case 4:
					weatherAccess();
					break;
			}
			break;
		case 2:
			readWordIn= "都道府県の天気を見ますか？";
			SPEAK_MASTER;
				cout << endl << "0.戻る" << endl;
				cout << "1.茨城" <<endl;
				cout << "2.栃木" <<endl;
				cout << "3.群馬" <<endl;
				cout << "4.埼玉" <<endl;
				cout << "5.千葉" <<endl;
				cout << "6.東京" <<endl;
				cout << "7.神奈川" <<endl;
				SELECT_NUNBER;

				switch (selectNunber) {
					case 0:
					break;
					case 1:
						weatherAccess();
					break;
					case 2:
						weatherAccess();
					break;
					case 3:
						weatherAccess();
					break;
					case 4:
						weatherAccess();
					break;
				}
			break;
		case 3:
			readWordIn= "都道府県の天気を見ますか？";
			SPEAK_MASTER;
				cout << endl << "0.戻る" << endl;
				cout << "1.新潟" <<endl;
				cout << "2.富山" <<endl;
				cout << "3.石川" <<endl;
				cout << "4.福井" <<endl;
				cout << "5.山梨" <<endl;
				cout << "6.長野" <<endl;
				cout << "7.岐阜" <<endl;
				cout << "8.静岡" <<endl;
				cout << "9.愛知" <<endl;
			SELECT_NUNBER;

			switch (selectNunber) {
				case 0:
					break;
				case 1:
					weatherAccess();
					break;
				case 2:
					weatherAccess();
					break;
				case 3:
					weatherAccess();
					break;
				case 4:
					weatherAccess();
					break;
			}
			break;
		case 4:
			readWordIn= "都道府県の天気を見ますか？";
			SPEAK_MASTER;
				cout << endl << "0.戻る" << endl;
				cout << "1.三重" <<endl;
				cout << "2.滋賀" <<endl;
				cout << "3.京都" <<endl;
				cout << "4.大阪" <<endl;
				cout << "5.兵庫" <<endl;
				cout << "6.奈良" <<endl;
				cout << "7.和歌山" <<endl;
				SELECT_NUNBER;

				switch (selectNunber) {
					case 0:
					break;
					case 1:
						weatherAccess();
					break;
					case 2:
						weatherAccess();
					break;
					case 3:
						weatherAccess();
					break;
					case 4:
						weatherAccess();
					break;
				}
			break;
		case 5:
			readWordIn= "都道府県の天気を見ますか？";
			SPEAK_MASTER;
				cout << endl << "0.戻る" << endl;
				cout << "1." <<endl;
				cout << "2." <<endl;
				cout << "3." <<endl;
				cout << "4." <<endl;
				cout << "5." <<endl;
				cout << "6." <<endl;
				cout << "7." <<endl;
			SELECT_NUNBER;

			switch (selectNunber) {
				case 0:
					break;
				case 1:
					weatherAccess();
					break;
				case 2:
					weatherAccess();
					break;
				case 3:
					weatherAccess();
					break;
				case 4:
					weatherAccess();
					break;
			}
			break;
		case 6:
			readWordIn= "都道府県の天気を見ますか？";
			SPEAK_MASTER;
				cout << endl << "0.戻る" << endl;
				cout << "1." <<endl;
				cout << "2." <<endl;
				cout << "3." <<endl;
				cout << "4." <<endl;
				cout << "5." <<endl;
				cout << "6." <<endl;
				cout << "7." <<endl;
				SELECT_NUNBER;

				switch (selectNunber) {
					case 0:
					break;
					case 1:
						weatherAccess();
					break;
					case 2:
						weatherAccess();
					break;
					case 3:
						weatherAccess();
					break;
					case 4:
						weatherAccess();
					break;
				}
			break;
		case 7:
			readWordIn= "都道府県の天気を見ますか？";
			SPEAK_MASTER;
				cout << endl << "0.戻る" << endl;
				cout << "1." <<endl;
				cout << "2." <<endl;
				cout << "3." <<endl;
				cout << "4." <<endl;
				cout << "5." <<endl;
				cout << "6." <<endl;
				cout << "7." <<endl;
			SELECT_NUNBER;

			switch (selectNunber) {
				case 0:
					break;
				case 1:
					weatherAccess();
					break;
				case 2:
					weatherAccess();
					break;
				case 3:
					weatherAccess();
					break;
				case 4:
					weatherAccess();
					break;
			}
			break;

	}

}




int weatherAccess(int num)
{
	char weather[64] = {"https://weather.yahoo.co.jp/weather/jp/"};
  if(num == 1){
		ShellExecute(NULL, "open","https://weather.yahoo.co.jp/weather/jp/1.html?day=1", NULL, NULL, SW_SHOW);
		return 0;
	}
  sprintf(str,"https://weather.yahoo.co.jp/weather/jp/%d/",num);
	ShellExecute(NULL, "open", str , NULL, NULL, SW_SHOW);

	return 0;
}
