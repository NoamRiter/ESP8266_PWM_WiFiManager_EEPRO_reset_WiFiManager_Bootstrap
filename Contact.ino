void Contact(){
  javascriptContact();
  getHeader(); 
  webpage += "<H3 class=\"text-center\">Contact</H3>\n";
  webpage += "<p class=\"text-center\">\n";
  webpage += "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris ullamcorper vestibulum nibh, ac ultricies tortor tempus id.";
  webpage += "Sed tincidunt elit eget velit vehicula, at rutrum enim mattis. Nunc sed nisi pharetra, efficitur quam eget, pulvinar nulla.";
  webpage += "Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Quisque malesuada dolor lacus, ac";
  webpage += "imperdiet enim maximus sit amet. Donec eu ullamcorper arcu. Mauris vitae diam ante. Duis vehicula dolor eget finibus rutrum.";
  webpage += "Nam augue diam, volutpat nec mauris et, finibus rhoncus urna. Morbi a iaculis sem. Nullam neque justo, malesuada sed auctor";
  webpage += "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris ullamcorper vestibulum nibh, ac ultricies tortor tempus id.";
  webpage += "Sed tincidunt elit eget velit vehicula, at rutrum enim mattis. Nunc sed nisi pharetra, efficitur quam eget, pulvinar nulla.";
  webpage += "Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Quisque malesuada dolor lacus, ac";
  webpage += "imperdiet enim maximus sit amet. Donec eu ullamcorper arcu. Mauris vitae diam ante. Duis vehicula dolor eget finibus rutrum.";
  webpage += "Nam augue diam, volutpat nec mauris et, finibus rhoncus urna. Morbi a iaculis sem. Nullam neque justo, malesuada sed auctor";
  webpage += "a, varius eu ante. Aenean semper fringilla hendrerit.";
  webpage += "</p>";
  getFooter();
  server.send(200, "text/html", webpage);
}

void javascriptContact(){
  javaScript="<script type='text/javascript'>\n";
  
  javaScript+="</script>\n";
}
