#include "standardInclude.h"
#include "BouyomiChan.h"
#include "quickAccessToWeb.h"




int main(int argc, char const *argv[]) {


  readWordIn = "何か御用でしょうか？";
  SPEAK_MASTER;

  while (TURE) {

      cout << endl << "0.原初に戻る" << endl;
      cout << "1.検索" <<endl;

    SELECT_NUNBER;
    if(selectNunber==0)break;
      switch (selectNunber) {
        case 1:
          readWordIn= "検索を行います。";
          SPEAK_MASTER;
          quickAccessToWeb();

    }
    readWordIn = "他に御用はありますか？";
    SPEAK_MASTER;
  }
  return 0;
}
