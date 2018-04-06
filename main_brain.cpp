#include "standardInclude.h"
#include "BouyomiChan.h"
#include "quickAccessToWeb.h"
#include "weatherAccess.h"




int main(int argc, char const *argv[]){


  readWordIn = "�������p�ł��傤���H";
  SPEAK_MASTER;

  while (TURE) {

      cout << endl << "0.�����ɖ߂�" << endl;
      cout << "1.����" <<endl;
      cout << "2.�V�C�\��" << endl;

    SELECT_NUNBER;
    if(selectNunber==0)break;
      switch (selectNunber) {
        case 1:
          readWordIn= "�������s���܂��B";
          SPEAK_MASTER;
          quickAccessToWeb();
        case 2:
          readWordIn= "�V�C�𒲂ׂ܂��B\n";
          SPEAK_MASTER;
          weatherAccessMaster();
        }
    readWordIn = "���Ɍ��p�͂����܂����H";
    SPEAK_MASTER;
  }
  readWordIn = "�����ł��A�����ꂳ�܂ł����I";
  SPEAK_MASTER;
  return 0;
}
