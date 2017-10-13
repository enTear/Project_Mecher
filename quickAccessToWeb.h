




int access(char *argv);


int quickAccessToWeb(void){
  char keyWord[32], wikiUrl[64], nicoHyaUrl[64], youtubeUrl[64], nicoMovieUrl[64];
  strcpy(wikiUrl, "https://ja.wikipedia.org/wiki/");
  strcpy(nicoHyaUrl, "http://dic.nicovideo.jp/a/");
  strcpy(youtubeUrl, "https://www.youtube.com/results?search_query=");
  strcpy(nicoMovieUrl, "http://www.nicovideo.jp/search/");

  readWordIn= "どのサイトを利用しますか？";
  SPEAK_MASTER;
    cout << endl << "0.戻る" << endl;
    cout << "1.Wikipedia" <<endl;
    cout << "2.ニコニコ大百科" <<endl;
    cout << "3.YouTube" <<endl;
    cout << "4.ニコニコ動画" <<endl;
  SELECT_NUNBER;
  if(selectNunber==0)return 0;
  readWordIn= "何を調べますか？:";
  SPEAK_MASTER;
  scanf("\n%[^\n]", &keyWord);
    switch (selectNunber) {
      case 1:
        strcat(wikiUrl, keyWord);
        access(wikiUrl);
        break;
      case 2:
        strcat(nicoHyaUrl, keyWord);
        access(nicoHyaUrl);
        break;
      case 3:
        strcat(youtubeUrl, keyWord);
        access(youtubeUrl);
        break;
      case 4:
        strcat(nicoMovieUrl, keyWord);
        access(nicoMovieUrl);
        break;
      default:
        break;
    }

  return 0;
}


int access(char *argc) {
  ShellExecute(NULL, "open", argc , NULL, NULL, SW_SHOW);
  return 0;
}
