int weatherAccess(int num);

int weatherAccessMaster(void){
	readWordIn= "�ǂ̒n���̓V�C�����܂����H";
	SPEAK_MASTER;
		cout << endl << "0.�߂�" << endl;
		cout << "1.�k�C���E���k" <<endl;
		cout << "2.�֓�" <<endl;
		cout << "3.����" <<endl;
		cout << "4.�ߋE" <<endl;
		cout << "5.����" <<endl;
		cout << "6.�l��" <<endl;
		cout << "7.��B�E����" <<endl;
	SELECT_NUNBER;

	switch (selectNunber) {
		case 0:
			return 0;
		case 1:
			readWordIn= "�s���{���̓V�C�����܂����H";
			SPEAK_MASTER;
				cout << endl << "0.�߂�" << endl;
				cout << "1.�k�C��" <<endl;
				cout << "2.�X" <<endl;
				cout << "3.���" <<endl;
				cout << "4.�{��" <<endl;
				cout << "5.�H�c" <<endl;
				cout << "6.�R�`" <<endl;
				cout << "7.����" <<endl;
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
			readWordIn= "�s���{���̓V�C�����܂����H";
			SPEAK_MASTER;
				cout << endl << "0.�߂�" << endl;
				cout << "1.���" <<endl;
				cout << "2.�Ȗ�" <<endl;
				cout << "3.�Q�n" <<endl;
				cout << "4.���" <<endl;
				cout << "5.��t" <<endl;
				cout << "6.����" <<endl;
				cout << "7.�_�ސ�" <<endl;
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
			readWordIn= "�s���{���̓V�C�����܂����H";
			SPEAK_MASTER;
				cout << endl << "0.�߂�" << endl;
				cout << "1.�V��" <<endl;
				cout << "2.�x�R" <<endl;
				cout << "3.�ΐ�" <<endl;
				cout << "4.����" <<endl;
				cout << "5.�R��" <<endl;
				cout << "6.����" <<endl;
				cout << "7.��" <<endl;
				cout << "8.�É�" <<endl;
				cout << "9.���m" <<endl;
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
			readWordIn= "�s���{���̓V�C�����܂����H";
			SPEAK_MASTER;
				cout << endl << "0.�߂�" << endl;
				cout << "1.�O�d" <<endl;
				cout << "2.����" <<endl;
				cout << "3.���s" <<endl;
				cout << "4.���" <<endl;
				cout << "5.����" <<endl;
				cout << "6.�ޗ�" <<endl;
				cout << "7.�a�̎R" <<endl;
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
			readWordIn= "�s���{���̓V�C�����܂����H";
			SPEAK_MASTER;
				cout << endl << "0.�߂�" << endl;
				cout << "1.����" <<endl;
				cout << "2.����" <<endl;
				cout << "3.���R" <<endl;
				cout << "4.�L��" <<endl;
				cout << "5.�R��" <<endl;
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
			readWordIn= "�s���{���̓V�C�����܂����H";
			SPEAK_MASTER;
				cout << endl << "0.�߂�" << endl;
				cout << "1.����" <<endl;
				cout << "2.����" <<endl;
				cout << "3.���Q" <<endl;
				cout << "4.���m" <<endl;
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
			readWordIn= "�s���{���̓V�C�����܂����H";
			SPEAK_MASTER;
				cout << endl << "0.�߂�" << endl;
				cout << "1.����" <<endl;
				cout << "2.����" <<endl;
				cout << "3.����" <<endl;
				cout << "4.�F�{" <<endl;
				cout << "5.�啪" <<endl;
				cout << "6.�{��" <<endl;
				cout << "7.������" <<endl;
				cout << "8.����" <<endl;
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
