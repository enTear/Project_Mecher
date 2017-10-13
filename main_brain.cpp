#include "standardInclude.h"
#include "BouyomiChan.h"
#include "quickAccessToWeb.h"
#include "weatherAccess.h"




int main(int argc, char const *argv[]) {


  readWordIn = "何か御用でしょうか？";
  SPEAK_MASTER;

  while (TURE) {

      cout << endl << "0.原初に戻る" << endl;
      cout << "1.検索" <<endl;
      cout << "2.天気予報" << endl;

    SELECT_NUNBER;
    if(selectNunber==0)break;
      switch (selectNunber) {
        case 1:
          readWordIn= "検索を行います。";
          SPEAK_MASTER;
          quickAccessToWeb();
        case 2:
          readWordIn= "天気を調べます。\n";
          SPEAK_MASTER;
          weatherAccess();
        }
    readWordIn = "他に御用はありますか？";
    SPEAK_MASTER;
  }
  readWordIn = "了解です、お疲れさまでした！";
  SPEAK_MASTER;
  return 0;
}
