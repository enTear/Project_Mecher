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
			readWordIn= "�s���{���̓V�C�����܂����H";
			SPEAK_MASTER;
				cout << endl << "0.�߂�" << endl;
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
			readWordIn= "�s���{���̓V�C�����܂����H";
			SPEAK_MASTER;
				cout << endl << "0.�߂�" << endl;
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
			readWordIn= "�s���{���̓V�C�����܂����H";
			SPEAK_MASTER;
				cout << endl << "0.�߂�" << endl;
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
