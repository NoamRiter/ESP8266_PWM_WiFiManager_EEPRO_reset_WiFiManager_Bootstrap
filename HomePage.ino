void homepage(){
  javascriptHomePage();
  getHeader(); 
  webpage += "<P class=\"text-center\">homepage</p>\n";
  webpage += "<p class=\"text-center\">\n";
  webpage += "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
  webpage += "Top gun chevron alpha trion robert winston, dickie davies en time-warped cabbie robert winston frontiersman hairy kiss."; 
  webpage += "top gun alpha trion chevron boogie nights, hairy kiss.";
  webpage += "top gun boogie nights jimi hendrix robert winston erudite headmaster alpha trion French café patron boxing champion frontiersman"; 
  webpage += "chevron dickie davies soup strainer en time-warped cabbie alpha trion consectetur. Arcu hungarian big daft brush?";
  webpage += "Leader of men mustachioed stache andrew weatherall jimi hendrix? Che guevara gent erudite headmaster imperial freestyle marquess";
  webpage += "of queensbury mexican old man in pub, bogie basket lando calrissian marquess of queensbury yosemite sam freestyle lemmy doctor watson."; 
  webpage += "class definer erudite headmaster imperial mexican che guevara mustachioed gent old man in pub toothbrush?";
  webpage += "Prince barin toothbrush Refined gentlemen cappuccino catcher hungarian che guevara educated landed gentry, landed gentry devilish cad"; 
  webpage += "che guevara toothbrush hungarian devilish cad imperial Refined gentlemen cappuccino catcher prince barin educated.";
  webpage += "Droopy face broom iron tache john aldridge cripes challenge you to a duel goose brandy,";
  webpage += "Sergeant major Droopy will you do the fandango john aldridge cripes face broom iron tache wario";
  webpage += "goose en time-warped cabbie challenge you to a duel brandy.";
  webpage += "</p>\n";
  getFooter();
  server.send(200, "text/html", webpage);
}

void javascriptHomePage(){
  javaScript="<script type='text/javascript'>\n"; // here you can add javascript to this page
  
  javaScript+="</script>\n";
}
