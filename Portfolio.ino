void Portfolio(){
  javascriptPortfolio();
  getHeader(); 
  webpage += "<H3 class=\"text-center\">Portfolio</H3>\n";
  webpage += "<p class=\"text-center\">\n";
  webpage += "Caramels jelly chocolate bar. Chocolate bar topping sweet roll gummies donut jelly-o powder sesame snaps bear claw."; 
  webpage += "Caramels ice cream bonbon ice cream toffee. Carrot cake chocolate halvah candy canes cookie chocolate apple pie.";
  webpage += "Carrot cake candy tootsie roll cake topping soufflé bonbon muffin wafer. Cupcake jelly beans chocolate sweet tart lemon drops bonbon.";
  webpage += "Chupa chups tootsie roll marzipan carrot cake croissant cookie. Macaroon muffin cotton candy pastry croissant. Biscuit chocolate bar powder jelly."; 
  webpage += "Cheesecake jelly beans sugar plum. Bonbon marshmallow toffee donut muffin.";
  webpage += "Soufflé chocolate bar icing cookie macaroon icing caramels apple pie. Jelly beans pie wafer dessert tiramisu muffin apple pie carrot cake powder.";
  webpage += "Tiramisu carrot cake cake. Marshmallow cheesecake jujubes bear claw. Cake marzipan macaroon fruitcake dessert tootsie roll jelly beans fruitcake.";
  webpage += "Sweet roll jelly beans pie soufflé tootsie roll macaroon. Oat cake pudding bear claw candy dragée lollipop danish. Sesame snaps tart marzipan donut marshmallow marzipan marshmallow."; 
  webpage += "Gingerbread pudding wafer pie tart. Gingerbread oat cake liquorice gummies gummies muffin candy topping cheesecake. Danish macaroon powder soufflé halvah jelly beans cake pudding.";
  webpage += "Dragée cookie icing pastry sweet roll sweet roll. Apple pie marshmallow soufflé jelly powder bonbon. Wafer jelly beans macaroon.";
  webpage += "</p>\n";
  getFooter();
  server.send(200, "text/html", webpage);
}

void javascriptPortfolio(){
  javaScript="<script type='text/javascript'>\n";  // here you can add javascript to this page
  
  javaScript+="</script>\n";
}
