void Services(){
  javascriptServices();
  getHeader(); 
  webpage += "<H3 class=\"text-center\">Services</H3>\n";
  webpage += "<p class=\"text-center\">\n";
  webpage += "Bacon ipsum dolor amet picanha cow doner chuck turkey tenderloin prosciutto strip steak bresaola";
  webpage += "shankle rump. Strip steak leberkas brisket sausage jowl burgdoggen sirloin. Doner venison boudin beef.";
  webpage += "Porchetta tri-tip bresaola spare ribs jerky meatloaf picanha filet mignon drumstick short loin ham turducken cow.";
  webpage += "Sirloin prosciutto short ribs andouille kevin, venison rump filet mignon burgdoggen tri-tip bacon kielbasa shank doner tenderloin."; 
  webpage += "Frankfurter cow tenderloin, sirloin bacon hamburger prosciutto leberkas ground round short loin.";
  webpage += "Chuck chicken cupim pork chop corned beef burgdoggen bresaola tenderloin, jerky shank turkey spare ribs turducken.";
  webpage += "Leberkas sausage pig shoulder filet mignon ham bacon shank. Chicken beef ribs picanha tail.";
  webpage += "Doner hamburger jerky sausage cupim bresaola pork ham hock t-bone burgdoggen beef ribs pig turducken corned beef.";
  webpage += "Beef swine shank short loin tail strip steak jowl pork hamburger boudin pancetta corned beef.";
  webpage += "Tenderloin sirloin salami boudin andouille chicken tongue cupim burgdoggen strip steak pastrami.";
  webpage += "Pork loin chicken meatball beef sausage. Cow cupim corned beef, sausage leberkas tongue kevin venison spare ribs landjaeger boudin.";
  webpage += "Doner prosciutto hamburger short ribs shoulder. Tongue hamburger venison ground round landjaeger salami cow biltong pork loin pork belly picanha beef shank.";
  webpage += "Ham hock tri-tip venison brisket chuck bacon. Porchetta corned beef ground round t-bone.";
  webpage += "</p>\n";
  getFooter();
  server.send(200, "text/html", webpage);
}

void javascriptServices(){
  javaScript="<script type='text/javascript'>\n";  // here you can add javascript to this page
  
  javaScript+="</script>\n";
}
