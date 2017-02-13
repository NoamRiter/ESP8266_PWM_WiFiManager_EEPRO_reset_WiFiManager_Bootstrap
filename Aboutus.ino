void Aboutus(){
  javascriptAboutUs();
  getHeader(); 
  webpage += "<H3 class=\"text-center\">About us</H3>\n";
  webpage += "<p class=\"text-center\">\n";
  webpage += "Hodor hodor HODOR! Hodor hodor, hodor. Hodor HODOR hodor, hodor hodor. Hodor! Hodor hodor, Hodor hodor hodor. ";
  webpage += "hodor hodor - hodor. Hodor. Hodor, HODOR hodor, hodor hodor hodor hodor - hodor? Hodor HODOR hodor, hodor hodor - hodor?! Hodor, hodor - hodor... ";
  webpage += "Hodor hodor HODOR! Hodor hodor, hodor. Hodor hodor hodor hodor?c";
  webpage += "</p>\n";
  getFooter();
  server.send(200, "text/html", webpage);
}
void javascriptAboutUs(){
  javaScript="<script type='text/javascript'>\n";
  
  javaScript+="</script>\n";
}
