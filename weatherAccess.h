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
					weatherAccess(1);
					break;
				case 2:
					weatherAccess(2);
					break;
				case 3:
					weatherAccess(3);
					break;
				case 4:
					weatherAccess(4);
					break;
				case 5:
					weatherAccess(5);
					break;
				case 6:
					weatherAccess(6);
					break;
				case 7:
					weatherAccess(7);
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
						weatherAccess(8);
					  break;
					case 2:
						weatherAccess(9);
					  break;
					case 3:
						weatherAccess(10);
					  break;
					case 4:
						weatherAccess(11);
				  	break;
			  	case 5:
				  	weatherAccess(12);
					  break;
			  	case 6:
			  		weatherAccess(13);
					  break;
			  	case 7:
			  		weatherAccess(14);
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
					weatherAccess(15);
					break;
				case 2:
					weatherAccess(16);
					break;
				case 3:
					weatherAccess(17);
					break;
				case 4:
					weatherAccess(18);
					break;
				case 5:
					weatherAccess(19);
					break;
				case 6:
					weatherAccess(20);
					break;
				case 7:
					weatherAccess(21);
					break;
				case 8:
					weatherAccess(22);
					break;
				case 9:
					weatherAccess(23);
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
						weatherAccess(24);
					break;
					case 2:
						weatherAccess(25);
					break;
					case 3:
						weatherAccess(26);
					break;
					case 4:
						weatherAccess(27);
					break;
			  	case 5:
			 	  	weatherAccess(28);
			 	  	break;
			  	case 6:
			  		weatherAccess(29);
			  		break;
			  	case 7:
			  		weatherAccess(30);
			  		break;
				}
			break;
		case 5:
			readWordIn= "都道府県の天気を見ますか？";
			SPEAK_MASTER;
				cout << endl << "0.戻る" << endl;
				cout << "1.鳥取" <<endl;
				cout << "2.島根" <<endl;
				cout << "3.岡山" <<endl;
				cout << "4.広島" <<endl;
				cout << "5.山口" <<endl;
			SELECT_NUNBER;

			switch (selectNunber) {
				case 0:
					break;
				case 1:
					weatherAccess(31);
					break;
				case 2:
					weatherAccess(32);
					break;
				case 3:
					weatherAccess(33);
					break;
				case 4:
					weatherAccess(34);
					break;
				case 5:
					weatherAccess(35);
					break;
			}
			break;
		case 6:
			readWordIn= "都道府県の天気を見ますか？";
			SPEAK_MASTER;
				cout << endl << "0.戻る" << endl;
				cout << "1.徳島" <<endl;
				cout << "2.香川" <<endl;
				cout << "3.愛媛" <<endl;
				cout << "4.高知" <<endl;
				SELECT_NUNBER;

				switch (selectNunber) {
					case 0:
					  break;
					case 1:
						weatherAccess(36);
					  break;
					case 2:
						weatherAccess(37);
					  break;
					case 3:
						weatherAccess(38);
					  break;
					case 4:
						weatherAccess(39);
					  break;
				}
			break;
		case 7:
			readWordIn= "都道府県の天気を見ますか？";
			SPEAK_MASTER;
				cout << endl << "0.戻る" << endl;
				cout << "1.福岡" <<endl;
				cout << "2.佐賀" <<endl;
				cout << "3.長崎" <<endl;
				cout << "4.熊本" <<endl;
				cout << "5.大分" <<endl;
				cout << "6.宮崎" <<endl;
				cout << "7.鹿児島" <<endl;
				cout << "8.沖縄" <<endl;
			SELECT_NUNBER;

			switch (selectNunber) {
				case 0:
					break;
				case 1:
					weatherAccess(40);
					break;
				case 2:
					weatherAccess(41);
					break;
				case 3:
					weatherAccess(42);
					break;
				case 4:
					weatherAccess(43);
					break;
				case 5:
					weatherAccess(44);
					break;
				case 6:
					weatherAccess(45);
					break;
				case 7:
					weatherAccess(46);
					break;
				case 8:
					weatherAccess(47);
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
